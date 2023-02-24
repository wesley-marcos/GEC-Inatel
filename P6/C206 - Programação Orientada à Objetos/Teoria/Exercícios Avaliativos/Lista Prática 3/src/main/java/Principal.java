public class Principal {

    public static void main(String[] args) {

        Endereco e1 = new Endereco("Antonio Lopes Sobrinho", "Nossa Senhora Aparecida", 455);
        Endereco e2 = new Endereco("Quito Carneiro", "Delcide Telles", 13);
        Endereco e3 = new Endereco("Avenida João de Camargo", "Centro", 510);
        Endereco e4 = new Endereco("João Moreira Salles", "Centro", 850);
        Endereco e5 = new Endereco("Sem nome.", "São Benedito", 0);
        Pessoa p1 = new Pessoa("Wesley Marcos Borges", 1454966360, 3);
        Pessoa p2 = new Pessoa("INATEL", 1921584785, 2);
        Pessoa p3 = new Pessoa("Lucas de Souza", 1455963265, 1);
        p1.addEndereco(e1);
        p1.addEndereco(e2);
        p1.addEndereco(e5);
        p1.mostraInfo();
        p2.addEndereco(e3);
        //p2.addEndereco(e4);
        p2.mostraInfo();
        p3.addEndereco(e4);
        p3.mostraInfo();




    }
}
