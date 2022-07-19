// 데일리실습 3-3 빌딩건설
package com.ssafy.ws02.step3;

import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int test_case = sc.nextInt();
		for(int t = 1; t<=test_case; t++) {
			int n = sc.nextInt();
			char arr [][] = new char[n][n];
			
			for(int i=0; i<n; i++) {
				for(int j=0; j<n; j++) {
					arr[i][j] = sc.next().charAt(0);
				}
			}
			
			int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
			int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
			
			int res = 0;
			for(int i=0; i<n; i++) {
				for(int j=0; j<n; j++) {
					// 8방향 탐색
					int cnt = 0;
					int tmp_x = 0, tmp_y = 0, tmp_res = 0;
					for(int z=0; z<8; z++){
						int nx = j + dx[z];
						int ny = i + dy[z];
						
						if(nx < 0 || nx >= n || ny < 0 || ny >= n || arr[ny][nx] == 'B') cnt++;
					}
					if(cnt == 8) {
						for(int k =0; k<n; k++) {
							if(arr[i][k] == 'B') tmp_x++;
							if(arr[k][j] == 'B') tmp_y++;
						}
						tmp_res = tmp_x + tmp_y - 1;
						res = Math.max(tmp_res, res);
					}
				}
			}
			if(res == 0) res = 2;
			System.out.println("#" + t + " " + res);
		}
		
	}

}
