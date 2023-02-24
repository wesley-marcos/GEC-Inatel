package onibus;

public class Onibus {

    //Atributos
    private int numAssentos;
    private int contador;
    private int id;
    private float precoPassagem;
    private String companhia;

    //Construtor
    public Onibus(){
        numAssentos = 40;
        contador++;
        id = contador;
    }

    //Método to string
    @Override
    public String toString() {
        return "Onibus{" +
                "numAssentos = " + numAssentos +
                ", contador = " + contador +
                ", id = " + id +
                ", precoPassagem = " + precoPassagem +
                ", companhia = '" + companhia + '\'' +
                '}';
    }

    //Getters e setters
    public int getNumAssentos() {
        return numAssentos;
    }

    public void setNumAssentos(int numAssentos) {
        this.numAssentos = numAssentos;
    }

    public int getContador() {
        return contador;
    }

    public void setContador(int contador) {
        this.contador = contador;
    }

    public float getPrecoPassagem() {
        return precoPassagem;
    }

    public void setPrecoPassagem(float precoPassagem) {
        this.precoPassagem = precoPassagem;
    }

    public String getCompanhia() {
        return companhia;
    }

    public void setCompanhia(String companhia) {
        this.companhia = companhia;
    }
}
