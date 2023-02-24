public class Elfo extends Habitante implements Cura{

    //Atributos
    private String tribo;

    //Método para viagem
    public void viajar(){
        System.out.println("O elfo está viajando!");
    }

    //Método para atacar
    @Override
    public void atacar(){
        super.atacar();
        System.out.println();
    }

    //Método para curar (através da interface "Cura")
    @Override
    public void curar() {

        energia = energia - energia * 0.15f;
        System.out.println("O habitante foi curado!");
    }

    //Método para mostrar as informações
    @Override
    public void mostraInfo(){
        System.out.println("================ DADOS DO ELFO ================");
        super.mostraInfo();
        System.out.println("Tribo = " + tribo);
    }

    //Getters e Setters
    public String getTribo() {
        return tribo;
    }

    public void setTribo(String tribo) {
        this.tribo = tribo;
    }
}
