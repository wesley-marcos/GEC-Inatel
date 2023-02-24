package items;

import people.Player;

public class Heal extends Item{

    public int idHeal;
    public String typeHeal;
    public String effect;

    public Heal(int idItem) {
        super(idItem);
        idHeal = idItem;
    }

    public void helling(Player p, String typeHeal){
        //p.life =
    }
}