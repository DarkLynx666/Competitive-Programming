import java.util.Scanner;

public class FullENCdriver{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);

        //the constructor without argument way

//        System.out.println("enter name: ");
//        String name = input.next();
//        FullEncap lolita = new FullEncap();
//      lolita.setName(name);

//        System.out.println("enter id: ");
//        int bodycount = input.nextInt();


//        System.out.println("enter name2: ");
//        String name2 = input.next();
//        FullEncap succibus = new FullEncap();
//        succibus.setName(name2);
//
//        lolita.details();
//        succibus.details();
//        System.out.println("printing count for the love of the game"+" "+ FullEncap.count);

        //the constructor with argument way

        FullEncap obiwan = new FullEncap(024,"bPADWAN");
        System.out.println(obiwan.getName());
        obiwan.details();
        System.out.println("again printing count for the love of the game"+" "+ FullEncap.count);

        FullEncap vader = new FullEncap(713,"nPADWAN");
        System.out.println(vader.getName());
        vader.details();
        System.out.println("again printing count for the love of the game"+" "+ FullEncap.count);

        FullEncap.count = 666;
        System.out.println("new static value: "+" "+FullEncap.count);

        input.close();
    }
}
