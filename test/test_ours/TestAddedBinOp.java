
class TestAddedBinOp {
    public static void main(String[] args) {
        System.out.println(new Main().test());          
    }
}

class Main {
    public int test(){
        int a ;
        int b ;
        boolean bool;
        boolean vrai;
        int[] tab1 ;
        int[] tab2 ;
        a = 1;
        b = 2;
        vrai = true;
        bool = a > b;
        bool = a >= b;
        bool = a < b;
        bool = a <= b;
        bool = vrai && bool;
        bool = vrai || bool;
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