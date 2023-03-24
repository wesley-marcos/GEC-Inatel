import static org.junit.Assert.*;
import org.junit.Before;
import org.junit.Test;

public class TesteSearchProfessor {

    ProfessorService pservice;
    BuscaProfessor bprofessor;

    @Before
    public void setup(){
        pservice = new MockProfessorService();
        bprofessor = new BuscaProfessor(pservice);
    }

    @Test
    public void testeBuscaChris(){

        Professor prof = bprofessor.searchProfessor("Christopher");

        assertEquals("Christopher", prof.getNomeDoProfessor());
        assertEquals("19:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("18", prof.getSala());
    }

    @Test
    public void testeBuscaRenzo(){

        Professor prof = bprofessor.searchProfessor("Renzo");

        assertEquals("Renzo", prof.getNomeDoProfessor());
        assertEquals("17:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("18", prof.getSala());
    }

    @Test
    public void testeBuscaMarcelo(){

        Professor prof = bprofessor.searchProfessor("Marcelo");

        assertEquals("Marcelo", prof.getNomeDoProfessor());
        assertEquals("19:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("18", prof.getSala());
    }

    @Test
    public void testeBuscaYvo(){

        Professor prof = bprofessor.searchProfessor("Yvo");

        assertEquals("Yvo", prof.getNomeDoProfessor());
        assertEquals("17:30", prof.getHorarioDeAtendimento());
        assertEquals("Noturno", prof.getPeriodo());
        assertEquals("14", prof.getSala());
    }

    @Test
    public void testeBuscaSamuel(){

        Professor prof = bprofessor.searchProfessor("Samuel");

        assertEquals("Samuel", prof.getNomeDoProfessor());
        assertEquals("15:30", prof.getHorarioDeAtendimento());
        assertEquals("Integral", prof.getPeriodo());
        assertEquals("7", prof.getSala());
    }

    @Test
    public void testeBuscaProfValido(){

        boolean profValido = bprofessor.verifyProfessorExists("Christopher");

        assertTrue(profValido);
    }

}
