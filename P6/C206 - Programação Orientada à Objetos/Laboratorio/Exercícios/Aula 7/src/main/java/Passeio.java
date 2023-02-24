public class Passeio extends Viagem{

    private String pontosTuristicos;
    private float custoHotel;

    //Método que calcula o gasto total
    @Override
    public float calculaGastoTotal(){

        super.calculaGastoTotal();
        System.out.println("O valor gasto no passeio foi de R$" + (passagem + custoHotel) + ".");
        return passagem + custoHotel;
    }

    //Getters e Setters
    public String getPontosTuristicos() {
        return pontosTuristicos;
    }

    public void setPontosTuristicos(String pontosTuristicos) {
        this.pontosTuristicos = pontosTuristicos;
    }

    public float getCustoHotel() {
        return custoHotel;
    }

    public void setCustoHotel(float custoHotel) {
        this.custoHotel = custoHotel;
    }
}
