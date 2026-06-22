
package pkg2.pkg14.dutch.national.flag.dnf.problem;
import java.util.*;

public class DutchNationalFlagDNFProblem {

    public static void main(String[] args) {
        // BETTER SOLUTION
         Scanner sc = new Scanner(System.in);

         System.out.println("Enter the size of array: ");
         int n = sc.nextInt();
         int[] arr = new int[n];
         
         System.out.println("Enter the Elements");
         for(int i=0; i<n; i++){
             arr[i] = sc.nextInt();
         }
         
         System.out.println("Display");
         for(int i=0; i<n; i++){
             System.out.println(arr[i]);
         }
    }
    
}
