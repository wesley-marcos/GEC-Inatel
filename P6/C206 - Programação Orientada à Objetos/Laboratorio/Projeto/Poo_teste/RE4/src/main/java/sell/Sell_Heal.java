package sell;

import dao.ConnectionDAO;
import items.Granade;
import items.Heal;
import items.Item;
import people.Player;

import java.sql.SQLException;

public class Sell_Heal extends ConnectionDAO {

    boolean sucesso = false;

    //Método para vender um item de cura
    public boolean sell_heal(Item item, Heal heal, Player player){

        connectToDB();
        String sql = "DELETE FROM Heal WHERE idHeal = ?";

        try{
            pst = con.prepareStatement(sql);
            pst.setInt(1, heal.idHeal);
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
