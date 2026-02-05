include <stdio.h>
include <stdlib.h>
int main() {
int *arr;
arr = (int *) calloc(5, sizeof(int));
if(arr == NULL) { printf("Allocation failed!\n”); return1; }
for(int i=0; i<5; i++) printf("%d ", arr[i]);
free(arr);
return 0;
}
Output:
0 0 0 0 0
