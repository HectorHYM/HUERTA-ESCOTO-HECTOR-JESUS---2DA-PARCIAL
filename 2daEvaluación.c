#include <stdio.h>
#include <stdlib.h>

void ordenamiento(int list[], int n);
void swap(int *x, int *y);

void ordenamiento(int list[], int n){
	int min=0;
	int indexMin=0;
	for(int i=0; i<n-1; i++)
	{
		min = i;

		for(int j=i+1; j<n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}
		if(indexMin !=i){
			swap(&list[min], &list[i]);
		}
	}
}

void swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
    
	int n=0;
	
	printf("Ingrese la cantidad de valores que desee ordenar: ");
    scanf("%d", &n);
    
	int list[n];
	
	for(int i=0; i<n; i++){
        printf("Ingrese el valor de la posición %d: ", i+1);
        scanf("%d", &list[i]);
        printf("\n");
    }
    
	printf("ORIGINAL");
	printf("\n");
	
	for(int i=0; i<n; i++){
        printf("El valor de la posición %d es %d", i+1, list[i]);
        printf("\n");
    }
	
	ordenamiento(list, n);
	
	printf("ORDENADOS");
	printf("\n");
	
	for(int i=0; i<n; i++){
        printf("El valor de la posición %d es %d", i+1, list[i]);
        printf("\n");
    }

	return 0;
}
