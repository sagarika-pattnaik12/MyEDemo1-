//Demo pull
//Sum of array elements
//Made for github
#include <stdio.h>
void sum(int *a, int n);
void main(){
int n,arr[100],i;
printf("Hello\n");

printf("Enter size of the array: ");
scanf("%d", &n);

printf("Enter %d elements in the array: ", n);
for(i=0; i<n; i++){
scanf("%d", &arr[i]);}

printf("The entered elements of array is: ");

for(i = 0; i<n; i++){
    printf("%d ", arr[i]);}
  printf("\n");

sum(&arr[0], n);
}


void sum(int *a, int n){
int j;
int add = 0;

for(j = 0; j < n; j++){
    add = add + *a;
    a++; }
printf("Sum of all elements of array = %d\n", add);
}


