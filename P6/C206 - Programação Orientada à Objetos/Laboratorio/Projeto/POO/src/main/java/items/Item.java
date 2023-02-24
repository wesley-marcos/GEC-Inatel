package items;

public class Item {

    //Atributos
    public int idItem;
    public double valueItem;
    public String nameItem;
    public static int contador;

    //Construtor
    public Item(int idItem) {
        this.idItem = idItem;
        contador++;
        idItem = contador;
    }
}
