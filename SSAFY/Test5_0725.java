import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Test5 {
	
	static int res = 0;
	static int arr[][] = new int[19][19];
	
	public static void printRes(int cnt, int num, int i, int j) {
		if(cnt == 5) {
			res = num;
			System.out.println(res);
			System.out.println(++i + " " + ++j);	
		}
	}
	
	public static void findRight(int num, int i, int j) {
		int cnt = 1;
		int dx[] = {-1, 1};

		for(int z=0; z<dx.length; z++) {
			int nx = j;
			while(true) {
				nx += dx[z];
				if(nx < 0 || nx >= 19 || arr[i][nx] != num) break;
				cnt++;				
			}
		}
		
		printRes(cnt, num, i, j);
	}
	
	public static void findUnder(int num, int i, int j) {
		int cnt = 1;
		int dy[] = {-1, 1};
					
		for(int z =0; z<dy.length; z++) {
			int ny = i;
			while(true) {
				ny += dy[z];
				if(ny < 0 || ny >= 19 || arr[ny][j] != num) break;
				cnt++;
			}			
		}
		
		printRes(cnt, num, i, j);
	}
	
	// 대각선 아래
	public static void findDown(int num, int i, int j) {
		int cnt = 1;
		int nx = j;
		int ny = i;
		int dx[] = {-1, 1};
		int dy[] = { -1, 1};
		
		for(int z=0; z<dx.length; z++) {
			nx = j;
			ny = i;
			while(true) {
				ny += dy[z];
				nx += dx[z];
				if(nx < 0 || nx >=19 ||ny < 0 || ny >= 19 || arr[ny][nx] != num) break;
				cnt++;
			}	
		}
		
		printRes(cnt, num, i, j);
	}
	
	// 대각선 위
	public static void findUp(int num, int i, int j) {
		int cnt = 1;
		int nx = j;
		int ny = i;
		int dx[] = {-1, 1};
		int dy[] = { 1, -1};
	
		for(int z=0; z<dx.length; z++) {
			nx = j;
			ny = i;
			while(true) {
				ny += dy[z];
				nx += dx[z];
				if(nx < 0 || nx >=19 ||ny < 0 || ny >= 19 || arr[ny][nx] != num) break;
				cnt++;
			}			
		}
		
		printRes(cnt, num, i, j);
	}
	
	

	public static void main(String[] args) throws IOException {
		System.setIn(new FileInputStream("Test5.txt"));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		for(int i=0; i<19; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j=0; j<19; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		// 탐색
		for(int i=0; i<19; i++) {
			for(int j=0; j<19; j++) {
				if(res != 0) break;
				if(arr[i][j] == 1) {
					findRight(1, i, j);
					findUnder(1, i, j);
					findDown(1, i, j);
					findUp(1, i, j);
				}
				else if(arr[i][j] == 2) {
					findRight(2, i, j);
					findUnder(2, i, j);
					findDown(2, i, j);
					findUp(2, i, j);
				}
			}
		}
		if(res == 0) System.out.println(res);
		br.close();
	}

}
