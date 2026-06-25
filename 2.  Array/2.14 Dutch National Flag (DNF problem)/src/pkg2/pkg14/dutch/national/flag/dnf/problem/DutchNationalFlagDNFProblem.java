// Sorting 0's, 1's, 2's Solving by Dutch Flag Algo
package pkg2.pkg14.dutch.national.flag.dnf.problem;

import java.util.*;

public class DutchNationalFlagDNFProblem {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int count0 = 0, count1 = 0, count2 = 0;

        System.out.println("Enter the size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the Elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // BETTER SOLUTION
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                count0++;
            }
            else if (arr[i] == 1) {
                count1++;
            } else {
                count2++;
            }
        }

        for (int i = 0; i < count0; i++) {
            arr[i]=0;
        }
        for (int j = count0 ; j < count0+count1; j++) {
            arr[j] = 1;
        }
        for (int k = count0+count1; k < n; k++) {
            System.out.println(arr[k] = 2);
        }

        System.out.println("Display");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }

}
