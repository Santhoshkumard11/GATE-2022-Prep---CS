/*
GATE 2021 - Set 2
Explanation: Normally when you add +2 to a arr[1] it would sum up but when * is used it increments the index of the array 
*/

#include <stdio.h>
int main(){

    printf("\n");
    int arr[4][5];
    int i, j;

    for (i=0; i<4; i++){
        for (j=0; j<5; j++){
            arr[i][j] = 10*i + j;
        }
    }

    printf("%d", *(arr[1]+2)); // improtant line to look for

    printf("\n");
    return 0;
}