
class TestForLoop {
    public static void main(String[] args) {
        System.out.println(new Main().test());          
    }
}

class Main {
    public int test(){
        int i;
        for(i = 0; i < 5; i++) {
            System.out.println(i);
        }

        return 0;

    }
}