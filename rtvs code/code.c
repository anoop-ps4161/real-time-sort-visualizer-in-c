#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,temp;
    printf("Enter the limit of numbers to store in the array:\n");
    scanf("%d",&n);

    int a[n];
    printf("Enter the numbers to store in the array for sorting:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("\nThe entered numbers are:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    // REAL-TIME SORTING (BUBBLE SORT)
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j] > a[j+1]){
                // Show the swap happening in real-time
                printf("\nSwapping %d and %d\n", a[j], a[j+1]);

                // Swap the numbers
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;

                // Print the array after each swap (like real-time sorting)
                for(int k=0; k<n; k++){
                    printf("%d ",a[k]);
                }
                printf("\n");
            }
        }
    }

    printf("\nThe sorted array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }

    return 0;
}
