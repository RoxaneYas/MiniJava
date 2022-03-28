class AddAdd {
    public static void main(String[] a) {
        {
            System.out.println(new Add().add());
            System.out.println(new Add().addI());
        }
    }
}

class Add {
    public int add() {
        int i;
        for (i=0;i<10;i++){
	        System.out.println(i);
	    }
	    return i;
	}

    public int addI() {
        int x=10;
        x++;
        return x;
    }
}
