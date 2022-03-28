class MoinsMoins {
    public static void main(String[] a) {
        {
            System.out.println(new Moins().moins());
            System.out.println(new Moins().moinsI());
        }
    }
}

class Moins {
    public int moins() {
        int i;
        for (i=10;0<i;i--){
	        System.out.println(i);
	    }
	    return i;
	}

    public int moinsI() {
        int x=10;
        x--;
        return x;
    }
}
