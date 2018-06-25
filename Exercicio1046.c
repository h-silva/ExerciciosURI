/* Leia a hora inicial e a hora final de um jogo. 
	A seguir calcule a dura��o do jogo, sabendo que o mesmo pode
	come�ar em um dia e terminar em outro, tendo uma dura��o m�nima de
	 1 hora e m�xima de 24 horas.
*/
#include <stdio.h>
	int main(){
		int horaInicial,horaFinal,totalHoras;
		scanf("%i %i",&horaInicial,&horaFinal);
		
		if(horaInicial == horaFinal){
			printf("O JOGO DUROU 24 HORA(S)\n");
		}
		else{
			if(horaInicial < horaFinal){
				totalHoras = horaFinal - horaInicial;
				printf("O JOGO DUROU %i HORA(S)\n",totalHoras);
			}
			else{
				totalHoras = horaInicial - horaFinal - 24;
				printf("O JOGO DUROU %i HORA(S)\n",totalHoras * -1);
			}
		}
		return 0;
	}
