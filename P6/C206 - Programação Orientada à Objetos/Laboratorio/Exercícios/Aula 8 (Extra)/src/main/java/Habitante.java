public abstract class Habitante {

    //Atributos
    public static int contador;
    protected int id;
    protected String nome;
    protected int idade;
    protected float energia;

    //Instanciando o tipo Arma
    Arma arma;

    //Construtor
    public Habitante(){
        contador++;
        id = contador;
    }

    //Método atacar
    public void atacar(){
        /*
        if(arma.isMagica()){
            energia -= 20;
        }

        else{
            energia -= 10;
        }
        */

        energia -= 10;
        System.out.println("O herói atacaou!");
        System.out.println("================ DADOS DA ARMA ================");
        System.out.println("Nome da Arma = " + arma.getArma());
        System.out.println("Ela é mágica? " + arma.isMagica());
    }

    //Método para mostrar as informações
    public void mostraInfo(){

        System.out.println("================ DADOS DOS HABITANTES ================");
        System.out.println("ID = " + id);
        System.out.println("Nome = " + nome);
        System.out.println("Idade = " + idade + " anos.");
        System.out.println("Energia = " + energia);
    }

    //Getters e Setters
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getEnergia() {
        return energia;
    }

    public void setEnergia(float energia) {
        this.energia = energia;
    }
}
