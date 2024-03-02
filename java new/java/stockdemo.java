class stock{
    String symbol;
    String name;
    double previousClosingPrice;
    double currentPrice;
    stock(String sym,String nam  ){
        symbol=sym;
        name=nam;

    }
    double getChangePercent(){
        return ((currentPrice-previousClosingPrice)*100)/previousClosingPrice;

    }

}

public class stockdemo {
    public static void main(String[] args) {
        stock s1;
        
        s1=new stock("ORCL","Oracle Corporation");
        s1.previousClosingPrice=34.5;
        s1.currentPrice=34.35;
        System.out.println(s1.getChangePercent());

    }
    
}
