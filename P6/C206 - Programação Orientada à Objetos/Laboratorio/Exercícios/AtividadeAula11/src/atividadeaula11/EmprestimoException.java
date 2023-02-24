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
public class EmprestimoException extends RuntimeException {
    EmprestimoException(){
        System.out.println("Não foi possível realizar o empréstimo!!!");
    }
    
    public void explicacao()
    {
        System.out.println("Você não tem a carta de permissão do banco!!");
    }
}
