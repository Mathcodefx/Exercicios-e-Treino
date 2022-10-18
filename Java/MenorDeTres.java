import java.util.Scanner;

/*Problema "menor_de_tres"
Fazer um programa para ler três números inteiros. Em seguida, mostrar qual o menor dentre os três
números lidos. Em caso de empate, mostrar apenas uma vez */

public class MenorDeTres {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		int valor1, valor2, valor3, menor=0;
		
		System.out.print("Primeiro valor: ");
		valor1= sc.nextInt();
		System.out.print("Segundo valor: ");
		valor2= sc.nextInt();
		System.out.print("Terceiro valor: ");
		valor3= sc.nextInt();
		

if(valor1<valor2 && valor1<valor3) {
	menor=valor1;
}
else if(valor2<valor3) {
	menor=valor2;
}
else
	menor=valor3;

		

System.out.println("Menor = " +menor);


		sc.close();
		
	}

}
