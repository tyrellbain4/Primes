package primes;

import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.Scanner;

public class PrimesFast {
    public static void main(String[] args) {

        Logger logger = Logger.getLogger(
            PrimesFast.class.getName()
        );
        Scanner scanner = new Scanner(System.in);

        int num;

        if (args.length == 0) {
            logger.log(Level.INFO, "Enter a number: ");
            num = scanner.nextInt();
        }
        else num = Integer.parseInt(args[0]);

        logger.log(Level.INFO, 
            "Executing PrimesFast.java for n={0}...\n",
            String.valueOf(num)
        );

        scanner.close();
    }
}
