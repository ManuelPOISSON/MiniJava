
class TestPlusPlus {
    public static void main(String[] args) {
        System.out.println(new Main().test());          
    }
}

class Main {
    public int test(){
        int a ;
        int b ;

        a = 1;
        a = a + 1;

        System.out.println(a);
        a--;
        System.out.println(a);
        a++;
        System.out.println(a);
        

        return 0;

    }
}