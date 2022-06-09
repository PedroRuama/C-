
import java.util.Scanner;

public class questao2 {

    public static void main(String args[]) {
        System.out.println("a. Leia o seu nome e sobrenome, e exiba-os na sua forma inversa (sobrenome, nome).");

        Scanner valor = new Scanner(System.in);
        System.out.println();

        System.out.print("Insira seu nome: ");
        String nome;
        nome = valor.next();
        System.out.print("Insira seu sobrenome: ");

        System.out.println();

        String sobrenome;
        sobrenome = valor.next();
        System.out.println("Bem vindo sr. " + sobrenome + "," + nome);

        System.out.println();
        System.out.println();
        System.out.println();

        System.out.println("b. Leia dois números inteiros, realize a multiplicação do primeiro pelo segundo e exiba o resultado final.");

        System.out.println();

        int x;
        int y;
        System.out.print("x = ");
        x = valor.Int();

        System.out.print("y = ");
        y = valor.Int();
        int r = x * y;
        System.out.print(x + "*" y + "é iguala a " + r);
    }
}
