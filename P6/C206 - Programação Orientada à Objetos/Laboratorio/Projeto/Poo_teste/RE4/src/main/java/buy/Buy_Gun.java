package buy;

import dao.ConnectionDAO;
import items.Gun;
import items.Item;

import java.sql.SQLException;

public class Buy_Gun extends ConnectionDAO {

    boolean sucesso = false;

    // Método para comprar uma arma
    public boolean buy_gun(Item item, Gun gun) {

        connectToDB();
        String sql = "INSERT INTO Item (idItem, valueItem, typeItem, nameItem) values(?, ?, ?, ?)";
        String sql3 = "INSERT INTO Gun (idGun, fire_power, firing_speed, reload_speed, capacity, rangeGun, explosion, capacity_total, num_bulls_mag, idItem) values(?, ?, ?, ?, ?, ?, ?, ?, ?, ?)";

        try {

            pst = con.prepareStatement(sql);
            pst.setInt(1, item.idItem);
            pst.setDouble(2, item.valueItem);
            pst.setString(3, item.typeItem);
            pst.setString(4, item.nameItem);
            pst.execute();

            pst = con.prepareStatement(sql3);
            pst.setInt(1, gun.idGun);
            pst.setDouble(2, gun.fire_power);
            pst.setDouble(3, gun.firing_speed);
            pst.setDouble(4, gun.reload_speed);
            pst.setInt(5, gun.capacity);
            pst.setInt(6, gun.range);
            pst.setString(7, gun.explosion);
            pst.setInt(8, gun.capacity_total);
            pst.setInt(9, gun.num_bulls_mag);
            pst.setInt(10, item.idItem);
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
