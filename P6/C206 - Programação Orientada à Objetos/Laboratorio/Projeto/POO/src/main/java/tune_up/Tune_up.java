package tune_up;

import dao.ConnectionDAO;
import items.Gun;
import java.sql.SQLException;

public class Tune_up extends ConnectionDAO {

    boolean sucesso = false; //Variável de retorno

    //Método para upar uma arma
    public boolean upgrade(Gun gun){

        //Conectando ao Banco de Dados
        connectToDB();

        String sql = "UPDATE Gun SET fire_power = ?, firing_speed = ?, reload_speed = ?, capacity = ? WHERE idGun = ?";

        try{
            pst = con.prepareStatement(sql);
            pst.setDouble(1, gun.fire_power);
            pst.setDouble(2, gun.firing_speed);
            pst.setDouble(3, gun.reload_speed);
            pst.setInt(4, gun.capacity);
            pst.setInt(5, gun.idGun);
            pst.execute();
            sucesso = true;

        } catch(SQLException exc){
            System.out.println("Erro: " + exc.getMessage());
            sucesso = false;

        } finally {

            try {
                con.close();
                pst.close();
            }

            catch(SQLException exc) {
                System.out.println("Erro: " + exc.getMessage());
            }
        }

        return sucesso;

    }
}
