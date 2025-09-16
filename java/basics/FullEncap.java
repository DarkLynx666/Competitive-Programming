public class FullEncap {


    int id;
    private String name;
    static int count=0;

    //the constructor argument way
    public FullEncap(int reg, String identity){
        id = reg;
        name = identity;
        count++;
    }

    //the constructor without argument way
    public FullEncap(){
        count++;
        System.out.println("default constructor called");
    }

    public void setName(String n){
        name = n;
    }
    public String getName(){

        return name;
    }

    public void details(){
        System.out.println("name of this object is(instance way) "+name);
       System.out.println("name of this object is method way "+getName());
        System.out.println("number of objects :"+count);
        System.out.println(FullEncap.count);

    }

}

