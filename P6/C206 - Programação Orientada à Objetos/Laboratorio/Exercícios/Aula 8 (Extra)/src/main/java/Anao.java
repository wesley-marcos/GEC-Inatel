public class Anao extends Habitante implements Mineracao{

    //Atributos
    private float altura;
    private String reino;

    //Método atacar
    @Override
    public void atacar(){
        System.out.println("================ DADOS DO ANÃO ================");
        super.atacar();
        System.out.println("Altura = " + altura);
        System.out.println("Reino = " + reino);
    }

    @Override
    //Método para mostrar as informações
    public void mostraInfo(){
        super.mostraInfo();
    }

    @Override
    public void minerar(){
        System.out.println("O anão está minerando!");
    }

    //Getters e Setters
    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public String getReino() {
        return reino;
    }

    public void setReino(String reino) {
        this.reino = reino;
    }
}
