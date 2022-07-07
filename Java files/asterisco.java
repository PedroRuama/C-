
import java.util.Scanner;

public class asterisco {

    public static void main(String[] args) {
        int n = 0;
        int parar = 1;
        int doStop = 1;
        Scanner ler = new Scanner(System.in);
        System.out.print("Insira o numero de * : ");
        n = ler.nextInt();
        
        System.out.println();
        System.out.println();
        
        for (int i = 0; i < n; i++) {
            System.out.print(" * ");
        }
        
        System.out.println();
        
        while (parar <= n) {
            System.out.print(" * ");
            parar = parar + 1;
        }
        
        System.out.println();
        
        do {
            System.out.print(" * ");
            doStop++;
            
        } while (doStop <= n);
    }

}
