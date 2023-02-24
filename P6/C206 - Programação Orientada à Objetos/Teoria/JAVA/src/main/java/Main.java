public class Main {

    public static void main(String[] args) {
        Zumbi zumbi1 = new Zumbi();
        zumbi1.vida = 30;
        zumbi1.nome = "João";
        zumbi1.comer();
        String falar = zumbi1.falar();
        System.out.println("A vida do zombie é: " + zumbi1.vida);
        System.out.print(zumbi1.nome + " disse a frase: " + falar);

    }
}
