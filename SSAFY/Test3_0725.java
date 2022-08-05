
public class Test3 {

	public static void main(String[] args) {
		int sum = 2530;
		int pay = 10000;
		int re = pay - sum;
		
		System.out.println("투입금액 : " + pay + "원");
		System.out.println("상품금액 : " + sum + "원");
		System.out.println("거스름돈 : " + re + "원");
		System.out.println("---------------------");
		
		int arr[] = {1000, 500, 100, 50, 10};
		for(int i=0; i<arr.length; i++) {
			int res = 0;
			res = re / arr[i];
			re %= arr[i];
			
			if(i == 0)
				System.out.println(arr[i] + "원 : " + res + "장");
			else
				System.out.println(arr[i] + "원 : " + res + "개");
		}
	}

}
