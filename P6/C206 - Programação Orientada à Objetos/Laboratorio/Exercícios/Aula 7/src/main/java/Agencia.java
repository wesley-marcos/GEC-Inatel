public class Agencia {

    public String nome;




    //Método para listagem das viagens
    public void listarViagens(Viagem [] v){

        for(int i= 0; i < v.length; i++){

            if(v[i] != null){

                v[i].calculaGastoTotal();

            }

        }

    }
}
