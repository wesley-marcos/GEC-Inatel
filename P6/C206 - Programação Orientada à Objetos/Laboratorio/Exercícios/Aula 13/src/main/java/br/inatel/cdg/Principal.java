package br.inatel.cdg;

import br.inatel.cdg.control.Arquivo;
import br.inatel.cdg.model.Produto;

public class Principal {

    public static void main(String[] args) {

        Arquivo file = new Arquivo();

        Produto p1 = new Produto();
        p1.setNome("MELANCIA");
        p1.setTipo("Fruta");
        p1.setMarca("Magali Melancias");
        p1.setPreco(8.7f);

        Produto p2 = new Produto();
        p2.setNome("COCA-COLA");
        p2.setTipo("Refrigerante (Fardo)");
        p2.setMarca("Coca-Cola Fensa");
        p2.setPreco(30.0f);

        Produto p3 = new Produto();
        p3.setNome("LEITE SEMI-DESNATADO");
        p3.setTipo("Leite e Derivados");
        p3.setMarca("Cooper Rita");
        p3.setPreco(45.0f);

        Produto p4 = new Produto();
        p4.setNome("MAÇÃ PODRE");
        p4.setTipo("Frutas");
        p4.setMarca("Apple");
        p4.setPreco(0.0f);

        //Inserção no array
        file.inserirProduto(p1);
        file.inserirProduto(p2);
        file.inserirProduto(p3);
        file.inserirProduto(p4);

        //Leitura dos produtos
        file.lerProdutos(p1);

        file.lerProdutos();
    }
}
