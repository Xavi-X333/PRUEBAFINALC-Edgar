#include <stdio.h>
int main(){
    {
        int arreglo[3][2];
        int i,j; 
        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                printf("introdusca el valor en la posicion [%d][%d] \n",i,j);
                scanf("%d",&arreglo[i][j]);
            }
        }

        for(i=0;i<3;i++){
            for(j=0;j<2;j++){
                printf("los valores son: %d \n",arreglo[i][j]);
            }
        }    
        
        return 0;
    }
}