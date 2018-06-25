/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, 
mostre os valores em ordem crescente, uma linha em branco e em seguida, 
os valores na sequência como foram lidos. */


#include <stdio.h>
//Exercicio URI 1042
	int main(){
		int aux,i,j,num[3],numOrig[3];
		
		for(i=0;i < 3;i++){
			scanf("%i", &num[i]);
			numOrig[i] = num[i];
			
		}
		for(i=0;i<3;i++){
			for(j=i+1;j<3;j++){
				if(num[i] > num[j]){
					aux = num[i];
					num[i]= num[j];
					num[j] = aux;
				}
			}
		}
		for(i=0;i < 3;i++){
			printf("%i\n",num[i]);
		}
		printf("\n");
		for(i=0;i < 3;i++){
			printf("%i\n",numOrig[i]);
		}
		return 0 ;
	}
