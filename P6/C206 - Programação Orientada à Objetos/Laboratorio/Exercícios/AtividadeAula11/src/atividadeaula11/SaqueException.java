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
public class SaqueException extends RuntimeException {
    
    SaqueException()
    {
        System.out.println("Não foi possível realizar o saque, você não possui esse valor disponível!!!!");
    }
    
    void valorSaldo(double valor)
    {
        System.out.println("Você não pode sacar mais que "+valor);
    }
}
