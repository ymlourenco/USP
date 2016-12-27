package programas.iniciantejava;

public class Exercicio3 {
/* Imprima todos os múltiplos de 3, entre 1 e 100.*/
	public static void main(String[] args){
		int i;
		for(i=1;i<=100;i++){
			if((i%3)==0)
				System.out.printf("%d\n",i);
		}
			
	}
}
