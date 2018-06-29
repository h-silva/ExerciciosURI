#include <stdio.h>
/*A empresa ABC resolveu conceder um aumento de sal�rios a 
seus funcion�rios de acordo com a tabela abaixo:

Sal�rio	Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00       7%
Acima de 2000.00        4%

Leia o sal�rio do funcion�rio e calcule e mostre o novo sal�rio,
 bem como o valor de reajuste ganho e o �ndice reajustado, em percentual.

*/
	int  main(){
		
		float salario, novoSalario, percentual;
		
		
		printf("Insira seu sal�rio");
		scanf("%f", &salario);
		
		if(salario <= 400)
		{
			percentual = 15;
			
		}
		else{
			if(( salario > 400 ) && (salario <= 800))
			{
				percentual = 12;
			}
			else{
				if((salario > 800) && (salario <= 1200))
				{
					percentual = 10;
				}
				else{
					if((salario > 1200) && (salario <= 2000))
					{
						percentual = 7;
					}
					else{
						percentual = 4;
					}
				}
			}
		}
		
		novoSalario = (salario + ((percentual / 100) * salario));
		
		printf("Novo salario : %.2f \n",novoSalario);
		printf("Reajuste ganho: %.2f \n",(percentual / 100) * salario);
		printf("Em percentual: %.f % \n", percentual);
		return 0;	
	}
