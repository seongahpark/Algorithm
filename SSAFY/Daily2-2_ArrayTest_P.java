// Daily 2_2 1차원 배열 순회 짝수 출력

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class ArrayTest_P {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
		for(int i=0; i<arr.length; i++) {
			if(arr[i] % 2 == 0)
				System.out.printf("%3d", arr[i]);
		}
		System.out.println();
		System.out.print("바꿀 위치 입력 : ");
		int idx = Integer.parseInt(br.readLine());
		System.out.print("수 입력 : ");
		int n = Integer.parseInt(br.readLine());
		
		arr[idx] = n;
		
		System.out.println(Arrays.toString(arr));
		
		br.close();
		
	}
}
