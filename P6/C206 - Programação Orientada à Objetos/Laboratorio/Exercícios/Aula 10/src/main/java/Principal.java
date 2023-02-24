import javax.swing.*;

public class Principal {

    public static void main(String[] args) {


        Conta conta = new Conta();
        conta.proprietario = "Wesley Marcos";
        conta.saldo = 60000;
        conta.permissaoEmprestimo = "Sim";

        try{
            conta.sacar(50000.0);
            System.out.println("Saldo: " + conta.saldo);
        } catch (Exception e){
            System.out.println(e);
        }


        try{

            if(conta.permissaoEmprestimo == "Não") {
                throw new EmprestimoException();
            }

            else{
                conta.fazerEmprestimo(100000.0);
                System.out.println("Saldo com empréstimo: " + conta.saldo);
            }
        } catch (EmprestimoException e){
            JOptionPane.showMessageDialog(null,
                    "Empréstimo não autorizado", "Resposta do Banco",
                    2);
        }
    }
}
