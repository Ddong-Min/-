import java.util.Scanner;
import java.util.ArrayList;
public class Main {
    public static void main(String[] args){
        int N;
        int K;
        int temp;
        int ans=0;
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        K = sc.nextInt();
        ArrayList<Integer>price = new ArrayList<>();
        for(int i=0; i<N; i++){
            temp = sc.nextInt();
            price.add(temp);
        }
        temp = K;
        for(int i=N-1; i>=0; i--){
            if(temp/price.get(i) !=0){
                ans += temp/price.get(i);
                temp = temp % price.get(i);
                if(temp == 0)
                    break;
            }   
        }
        System.out.println(ans);
    }
}