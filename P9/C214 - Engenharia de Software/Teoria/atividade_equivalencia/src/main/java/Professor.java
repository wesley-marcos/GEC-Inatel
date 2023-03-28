import java.util.ArrayList;

public class Professor {

    private String nomeDoProfessor;
    private String horarioDeAtendimento;
    private String periodo;
    private String sala;
    private ArrayList<Integer> predios = new ArrayList<Integer>();

    public Professor(String nomeDoProfessor, String horarioDeAtendimento, String periodo, String sala) {
        this.nomeDoProfessor = nomeDoProfessor;
        this.horarioDeAtendimento = horarioDeAtendimento;
        this.periodo = periodo;
        this.sala = sala;
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

    public ArrayList<Integer> getPredios(int sala) {
        // Setando os prédios de acordo com a sala do professor
        if(sala>=1||sala<=5){
            predios.add(1);
        }else if(sala>5||sala<=10){
            predios.add(2);
        }else if(sala>10||sala<=15){
            predios.add(3);
        }else if(sala>15||sala<=20){
            predios.add(4);
        }else if(sala>20||sala<=25){
            predios.add(6);
        }

        // Retornando o array de professores
        return predios;
    }

    public void setPredios(ArrayList<Integer> predios) {
        this.predios = predios;
    }
}
