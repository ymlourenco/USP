package programas.iniciantejava;

import java.util.Scanner;

public class Exercicio7 {

	public static void main(String[] args){
		/*Faz a leitura do teclado*/
		Scanner entrada = new Scanner(System.in);
		System.out.print("Entre com um valor: ");
		int x = entrada.nextInt(); //Armazena x lido de um inteiro
		
		while(x!=1){
			if((x%2)==0){
				x=x/2;
				System.out.printf("%d\n",x);}
			else{
				x = (3*x)+1;
				System.out.printf("%d\n",x);}
		}
	entrada.close();
	}
}
