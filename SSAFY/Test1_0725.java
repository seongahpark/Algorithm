import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Test1 {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String inp = br.readLine();
		int num = 1;
		char start = 'A';
		if(inp.equals("1")) {
			for(int i=0; i<4; i++) {
				for(int j=0; j<4; j++) {
					if(i >= j) System.out.print(num++ + " ");
				}
				System.out.println();
			}
		}else if(inp.equals("A")){
			int blank = 4;
			for(int i=0; i<5; i++) {
				for(int j=0; j<9; j++) {
					if(j < blank) System.out.print("  ");
					else if(9-j <= blank) System.out.print(" ");
					else System.out.print((char)start++ + " ");
				}
				blank--;
				System.out.println();
			}
		}
		br.close();
	}

}
