package sell;

import dao.ConnectionDAO;
import items.Granade;
import items.Item;
import items.Treasure;
import people.Player;

import java.sql.SQLException;

public class Sell_Treasure extends ConnectionDAO {

    boolean sucesso = false;

    //Método para vender um tesouro
    public boolean sell_treasure(Item item, Treasure treasure, Player player){

        connectToDB();
        String sql = "DELETE FROM Treasure WHERE idTreasures = ?";

        try{
            pst = con.prepareStatement(sql);
            pst.setInt(1, treasure.idTreasures);
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
