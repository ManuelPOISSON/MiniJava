
class TestEqualOp {
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
        b = 1;

        if (a==b) {
                System.out.println(2);
        }
        return 0;

    }

    public int init() {
        return this.createArray(42)[3];
    }

    public int[] createArray(int n) {
        int[] a;
        int i;
        a = new int[n];
        i = 0;
        while (i < n) {
            a[i] = i;
            i = i + 1;
        }
        return a;
    }
}