#include <stdio.h>

int main(){

    int lista[] = {75, 85, 99, 58, 95, 10, 80, 100};
    insertionSort(lista, 8); 
    for (int i = 0; i < 8; i++)
        printf("%d - ", lista[i]);
}

void insertionSort(int *a, int size){
    int i, j, bah; 
    for(i=1; i < size; i++)
    {
        bah = a[i];  
        
        for (j = i -1; j >= 0 && a[j] > bah; j--)
        {
            //printf("** %d **", bah);
            //printf("## %d ##", i);
            //printf("-- %d --", j);

            a[j+1] = a[j]; 
        }
        a[j+1] = bah;
    }
}