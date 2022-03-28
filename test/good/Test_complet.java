class Test_complet {
    public static void main(String[] a) {
        {
            System.out.println(new Test().test());
        }
    }
}

class Test {
    public int test() {
        int i=1;
		String s = "Test réussi";
		int j;
		i--;
		if(i==0){
			for(j=0; j<5;j++){
				i++;
			}
		}
		if (i==5){
			System.out.println(s);
		}

	return i;
    }
}
