import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int[][] matrix = new int[6][6];
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                matrix[i][j] = scan.nextInt();
            }
        }
        int max = (-9 * 7);
        
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                int temp =  matrix[i][j]
                            + matrix[i][j+1]
                            + matrix[i][j+2]
                            + matrix[i+1][j+1]
                            + matrix[i+2][j]
                            + matrix[i+2][j+1]
                            + matrix[i+2][j+2];
                if (temp > max) max = temp;
            }
        }
        System.out.println(max);
    }
}
