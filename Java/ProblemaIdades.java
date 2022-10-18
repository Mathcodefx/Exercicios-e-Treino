/* Problema "idades"
Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma mensagem com os
nomes e a idade média entre essas pessoas, com uma casa decimal, conforme exemplo. */

import java.util.Scanner;
import java.util.Locale; 

public class ProblemaIdades {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int idade1, idade2;
		String nome1, nome2;
		double media;
		
		System.out.println("Dados da primeira pessoa: ");
		System.out.print("Idade: ");
		idade1 = sc.nextInt();
		System.out.print("Nome: ");
		sc.nextLine();
		nome1 = sc.nextLine();
		System.out.println("Dados da segunda pessoa: ");
		System.out.print("Idade: ");
		idade2 = sc.nextInt();
		System.out.print("Nome: ");
		sc.nextLine();
		nome2= sc.nextLine();
		
		
		media=(double)(idade1+idade2)/2;
		
		System.out.println();
		System.out.println("A idade media de " +nome1+ " e " +nome2+ " é de " +String.format("%.2f", media));
		
		
		sc.close(); 
		
		


	}

}
