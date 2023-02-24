public class Intercambio extends Viagem{

    private String nomeFacul;
    private float custoMoradia;

    //Método que calcula o gasto total
    @Override
    public float calculaGastoTotal(){

        super.calculaGastoTotal();
        System.out.println("O gasto total no intercâmbio foi de R$" + (passagem + custoMoradia) + ".");
        return passagem + custoMoradia;
    }

    //Getters e Setters
    public String getNomeFacul() {
        return nomeFacul;
    }

    public void setNomeFacul(String nomeFacul) {
        this.nomeFacul = nomeFacul;
    }

    public float getCustoMoradia() {
        return custoMoradia;
    }

    public void setCustoMoradia(float custoMoradia) {
        this.custoMoradia = custoMoradia;
    }
}
