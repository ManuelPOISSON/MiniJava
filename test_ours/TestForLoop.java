
class TestForLoop {
    public static void main(String[] args) {
        System.out.println(new Main().test());          
    }
}

class Main {
    public int test(){
        int i;
        /*
        i = 5+2;
        System.out.println(i);
        i = i+3;
        System.out.println(i);*/
        for(i = 13; i > 7; i--) {
            System.out.println(i);
        }

        return 0;

    }
}