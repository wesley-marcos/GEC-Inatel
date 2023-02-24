package people;

import dao.ConnectionDAO;
import items.Gun;
import items.Item;

import java.sql.SQLException;

public class Merchant extends ConnectionDAO {

    //Item itens = new Item();

    boolean sucesso = false;



    //Método para mostrar os itens
    public void mostraInfo(Gun g){
        System.out.println("ID = " + g.idGun + "\n" +
                "Fire Power = " + g.fire_power + "\n" +
                "Firing Speed = " + g.firing_speed + "\n" +
                "Reload Speed = " + g.reload_speed + "\n" +
                "Capacity = " + g.capacity + "\n" +
                "Range = " + g.range + "\n" +
                "Explosion = " + g.explosion + "\n" +
                "Capacity = " +g.capacity_total + "\n" +
                "Balas no Pente = " + g.num_bulls_mag);
    }
}
