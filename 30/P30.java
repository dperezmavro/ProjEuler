import java.lang.Math ;

public class P30{
	
	public static void main(String[] args){
		new P30(5);
	}

	public P30(int n ){
		int sum = 0 ;
		int limit = (int) Math.pow(9,5);
		limit *= 5;

		for (int i = 10000; i <= 99999 ; i++){
			if ( i == sum(i) ){
				System.out.println("Found narcisistic number "+i);
				sum += i ;
			}
		}

		System.out.println("Sum of narcisistic numbers is "+sum);
	}

	public int sum(int i){
		int n1 = i/( (int) Math.pow(10,4)) ;
		i %= 10000 ;
		int n2 = i/( (int) Math.pow(10,3)) ;
		i %= 1000 ;
		int n3 = i/( (int) Math.pow(10,2)) ;
		i %= 100 ;
		int n4 = i/(10);
		i %= 10 ;
		int n5 = i;
		
		return (int)(Math.pow(n1,5)+Math.pow(n2,5)+Math.pow(n3,5)+Math.pow(n4,5)+Math.pow(n5,5)) ;
	}
}
