import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Test4 {

	public static void main(String[] args) throws IOException{
		System.setIn(new FileInputStream("Test4.txt"));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		for(int t = 1; t<= T; t++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken());
			
			double avg = 0d;
			int arr[] = new int[n];
			for(int i=0; i<n; i++) {
				arr[i] = Integer.parseInt(st.nextToken());
				avg += arr[i];
			}
			avg /= (double)n;
			
			// check
			double res = 0;
			for(int i=0; i<n; i++) {
				if(arr[i] > avg) res++;
			}
			
			res /= (double)n;
			res *= 100;
			System.out.print("#");
			System.out.printf("%1d %.3f", t, res);
			System.out.print("%");
			System.out.println();
		}
		
		br.close();
	}

}
