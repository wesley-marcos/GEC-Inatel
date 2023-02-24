package buy;

import dao.ConnectionDAO;
import items.Granade;
import items.Heal;
import items.Item;

import java.sql.SQLException;

public class Buy_Granade extends ConnectionDAO {

    boolean sucesso = false;

    //Método para comprar uma granada
    public boolean buy_granade(Item item, Granade gr) {

        connectToDB();
        String a = "INSERT INTO Item (idItem, nameItem, valueItem, typeItem) values(?, ?, ?, ?)";
        String sql2 = "INSERT INTO Granade (idGranade, typeGranade, rangeGranade, explosion_power, color, idItem) values(?, ?, ?, ?, ?, ?)";

        try {

            pst = con.prepareStatement(a);
            pst.setInt(1, item.idItem);
            pst.setString(2, item.nameItem);
            pst.setDouble(3, item.valueItem);
            pst.setString(4, item.typeItem);
            pst.execute();

            pst = con.prepareStatement(sql2);
            pst.setInt(1, gr.idGranade);
            pst.setString(2, gr.typeGranade);
            pst.setDouble(3, gr.rangeGranade);
            pst.setDouble(4, gr.explosion_power);
            pst.setString(5, gr.color);
            pst.setInt(6, item.idItem);
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
