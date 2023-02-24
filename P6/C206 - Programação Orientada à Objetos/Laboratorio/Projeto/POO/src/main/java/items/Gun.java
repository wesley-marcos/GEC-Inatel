package items;

public class Gun extends Item {

    // Atributos
    public int idGun;
    public double fire_power;
    public double firing_speed;
    public double reload_speed;
    public int capacity;
    public int range;
    public String explosion;
    public int capacity_total;
    public int num_bulls_mag;

    //Construtor
    public Gun(int idItem) {
        super(idItem);
        idGun = idItem;
    }
}
