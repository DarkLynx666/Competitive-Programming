import java.util.Scanner;

public class EncapDriver {
    public static void main(String[] args){
        String name;
        double cg;
        int id;
        Scanner input = new Scanner(System.in);

        System.out.println("enter name: ");
        name = input.next();

        System.out.println("enter cg: ");
        cg = input.nextDouble();

        System.out.println("enter id: ");
        id = input.nextInt();

        ENCAPSULATOINOOP obiwan = new ENCAPSULATOINOOP(name,cg,id);

        String n = obiwan.getName();
        System.out.println("my nam is "+ n);

        input.close();
    }
}
