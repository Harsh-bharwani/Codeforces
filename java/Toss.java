import java.util.Random;
import java.util.Scanner;
class Guesser{
	
	int gin;
	String guessingNum()
	{
		Random random = new Random();
		gin = random.nextInt(2);
		if(gin==1) return "heads";
		else return "tails";
	}
}

class Player
{
	String pin;
	String predictingNum()
	{
		Scanner scan = new Scanner(System.in);
		pin = scan.nextLine();
		return pin;
	}
}

class Umpire
{
	int flag;
	String inputFromGuesser;
	String inputFromPlayer1;
	String inputFromPlayer2;
	
	void collectingNumFromGuesser()
	{
		Guesser g= new Guesser();
		inputFromGuesser = g.guessingNum();
	}
	void collectingNumFromPlayers()
	{
		Player p1 = new Player();
		Player p2 = new Player();
		System.out.println("Player1, please choose heads or tails!");
		inputFromPlayer1 = p1.predictingNum();
		System.out.println("PLayer2, please choose heads or tails!");
		inputFromPlayer2 = p2.predictingNum();
	}
	void comparing()
	{	flag=1;
		if(!inputFromPlayer1.equals("heads") && !inputFromPlayer1.equals("tails"))
		{
			System.out.println("Look! Player1, please provide the appropriate toss.");
			flag=0;
		}
		if(!inputFromPlayer2.equals("heads") && !inputFromPlayer2.equals("tails"))
		{
			System.out.println("Look! Player2, please provide the appropriate toss.");
			flag=0;
		}
		
		if( inputFromPlayer1.equals(inputFromPlayer2) && flag==1 )
		{
		System.out.println("\nHey! look player2, you can't give the same toss as player1.");
		}
		else if( inputFromGuesser.equals(inputFromPlayer1) && flag==1 )
		{	
			System.out.print("\n" + "The result is: ");
			System.out.println(inputFromGuesser);
			System.out.println("Player1 win the toss.");
		}
		else if( inputFromGuesser.equals(inputFromPlayer2) && flag==1 )
		{
			System.out.print("\n" + "The result is: ");
			System.out.println(inputFromGuesser);
			System.out.println("Player2 win the toss.");
		}
	}
}

class Toss
{
	public static void main( String[] args )
	{
		Umpire u = new Umpire();
		u.collectingNumFromGuesser();
		u.collectingNumFromPlayers();
		u.comparing();
	}
}
				
	
	
		


	
	