public class Monstro extends Carta{

    //Membros
    private int ataq;
    private int def;
    private int nivel;
    private String tipo;

    //Método para mostrar os dados da carta monstro
    @Override
    public void mostraInfo(){
        System.out.println("---- Atributos da Carta Monstro ----");
        System.out.println("Ataque = " + ataq + " pontos");
        System.out.println("Defesa = " + def + " pontos");
        System.out.println("Nível = " + nivel);
        System.out.println("Tipo = " + tipo);
        System.out.println();
        System.out.println("===================================================================");
    }

    //Getters e Setters
    public int getAtaq() {
        return ataq;
    }

    public void setAtaq(int ataq) {
        this.ataq = ataq;
    }

    public int getDef() {
        return def;
    }

    public void setDef(int def) {
        this.def = def;
    }

    public int getNivel() {
        return nivel;
    }

    public void setNivel(int nivel) {
        this.nivel = nivel;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }
}
