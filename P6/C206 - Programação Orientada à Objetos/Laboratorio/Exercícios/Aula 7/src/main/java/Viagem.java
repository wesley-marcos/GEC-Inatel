public class Viagem extends Agencia{

    protected String duracao = "15";
    protected String destino = "Rio de Janeiro";
    protected float passagem;


    //Método que calcula o gasto total
    public float calculaGastoTotal(){

        passagem = 20;
        System.out.println("===================================================");
        System.out.println("A duração da viagem foi de " + duracao + " dias.");
        System.out.println("O destino da viagem foi " + destino + ".");
        System.out.println("O Preço da passagem é de R$" + passagem + ".");

        return 0;
    }

}
