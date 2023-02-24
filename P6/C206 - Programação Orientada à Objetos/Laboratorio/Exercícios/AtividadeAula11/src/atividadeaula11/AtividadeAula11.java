/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package atividadeaula11;

/**
 *
 * @author Gabriel
 */
public class AtividadeAula11 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        //Instanciando um objeto do tipo conta
        Conta c1=new Conta();
        c1.saldo=2000;
        c1.permissaoEmprestimo="nao";
        c1.fazorEmprestimo(6790);
        c1.sacar(145);
    }
    
}
