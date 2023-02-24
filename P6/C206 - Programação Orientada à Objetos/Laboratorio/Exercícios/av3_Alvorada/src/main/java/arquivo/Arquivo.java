package arquivo;

import exceptions.PrecoException;
import produtos.Produtos;

import java.io.*;
import java.util.ArrayList;

public class Arquivo {
    ArrayList<Produtos> produtos = new ArrayList<>();

    OutputStream op;
    OutputStreamWriter osw;
    BufferedWriter bw = null;

    InputStream is;
    InputStreamReader isr;
    BufferedReader br = null;

    public void inserirProduto(Produtos p) throws PrecoException {
        try {

            if (p.getPreco() <= 0.0) {
                throw new PrecoException(p);
            } else {
                produtos.add(p);
                System.out.println("Produto " + p.getId() + " inserido com sucesso!");
                op = new FileOutputStream("arquivo.txt", true);
                osw = new OutputStreamWriter(op);
                bw = new BufferedWriter(osw);

                bw.write("---------------- Produto " + p.getId() + " ---------------- \n");
                bw.write(p.getNome() + "\n");
                bw.write(p.getMarca() + "\n");
                bw.write(p.getTipo() + "\n");
                bw.write(p.getPreco() + "\n");

            }
        } catch (Exception e) {
            throw new PrecoException(p);
        } finally {

            try {
                bw.close();
            } catch (Exception e) {
                System.out.println(e);
            }
        }

    }

    //Leitura
    public void lerProdutos(){
        try{

            is = new FileInputStream("arquivo.txt");
            isr = new InputStreamReader(is);
            br = new BufferedReader(isr);

            String linha = br.readLine();

            while(linha != null){
                System.out.println(linha);
                linha = br.readLine();
                Produtos aux = new Produtos();

                if(linha.contains("-Produto-")){
                    aux.setNome(br.readLine());

                }
            }
        }

        catch (Exception e){
            System.out.println(e);
        }

        finally {

            try{
                br.close();
            }

            catch (Exception e){
                System.out.println(e);
            }
        }
    }
}
