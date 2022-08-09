package sw;
import java.util.*;
import java.io.*;

public class SW_사칙연산유효성검사 {

	static int N;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		for(int t=1; t<=10; t++) {
			int res = 1;
			N = Integer.parseInt(br.readLine());
			// 리프노드는 숫자만, 아니면 문자가 와야 함
			for(int i=1; i<=N; i++) {
				String[] tmp = br.readLine().split(" ");
				if(tmp.length == 4) {
					if(Character.isDigit(tmp[1].charAt(0))) {
						res = 0;
					}
				}else if(tmp.length == 2) {
					if(!Character.isDigit(tmp[1].charAt(0))) {
						res = 0;
					}
				}
			}
			System.out.println("#" + t + " " + res);
		}
		br.close();
	}

}
