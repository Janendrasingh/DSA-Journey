// Sorting 0's, 1's, 2's Solving by Dutch Flag Algo
package pkg2.pkg14.dutch.national.flag.dnf.problem;

import java.util.*;

public class DutchNationalFlagDNFProblem {

<<<<<<< HEAD
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

=======
>>>>>>> f536f7ec39e83f18d4a444e924487202174dee88
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

<<<<<<< HEAD
=======
        int count0 = 0, count1 = 0, count2 = 0;

>>>>>>> f536f7ec39e83f18d4a444e924487202174dee88
        System.out.println("Enter the size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the Elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // BETTER SOLUTION
<<<<<<< HEAD
//        int count0 = 0, count1 = 0, count2 = 0;
//        for (int i = 0; i < n; i++) {
//            if (arr[i] == 0) {
//                count0++;
//            } else if (arr[i] == 1) {
//                count1++;
//            } else {
//                count2++;
//            }
//        }
//
//        for (int i = 0; i < count0; i++) {
//            arr[i] = 0;
//        }
//        for (int j = count0; j < count0 + count1; j++) {
//            arr[j] = 1;
//        }
//        for (int k = count0 + count1; k < n; k++) {
//            System.out.println(arr[k] = 2);
//        }
        //Optimal Solution
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (arr[mid] == 0) {
                swap(arr, low, mid);
                low++;
                mid++;
            } else if (arr[mid] == 1) {
                mid++;
            } else {
                swap(arr, mid, high);
                high--;
            }
=======
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
>>>>>>> f536f7ec39e83f18d4a444e924487202174dee88
        }

        System.out.println("Display");
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }

}
