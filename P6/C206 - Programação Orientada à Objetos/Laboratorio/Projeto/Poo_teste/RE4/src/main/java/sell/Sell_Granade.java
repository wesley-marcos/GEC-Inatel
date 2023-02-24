package sell;

import dao.ConnectionDAO;
import items.Granade;
import items.Item;
import people.Player;

import java.sql.SQLException;

public class Sell_Granade extends ConnectionDAO {

    boolean sucesso = false;

    //Método para vender uma granada
    public boolean sell_granade(Item item, Granade granade, Player player){

        connectToDB();
        String sql = "DELETE FROM Granade WHERE idGranade = ?";

        try{
            pst = con.prepareStatement(sql);
            pst.setInt(1, granade.idGranade);
            pst.execute();
            sucesso = true;

            player.pasetas += item.valueItem;
            System.out.println("Pasetas C/ venda = " + player.pasetas);

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
