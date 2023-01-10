#include <stdio.h>

int main() {
    int array[] = {75, 85, 99, 58, 95, 10, 80};

    int n = sizeof(array)/sizeof(array[0]);
    int i, j, min;

    for (i = 0; i < n-1; i++) {
        min = i;

        for (j = i+1; j < n; j++) {
			if (array[j] < array[min]) {
            	min = j;
        	}
    	}

		if(min != i) {
        	trocarPosicao(&array[min], &array[i]);
    	}
    }

    printArray(array, n);
    return 0;
}
 
void trocarPosicao(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
 

void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++){
        printf("%d ", arr[i]);
	}
    printf("\n");
}