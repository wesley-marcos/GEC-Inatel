public class Prato {

    //Atributos
    String nome;
    float precoKG;
    double peso;
    double total;

    //Método para mostrar as informações
    void mostraInfo(){

        System.out.println("Nome do prato: " + nome);
        System.out.println("Peso do prato: " + peso);
        System.out.println("Preço do quilo do prato: " + precoKG);
        System.out.println("Preço total do prato: " + total);
        System.out.println();
        }
}
