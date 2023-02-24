import javax.swing.*;

public class SaqueException  extends Exception{

    public double saldo;
    public String motivo = "Você está tentando sacar um valor maior que seu saldo!";

    //Construtor
    public SaqueException(double saldo){
        JOptionPane.showMessageDialog(null, "Saldo insuficiente");
        this.saldo = saldo;
    }

    //Método para explicar o motivo de não poder sacar
    public void SaqueNaoAutorizado(){
        JOptionPane.showMessageDialog(null, motivo, "Atenção:", 1);
    }
}
