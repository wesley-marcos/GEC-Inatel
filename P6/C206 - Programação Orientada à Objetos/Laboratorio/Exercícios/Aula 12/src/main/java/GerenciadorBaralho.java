import java.util.ArrayList;
import java.util.List;

public class GerenciadorBaralho implements Comparable <Carta> {

    private List <Carta> deck = new ArrayList<>();

    //Método para adicionar uma carta ao deck
    public void addCarta(Carta c){
        deck.add(c);
    }

    //Método para remover uma carta do deck
    public void removerCarta(Carta c){
        deck.remove(c);
    }

    //Método para listar o deck completo
    public void listarDeckCompleto(){

        for(int i = 0; i < deck.size(); i++){
            System.out.println("------------ Carta " + deck.get(i).id + " ------------");
            System.out.println("Nome = " + deck.get(i).nome);
            System.out.println("Atributo = " + deck.get(i).atributo);
            System.out.println();

            if(deck.get(i) instanceof Monstro){
                Monstro maux = (Monstro) deck.get(i);
                maux.mostraInfo();
            }

            if (deck.get(i) instanceof Magica){
                Magica magaux = (Magica) deck.get(i);
                magaux.mostraInfo();
            }

        }
    }

    //Método para listar o deck com as respectivas posições
    public void listarDeckPosicoes(){

        for(int i = 0; i<deck.size(); i++){

            System.out.println("Carta " + (i+1) + ": " + deck.get(i));
        }
    }

    //Método para editar uma carta e sua posição no deck
    public void editarCarta(int indice, Carta c){

        deck.set(indice, c);
    }

    //Método para mostrar o número de carta do deck
    public int numeroCartas(){

        int numero;

        return numero =  deck.size();
    }

    //Método para ordenar as cartas do deck por nome
    @Override
    public int compareTo(Carta c) {

        return c.nome.compareTo(c.nome);
    }
}
