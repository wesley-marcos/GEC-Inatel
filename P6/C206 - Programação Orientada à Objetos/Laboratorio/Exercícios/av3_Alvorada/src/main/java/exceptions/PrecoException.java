package exceptions;

import produtos.Produtos;

import javax.swing.*;

public class PrecoException extends  Exception{
    public PrecoException(Produtos produto){
        JOptionPane.showMessageDialog(

                null,
                "A inserção do produto " + produto.getId() + " falhou!! \n" +
                        "Preço inserido inválido! \n" +
                        "Insira um valor de produto maior ou igual a R$1,00."

        );
    }
}
