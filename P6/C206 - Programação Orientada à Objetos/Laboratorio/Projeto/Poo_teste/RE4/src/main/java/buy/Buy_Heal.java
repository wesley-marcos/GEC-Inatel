package buy;

import dao.ConnectionDAO;
import items.Heal;
import items.Item;

import java.sql.SQLException;

public class Buy_Heal extends ConnectionDAO {

    boolean sucesso = false;

    //Método para comprar um item de cura
    public boolean buy_heal(Item item, Heal heal){

        connectToDB();
        String sql = "INSERT INTO Item (idItem, valueItem, typeItem, nameItem) values(?, ?, ?, ?)";
        String sql4 = "INSERT INTO Heal (idHeal, typeHeal, effect, idItem) values(?, ?, ?, ?)";

        try{

            pst = con.prepareStatement(sql);
            pst.setInt(1, item.idItem);
            pst.setString(4, item.nameItem);
            pst.setDouble(2, item.valueItem);
            pst.setString(3, item.typeItem);
            pst.execute();

            pst = con.prepareStatement(sql4);
            pst.setInt(1, heal.idHeal);
            pst.setString(2, heal.typeHeal);
            pst.setString(3, heal.effect);
            pst.setInt(4, item.idItem);
            pst.execute();

            sucesso = true;

        } catch(SQLException exc){
            System.out.println("Erro: " + exc.getMessage());
            sucesso = false;

        } finally {
            try {
                con.close();
                pst.close();
            } catch(SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }

        return sucesso;
    }
}
