
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
        b = 2;
        tab1 = this.createArray(2);
        tab2 = this.createArray(2);

        if (true==true) {
            //if (true==true) {
            if (1==1) {
                System.out.println(2);
                if (a == b) {
                    System.out.println(2);
                    if (tab1 == tab2) {
                        System.out.println(3);
                    } else {
                        System.out.println(0);
                    }
                } else {
                    System.out.println(2);
                }
            } else {
                System.out.println(3);
            }
            System.out.println(2);
        } else {
            System.out.println(3);
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