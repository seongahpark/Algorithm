import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;
import java.util.StringTokenizer;

public class BOJ_2493 {

	public static class Pair{
		int idx;
		int num;
		
		public Pair(int idx, int num) {
			this.idx = idx;
			this.num = num;
		}
		
		public int getIdx() {
			return idx;
		}
		
		public int getNum() {
			return num;
		}
		
	}
	
	public static int N;
	public static int [] arr;
	public static Stack<Pair> s = new Stack<>();
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		N = Integer.parseInt(br.readLine());
		arr = new int[N];
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		for(int i=0; i<N; i++) {
			int tmp = Integer.parseInt(st.nextToken());
			while(!s.isEmpty()) {
				int front = s.peek().getNum();
				if(front > tmp) {
					arr[i] = s.peek().getIdx() + 1;
					break;
				}else s.pop();
			}
			s.push(new Pair(i, tmp));
			sb.append(arr[i] + " ");
		}
		
		System.out.println(sb);
		br.close();

	}

}
