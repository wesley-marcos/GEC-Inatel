package br.inatel.cdg.model;

public class Produto {

    //Membros
    private String nome;
    private String marca;
    private float preco;
    private String tipo;
    private static int cont;
    private int id;

    //Construtor
    public Produto(){
        cont++;
        id = cont;
    }

    //Método para mostrar as informações
    public void mostraInfo(){

        System.out.println("================ Produto " + id + " ================");
        System.out.println("Nome = " + nome);
        System.out.println("Marca = " + marca);
        System.out.println("Tipo (categoria) = " + tipo);
        System.out.println("Preço = R$" + preco);
        System.out.println();
    }

    //Getters e Setters
    public String getNome() {return nome;}

    public void setNome(String nome) {this.nome = nome;}

    public String getMarca() {return marca;}

    public void setMarca(String marca) {this.marca = marca;}

    public float getPreco() {return preco;}

    public void setPreco(float preco) {this.preco = preco;}

    public String getTipo() {return tipo;}

    public void setTipo(String tipo) {this.tipo = tipo;}

    public int getId() {return id;}
}
