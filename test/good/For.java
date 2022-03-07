class For {
    public static void main(String[] a) {
        {
            System.out.println(new Test().test());
        }
    }
}

class Test {
    public int test() {
        int i;
        for (i=0;i<10;i=i+1){
		System.out.println(i);
	}
	return i;
    }
}
