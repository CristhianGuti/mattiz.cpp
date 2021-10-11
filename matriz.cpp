#include <stdio.h>

char array[10][5];
void Matriz(){
	for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            printf("%c",array[i][j]);
        }
        printf("\n");	
	}
}

int main() {
	int i,j,intentos=5,ban=0,C,F,f=7,c=4;
	
	for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            array[i][j]='o';
        }
        printf("\n");
	}
    
    
    printf("Ingrese las coordenadas para marcar un campo. Tiene 5 intentos.\n");
    
    while(intentos!=0 && ban==0){
        scanf("%d%d",&F,&C);
        if(array[F][C]=='x'){
        	Matriz();
            printf("Celda selccionada. Intente otra celda.\n");
        }
        
        else{
            array[F][C]='x';
            intentos--;
            Matriz();
            printf("Ingrese una cordena para marcar otro campo. Quedan %d intentos.\n",intentos);
        }
    }
    
    return 0;
}