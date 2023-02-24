import arquivo.Arquivo;
import exceptions.PrecoException;
import produtos.Produtos;

public class Main {

    public static void main(String[] args) throws PrecoException {

        Arquivo file = new Arquivo();

        Produtos p1 = new Produtos();
        p1.setNome("Picanha");
        p1.setTipo("Carnes");
        p1.setMarca("Friquesa");
        p1.setPreco(35.5f);

        Produtos p2 = new Produtos();
        p2.setNome("Tomate");
        p2.setTipo("Frutas");
        p2.setMarca("Sem Marca");
        p2.setPreco(7.3f);

        Produtos p3 = new Produtos();
        p3.setNome("Refri");
        p3.setTipo("Refrigerantes");
        p3.setMarca("Qualquer um");
        p3.setPreco(30.0f);

        file.inserirProduto(p1);
        file.inserirProduto(p2);
        file.inserirProduto(p3);

        file.lerProdutos();
    }
}
