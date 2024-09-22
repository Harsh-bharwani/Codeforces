import java.lang.*;
import java.util.Scanner;
class Calculator
{
	int add(int a, int b){
	int ans=a+b;
	return ans;
	}
	
}
class Launch2
{
	public static void main(String[] args)
	{
		
		Scanner scan=new Scanner(System.in);
		int a=scan.nextInt();
		int b=scan.nextInt();
		
		Calculator c=new Calculator();
		int ans=c.add(a,b);
		System.out.println(ans);		
	}
}