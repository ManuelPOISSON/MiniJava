class TestPlusPlus {
    public static void main(String[] args) {
        System.out.println(new Main().test());          
    }
}

class Main {
    public int test(){
        int a ;
        int b ;
        int[] tab1 ;
        int[] tab2 ;
        a = 1;
        a = a + 1;

        System.out.println(a);
        a = a+1;
        System.out.println(a);

        return 0;

    }
}