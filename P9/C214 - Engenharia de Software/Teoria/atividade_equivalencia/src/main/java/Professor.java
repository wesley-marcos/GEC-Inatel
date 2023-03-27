import java.util.ArrayList;

public class Professor {

    private String nomeDoProfessor;
    private String horarioDeAtendimento;
    private String periodo;
    private String sala;
    //private String predio;

    public Professor(String nomeDoProfessor, String horarioDeAtendimento, String periodo, String sala) {
        this.nomeDoProfessor = nomeDoProfessor;
        this.horarioDeAtendimento = horarioDeAtendimento;
        this.periodo = periodo;
        this.sala = sala;
        //this.predio = predio;
    }

    public String getNomeDoProfessor() {
        return nomeDoProfessor;
    }

    public void setNomeDoProfessor(String nomeDoProfessor) {
        this.nomeDoProfessor = nomeDoProfessor;
    }

    public String getHorarioDeAtendimento() {
        return horarioDeAtendimento;
    }

    public void setHorarioDeAtendimento(String horarioDeAtendimento) {
        this.horarioDeAtendimento = horarioDeAtendimento;
    }

    public String getPeriodo() {
        return periodo;
    }

    public void setPeriodo(String periodo) {
        this.periodo = periodo;
    }

    public String getSala() {
        return sala;
    }

    public void setSala(String sala) {
        this.sala = sala;
    }

    public String getPredio(String sala) {

        int salaInteiros = Integer.parseInt(sala);
        String predio = "";

        if (salaInteiros >= 1 && salaInteiros <= 5){
            predio = "1";
        }

        else if (salaInteiros >= 6 && salaInteiros <= 10){
            predio = "2";
        }

        else if (salaInteiros >= 11 && salaInteiros <= 15){
            predio = "3";
        }

        else if (salaInteiros >= 16 && salaInteiros <= 20){
            predio = "4";
        }

        else if (salaInteiros >= 21 && salaInteiros <= 25){
            predio = "6";
        }

        return predio;
    }
}
