import java.lang.Math ;

public class P30{
	
	public static void main(String[] args){
		new P30();
	}

	public P30(){
		int sum = 0 ;
	
		for (int i = 2 ; i < 355000; i++){
			int s = sum(i);
			if ( i == s ){
				System.out.println("Found narcisistic number "+i);
				sum += i ;
			}
		}

		System.out.println("Sum of narcisistic numbers is "+sum);
	}

	public int sum(int i){
		int s = 0 ;
		int tmp = 0 ;
		
		while (i > 0 ){
			tmp = i % 10 ;
			s += Math.pow(tmp,5);
			i /= 10 ;
		}
		return s ;
	}
}
