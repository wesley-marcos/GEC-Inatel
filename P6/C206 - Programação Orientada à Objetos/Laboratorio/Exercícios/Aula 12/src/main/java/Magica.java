public class Magica extends Carta{

    //Membros
    private String efeito;
    private String tipo;

    //Método para mostrar as informações da carta mágica
    @Override
    public void mostraInfo(){

        System.out.println("---- Atributos da Carta Mágica ----");
        System.out.println("Efeito da carta = " + efeito);
        System.out.println("Tipo = " + tipo);
        System.out.println();
        System.out.println("===================================================================");
    }

    //Getters e Setters
    public String getEfeito() {
        return efeito;
    }

    public void setEfeito(String efeito) {
        this.efeito = efeito;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
}
