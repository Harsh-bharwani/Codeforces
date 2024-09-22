import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.*;

@RestController
@SpringBootApplication
public class GuessGameApp {
    public static void main(String[] args) {
        SpringApplication.run(GuessGameApp.class, args);
    }
}

class Guesser {
    int gnum;

    int guessingNum() {
        return gnum;
    }

    void setGnum(int gnum) {
        this.gnum = gnum;
    }
}

class Player {
    int pnum;

    int predictingNum() {
        return pnum;
    }

    void setPnum(int pnum) {
        this.pnum = pnum;
    }
}

class Umpire {
    int numFromGuesser;
    int numFromPlayer1;
    int numFromPlayer2;
    int numFromPlayer3;

    void collectingNumFromGuesser(int num) {
        numFromGuesser = num;
    }

    void collectingNumFromPlayers(int num1, int num2, int num3) {
        numFromPlayer1 = num1;
        numFromPlayer2 = num2;
        numFromPlayer3 = num3;
    }

    String comparing() {
        if (numFromGuesser == numFromPlayer1) {
            return "Player1 won the game";
        } else if (numFromGuesser == numFromPlayer2) {
            return "Player2 won the game";
        } else if (numFromGuesser == numFromPlayer3) {
            return "Player3 won the game";
        } else {
            return "No player won the game";
        }
    }
}

@RestController
@RequestMapping("/game")
class GameController {
    Guesser guesser = new Guesser();
    Umpire umpire = new Umpire();

    @PostMapping("/guesser")
    public void setGuesserNumber(@RequestBody int number) {
        guesser.setGnum(number);
        umpire.collectingNumFromGuesser(number);
    }

    @PostMapping("/players")
    public String setPlayerNumbers(@RequestBody int[] numbers) {
        umpire.collectingNumFromPlayers(numbers[0], numbers[1], numbers[2]);
        return umpire.comparing();
    }
}
