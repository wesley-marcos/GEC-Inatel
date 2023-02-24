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
public class Conta {

    //Atributos de uma classe conta
    public String propietario;
    public String permissaoEmprestimo;
    public float valorEmprestimo;
    public double saldo;

    //Metodos de uma classe Conta
    public void sacar(double valor) {
        try {
            if (valor > saldo) {
                throw new SaqueException();
            }
            else
            {
                System.out.println("Saldo em conta: "+saldo);
                System.out.println("Você realizou um saque de "+valor+"R$");
                System.out.println("Valor disponivel para saques futuros: "+(saldo-valor));
            }
                
            
        } catch (SaqueException e) {
            e.valorSaldo(saldo);

        }

    }

    public void fazorEmprestimo(double valor) {
        try{
            if(permissaoEmprestimo.equalsIgnoreCase("Sim"))
            {
                System.out.println("Foi possivel realizar o emprestimo!!");
                System.out.println("Valor Empréstimo: "+valor+"R$");
            }
            else
            {
               throw new EmprestimoException();
            }
        }catch(EmprestimoException e)
        {
            e.explicacao();
        }

    }

}
