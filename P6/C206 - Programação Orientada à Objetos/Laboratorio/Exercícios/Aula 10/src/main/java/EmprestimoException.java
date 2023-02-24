public class EmprestimoException extends Exception{

    //Construtor
    public void EmprestimoException(double valor){
        System.out.println("Empréstimo não autorizado no valor de R$" + valor + ".");
    }

    //Método para mostrar o motivo de não haver empréstimo
    public void EmprestimoNaoAutorizado(){
        System.out.println("Porque não");
    }
}
