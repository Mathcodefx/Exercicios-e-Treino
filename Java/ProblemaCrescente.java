import java.util.Scanner;

/*Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais. */

public class ProblemaCrescente {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		int x, y;
		
		System.out.println("Digite dois numeros: ");
		x=sc.nextInt();
		y=sc.nextInt();
		
		
		while (x!=y && y!=x) {
			if(x<y && x!=y) {
				System.out.println("Crescente");
			}
			else if (y!=x){
				System.out.println("Decrescente");
			}
		System.out.println("Digite outros dois numeros: ");
		x=sc.nextInt();
		y=sc.nextInt();
		
		}
		
		

		sc.close();
	}

}
