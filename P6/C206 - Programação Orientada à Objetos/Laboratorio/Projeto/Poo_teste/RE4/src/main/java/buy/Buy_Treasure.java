package buy;

import dao.ConnectionDAO;
import items.Heal;
import items.Item;
import items.Treasure;

import java.sql.SQLException;

public class Buy_Treasure extends ConnectionDAO {

    boolean sucesso = false;

    //Método para comprar um tesouro
    public boolean buy_treasure(Item item, Treasure tr) {

        connectToDB();
        String sql = "INSERT INTO Item (idItem, valueItem, typeItem, nameItem) values(?, ?, ?, ?)";
        String sql5 = "INSERT INTO Treasure (idTreasures, nameTreasure, idItem) values(?, ?, ?)";

        try {

            pst = con.prepareStatement(sql);
            pst.setInt(1, item.idItem);
            pst.setString(4, item.nameItem);
            pst.setDouble(2, item.valueItem);
            pst.setString(3, item.typeItem);
            pst.execute();

            pst = con.prepareStatement(sql5);
            pst.setInt(1, tr.idTreasures);
            pst.setString(2, tr.nameTreasure);
            pst.setInt(3, item.idItem);
            pst.execute();

            sucesso = true;

        } catch (SQLException exc) {
            System.out.println("Erro: " + exc.getMessage());
            sucesso = false;

        } finally {
            try {
                con.close();
                pst.close();
            } catch (SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }

        return sucesso;

    }
}
