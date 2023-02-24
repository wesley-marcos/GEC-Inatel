public class Conta {

    //Atributos
    public String proprietario;
    public double saldo;
    public String permissaoEmprestimo;
    public double valorEmprestimo;

    //Método para fazer o saque
    public void sacar(Double valor){

        try{
            if(valor > saldo){
                throw new SaqueException(saldo);
            }

            else{
                saldo -= valor;
            }
        } catch (SaqueException e){
            System.out.println(e);
        }
    }

    //Método para fazer o empréstimo
    public void fazerEmprestimo(Double valor){

        try{
            if(valor < saldo){
                throw new SaqueException(saldo);
            }

            else{
                saldo = saldo + valor;
            }
        } catch (SaqueException e){
            System.out.println(e);
        }

    }
}
