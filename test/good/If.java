class If {
    public static void main(String[] a) {
        {
            System.out.println(new Iftest().iftest());
        }
    }
}

class Iftest {
    public int iftest() {
        int i;
	i=1;
        if (i==1){
		System.out.println(i);
		i=i+1;
		if (i==5){
			i=4;
			System.out.println(i);
		}else{
			i=6;
			System.out.println(i);
		}
	}
	return i;
    }
}
