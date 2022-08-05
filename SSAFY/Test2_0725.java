
public class Test2 {

	public static void main(String[] args) {
		int[] su = { 45, 80, 68, 19, 34, 55, 27, 60, 27, 18};
		double avg = 0d;
		int sum = 0;
		int min = Integer.MAX_VALUE;
		int max = Integer.MIN_VALUE;
		for(int i=0; i<su.length; i++) {
			sum += su[i];
			min = Math.min(min, su[i]);
			max = Math.max(max, su[i]);
		}
		avg = (double)sum / su.length;
		int res = 0;
		if(Math.abs(avg-max) > Math.abs(avg-min)) res = max;
		else res = min;

		System.out.println(avg + " " + res);
	}

}
