package br.inatel.cdg.exceptions;

import br.inatel.cdg.model.Produto;

import javax.swing.*;

public class PrecoException extends Exception{

    public PrecoException(Produto p){
        JOptionPane.showMessageDialog(

                null,
                "A inserção do produto " + p.getId() + " falhou!! \n" +
                        "Preço inserido inválido! \n" +
                        "Insira um valor de produto maior ou igual a R$1,00."

        );
    }
}
