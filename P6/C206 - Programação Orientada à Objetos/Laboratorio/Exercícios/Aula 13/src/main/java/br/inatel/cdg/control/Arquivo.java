package br.inatel.cdg.control;
import br.inatel.cdg.exceptions.PrecoException;
import br.inatel.cdg.model.Produto;
import java.io.*;

import java.util.ArrayList;

public class Arquivo {

    //Array de Produtos
    ArrayList<Produto> produtos = new ArrayList<>();

    //Declaração das variáveis de escrita
    OutputStream op;
    OutputStreamWriter osw;
    BufferedWriter bw = null;

    //Declaração das variáveis de leitura
    InputStream is;
    InputStreamReader isr;
    BufferedReader br = null;

    //Método que fará a inserção de um produto no vetor
    public void inserirProduto(Produto p){
        try{

            if(p.getPreco() <= 0.0){
                throw new PrecoException(p);
            }

            else{
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
        }

        catch (Exception e){
            //throw PrecoException(p);
        }

        finally {

            try {
                bw.close();
            }

            catch (Exception e){
                System.out.println(e);
            }
        }

    }

    //Método para ver os produtos do array
    public void lerProdutos(Produto p){

        try{

            is = new FileInputStream("arquivo.txt");
            isr = new InputStreamReader(is);
            br = new BufferedReader(isr);

            String linha = br.readLine();

            while(linha != null){
                System.out.println(linha);
                linha = br.readLine();
                Produto aux = new Produto();

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
