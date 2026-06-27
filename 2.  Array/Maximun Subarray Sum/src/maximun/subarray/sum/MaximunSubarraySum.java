//Finding an subarray which have max sum
package maximun.subarray.sum;

import java.util.*;

public class MaximunSubarraySum {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the elemenets");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        /*----------------------------Brute Force----------------------------*/
        System.out.println("Max Subarray is");
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int sum = 0;
                for (int k = i; k <= j; k++) {
                    sum += arr[k];
                }
                max = Math.max(sum, max);

            }
        }
        System.out.println("Maximum Subarray Sum = " + max);

    }

}
