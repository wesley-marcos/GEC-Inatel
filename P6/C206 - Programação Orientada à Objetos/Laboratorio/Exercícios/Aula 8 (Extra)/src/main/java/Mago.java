public class Mago extends Habitante implements Feitico, Cura{

    //Atributos
    private String cor;

    //Método atacar
    @Override
    public void atacar(){
        super.atacar();
        System.out.println();
    }

    //Método para mostrar as informações
    @Override
    public void mostraInfo(){
        System.out.println("================ DADOS DO MAGO ================");
        super.mostraInfo();
        System.out.println("Cor = " + cor);
    }

    //Método para lançar feitiços (através da interface "Feitico")
    @Override
    public void lancaFeitico() {
        energia = energia - energia*0.1f;
        System.out.println("O mago lançou um feitiço!");
    }

    //Método para curar (através da interface "Cura")
    @Override
    public void curar() {

        energia = energia - energia * 0.15f;
        System.out.println("O habitante foi curado!");
    }

    //Getter e Setter
    public String getCor() {
        return cor;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }
}
