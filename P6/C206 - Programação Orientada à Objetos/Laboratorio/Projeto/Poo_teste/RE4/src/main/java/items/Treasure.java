package items;

public class Treasure extends Item{

    public int idTreasures;
    public String nameTreasure;

    public Treasure(int idItem) {
        super(idItem);
        idTreasures = idItem;
    }
}
