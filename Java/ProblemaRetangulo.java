import java.util.Scanner;
import java.util.Locale; 

public class ProblemaRetangulo {

	public static void main(String[] args) {
	
		Scanner sc= new Scanner(System.in);
		Locale.setDefault(Locale.US);

		
		double base, altura, area, perimetro, diagonal;
		
		System.out.print("Base do retangulo: ");
		base = sc.nextDouble();
		System.out.print("Altura do retangulo: ");
		altura = sc.nextDouble();
		
		area= base*altura;
		System.out.println();
		System.out.print("Area = " +String.format("%.4f", area));
		
		perimetro= 2*(base+altura);
		System.out.println();
		System.out.print("Perimetro = " +String.format("%.4f", perimetro));
		
		diagonal= Math.sqrt(Math.pow(base, 2.0) + Math.pow(altura, 2.0));
		System.out.println();
		System.out.print("Diagonal = " +String.format("%.4f", diagonal));
		
		sc.close(); 

	}

}
