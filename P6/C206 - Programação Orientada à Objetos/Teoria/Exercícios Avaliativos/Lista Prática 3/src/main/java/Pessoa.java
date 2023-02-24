public class Pessoa {

    //Atributos
    public String nome;
    public long cpf;

    Endereco[] enderecos;

    //Construtor
    public Pessoa(String nome, int cpf, int qtdEnd) {
        this.nome = nome;
        this.cpf = cpf;

        enderecos = new Endereco[qtdEnd];
    }

    //Método para adicionar endereços
    public void addEndereco(Endereco end){

        for(int i = 0; i < enderecos.length; i++){

            if(enderecos[i] == null){
                enderecos[i] = end;
                break;
            }
        }
    }

    //Método para mostrar as informações
    public void mostraInfo(){

        System.out.println("================= Informações da Pessoa =================");
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + cpf    );
        System.out.println();

        for(int i = 0; i < enderecos.length; i++){

            if(enderecos[i] != null){

                System.out.println("-------------- Endereço " + (i+1) + " --------------");
                System.out.println("Rua: " + enderecos[i].rua);
                System.out.println("Número: " + enderecos[i].num);
                System.out.println("Bairro: " + enderecos[i].bairro);
                System.out.println();
            }
        }
    }
}
