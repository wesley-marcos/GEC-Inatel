package modelo;//import lombok.Data;

public class Game {

    //Atributos
    private int rank;
    private String name;
    private String platform;
    private int year;
    private Double global_sales;
    private String publisher;

    //Getters e Setters
    public int getRank() {return rank;}

    public void setRank(int rank) {this.rank = rank;}

    public String getName() {return name;}

    public void setName(String name) {this.name = name;}

    public String getPlatflorm() {return platform;}

    public void setPlatflorm(String platflorm) {this.platform = platflorm;}

    public int getYear() {return year;}

    public void setYear(int year) {this.year = year;}

    public String getPublisher() {return publisher;}

    public void setPublisher(String publisher) {this.publisher = publisher;}

    public Double getGlobal_sales() {return global_sales;}

    public void setGlobal_sales(Double global_sales) {this.global_sales = global_sales;}
}
