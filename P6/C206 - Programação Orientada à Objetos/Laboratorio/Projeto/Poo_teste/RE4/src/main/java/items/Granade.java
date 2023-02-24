package items;

public class Granade extends Item{

    public int idGranade;
    public String typeGranade;
    public double rangeGranade;
    public double explosion_power;
    public String color;

    public Granade(int idItem) {
        super(idItem);
        idGranade = idItem;
    }
}
