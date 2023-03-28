import static org.junit.Assert.*;
import org.junit.Before;
import org.junit.Test;

public class TesteSearchProfessor {

    ProfessorService pService;
    BuscaProfessor bProfessor;

    @Before
    public void setup(){
        pService = new MockProfessorService();
        bProfessor = new BuscaProfessor(pService);
    }


    //Testes para cenário de sucesso
    @Test
    public void testeBuscaChris(){

        Professor prof = bProfessor.searchProfessor("Chris");

        assertEquals("Chris", prof.getNomeDoProfessor());
        assertEquals("19:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("17", prof.getSala());
    }

    @Test
    public void testeBuscaRenzo(){

        Professor prof = bProfessor.searchProfessor("Renzo");

        assertEquals("Renzo", prof.getNomeDoProfessor());
        assertEquals("17:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("18", prof.getSala());
    }

    @Test
    public void testeBuscaMarcelo(){

        Professor prof = bProfessor.searchProfessor("Marcelo");

        assertEquals("Marcelo", prof.getNomeDoProfessor());
        assertEquals("19:30", prof.getHorarioDeAtendimento());
        assertEquals("Integral", prof.getPeriodo());
        assertEquals("18", prof.getSala());
    }

    @Test
    public void testeBuscaYvo(){

        Professor prof = bProfessor.searchProfessor("Yvo");

        assertEquals("Yvo", prof.getNomeDoProfessor());
        assertEquals("17:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("14", prof.getSala());
    }

    @Test
    public void testeBuscaSamuel(){

        Professor prof = bProfessor.searchProfessor("Samuel");

        assertEquals("Samuel", prof.getNomeDoProfessor());
        assertEquals("15:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("7", prof.getSala());
    }

    @Test
    public void testeBuscaProfValido(){

        boolean profValido = bProfessor.verifyProfessorExists("Chris");

        assertTrue(profValido);
    }

    @Test
    public void testeBuscaProfessorPorSalaRenzo(){

        Professor prof = bProfessor.searchProfessor("Renzo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertEquals(predio,1);
    }

    @Test
    public void testeBuscaProfessorPorSalaSamuel(){

        Professor prof = bProfessor.searchProfessor("Samuel");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertEquals(predio,1);
    }

    @Test
    public void testeBuscaProfessorPorSalaMarcelo(){

        Professor prof = bProfessor.searchProfessor("Marcelo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertEquals(predio,1);
    }

    @Test
    public void testeBuscaProfessorPorSalaYvo(){

        Professor prof = bProfessor.searchProfessor("Yvo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertEquals(predio,1);
    }



    // Testes para cenário de falha
    @Test
    public void testeBuscaProfInvalido(){

        boolean profInvalido = bProfessor.verifyProfessorExists("Soned");

        assertFalse(profInvalido);
    }

    @Test
    public void testeBuscaProfessorPorSalaSamuelInvalido(){

        Professor prof = bProfessor.searchProfessor("Samuel");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,2);
    }

    @Test
    public void testeBuscaProfessorPorSalaRenzoInvalido(){

        Professor prof = bProfessor.searchProfessor("Renzo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,2);
    }

    @Test
    public void testeBuscaProfessorPorSalaMarceloInvalido(){

        Professor prof = bProfessor.searchProfessor("Marcelo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,3);
    }

    @Test
    public void testeBuscaProfessorPorSalaYvoInvalido(){

        Professor prof = bProfessor.searchProfessor("Yvo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,3);
    }

    @Test
    public void testeBuscaProfessorPorSalaYvoInvalido2(){

        Professor prof = bProfessor.searchProfessor("Yvo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,5);
    }

    @Test
    public void testeBuscaProfessorPorSalaRenzoInvalido2(){

        Professor prof = bProfessor.searchProfessor("Renzo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,5);
    }

    @Test
    public void testeBuscaProfessorPorSalaMarceloInvalido2(){

        Professor prof = bProfessor.searchProfessor("Marcelo");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,2);
    }

    @Test
    public void testeBuscaProfessorPorSalaSamuelInvalido2(){

        Professor prof = bProfessor.searchProfessor("Samuel");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,3);
    }

    @Test
    public void testeBuscaProfessorPorSalaSamuelInvalido3(){

        Professor prof = bProfessor.searchProfessor("Samuel");
        int sala = Integer.parseInt(prof.getSala());
        int predio = prof.getPredios(sala).get(0);

        assertNotEquals(predio,4);
    }

}