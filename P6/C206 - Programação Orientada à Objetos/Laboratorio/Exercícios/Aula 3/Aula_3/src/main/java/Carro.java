public class Carro {

    //Atributos
    String cor;
    String marca;
    String modelo;
    double velocidade_maxima;
    double velocidade_atual = 0.0;
    char ligado;
    char acelerar = 'N';
    double tempo_acelerar = 0.0;

    Motor motor;
    Motor motor1 = new Motor();

    //Método ligar
    char ligar(char ligado){
        ligado = 'S';

        return ligado;
    }

    //Método acelerar
    double acelerar(double tempo_acelerar){

        velocidade_atual += tempo_acelerar * 2.5;

        return velocidade_atual;
    }

    @Override
    public String toString() {
        return "Carro{" +
                "Cor = '" + cor + '\'' +
                ", Marca = '" + marca + '\'' +
                ", Modelo = '" + modelo + '\'' +
                ", Velocidade_maxima = " + velocidade_maxima + " km/h" +
                ", Velocidade_atual = " + velocidade_atual + " Km/h"+
                ", Ligado = " + ligado +
                ", Acelerar = " + acelerar +
                ", Tempo_acelerar = " + tempo_acelerar + " segundos" +
                ", Motor = " + motor +
                '}';
    }
}
