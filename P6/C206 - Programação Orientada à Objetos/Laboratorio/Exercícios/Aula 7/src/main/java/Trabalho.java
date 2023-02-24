public class Trabalho extends Viagem{

    private String nomeEmpresa;

    //Método que calcula o gasto total
    @Override
    public float calculaGastoTotal(){
        super.calculaGastoTotal();
        System.out.println("O custo da viagem à trabalho foi de R$0,00, pois a empresa cobriu os gastos!");
        return 0;
    }

    //Getter e Setter
    public String getNomeEmpresa() {
        return nomeEmpresa;
    }

    public void setNomeEmpresa(String nomeEmpresa) {
        this.nomeEmpresa = nomeEmpresa;
    }
}
