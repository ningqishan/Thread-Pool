import java.util.Scanner;

public class Test1 {

    public static boolean Core(int [][] A,int targe){
        for(int i = 0;i<5;i++){
            for(int j = 0;j<5;j++){
                if(A[i][j]==targe)
                    return true; 
            }
        }
        return false;
    }
    public static void Solve(int [][]A,int targe){
        if(Core(A,targe)==true)
            System.out.println("符合！");
        else
            System.out.println("不符合！");
    }
    public static void main(String[] args) throws Exception {
        Scanner cin = new Scanner(System.in);
        int [][] A = new int[5][5];
        int targe = cin.nextInt();
        for(int i = 0;i<5;i++){
            for(int j = 0;j<5;j++){
                int b = cin.nextInt();
                A[i][j] = b;
            }
        }
        Solve(A,targe);
    }
}
