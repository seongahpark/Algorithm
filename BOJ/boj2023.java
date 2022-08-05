import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class BOJ_2023 {

	public static int N;

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());

		dfs(2);
		dfs(3);
		dfs(5);
		dfs(7);
		
		br.close();
	}
	
	public static boolean chk(int num) {
		if(num == 0 || num == 1) return false;
		for(int i = 2; i*i <=num; i++) {
			if(num % i == 0) return false;
		}
		return true;
	}
	
	public static void dfs(int num) {
		if((int)Math.log10(num) + 1 == N) { // 숫자의 길이
			System.out.println(num);
		}else {
			for(int i=0; i<10; i++) {
				int tmp = num * 10 + i;
				if(chk(tmp)) dfs(tmp);
			}
		}
	}

}
