public class Principal {

    public static void main(String[] args) {

        GerenciadorBaralho gerenc = new GerenciadorBaralho();
        Monstro c1 = new Monstro();
        Monstro c2 = new Monstro();
        Magica c3 = new Magica();
        Magica c4 = new Magica();

        //Inserindo dados às cartas
        c1.nome = "Dragão Branco de Olhos Azuis";
        c1.atributo = "Carta de Ataque";
        c1.id = "1";
        c1.setAtaq(3900);
        c1.setDef(3200);
        c1.setNivel(5);
        c1.setTipo("Rara");

        c2.nome = "Mago Negro";
        c2.atributo = "Carta de Ataque";
        c2.id = "2";
        c2.setAtaq(2600);
        c2.setDef(2100);
        c2.setNivel(5);
        c2.setTipo("Rara");

        c3.nome = "Buraco Negro";
        c3.atributo = "Carta de Armadilha/Mágica";
        c3.id = "3";
        c3.setTipo("Mágica");
        c3.setEfeito("Destroi todos os monstros do campo, sem exceções!");

        c4.nome = "Renascimento de Monstro";
        c4.atributo = "Carta Mágica/Armadilha";
        c4.id = "4";
        c4.setTipo("Mágica");
        c4.setEfeito("Ressucita monstros de quaisquer cemitérios!");

        //Adicionando as carta ao deck
        gerenc.addCarta(c1);
        gerenc.addCarta(c2);
        gerenc.addCarta(c3);
        gerenc.addCarta(c4);

        //Mostrando as cartas inseridas
        System.out.println("As cartas adicionadas foram: ");
        gerenc.listarDeckCompleto();
        //Removendo a carta c4
        gerenc.removerCarta(c4);

    }
}
