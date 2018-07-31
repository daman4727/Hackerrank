import java.util.*;
public class MyClass {
    static HashMap<Integer,Integer> map =new HashMap<>();
    
    public static void main(String args[]) {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        //System.in(a);
        int val=fibo(a);

        System.out.println("Fibonacci at "+a+" = "+ val);
    }
    public static int fibo(int n){
    if(map.containsKey(n))
    return map.get(n);
    else if(n<=2)
    return 1;
    else{
    int k=fibo(n-1)+fibo(n-2);
    map.put(n,k);
    return k;}
}
}
