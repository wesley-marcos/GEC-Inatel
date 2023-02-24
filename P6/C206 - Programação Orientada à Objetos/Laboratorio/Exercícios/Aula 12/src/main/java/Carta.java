public class Carta implements Comparable{

    //Membros
    protected String nome;
    protected String atributo;
    protected String id;

    //Método para mostrar as informações
    public void mostraInfo(){

        System.out.println("------------------ Informações da Carta ------------------");
        System.out.println("");
        System.out.println("Nome = " + nome);
        System.out.println("Atributo = " + atributo);
        System.out.println("ID = " + id);
    }

    @Override
    public int compareTo(Object o) {
        return 0;
    }
}
