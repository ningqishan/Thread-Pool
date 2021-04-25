import java.util.Scanner;
public class Test2 {
    public static boolean solve(int A[][],int targe){
        int n = A.length;
        int m = A[0].length;
        int i  =0;
        int j = m-1;
        while(i>=0 && j<m){
            if(A[i][j]>targe)
                j--;
            else if(A[i][j]<targe)
                i++;
            else
                return true;
        }
        return false;
    }
    public static void main(String[] args){
        Scanner cin = new Scanner(System.in);
        int [][]A=
        {
            {1 ,4 , 7, 11, 15},
            {2 ,5 , 8, 12, 19},
            {3 ,6, 9, 16, 22},
            {10 ,13 ,14, 17, 24},
            {18 ,21, 23, 26, 30},
        };
        int targe = cin.nextInt();
        if(solve(A, targe)==true)
            System.out.println("正确！");
        else
            System.out.println("错误！");
    }
}
