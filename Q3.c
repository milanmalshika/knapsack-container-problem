#include<stdio.h>

int main(){
	int n, i, j, temp, container=0;
	printf("Enter the number of shipping products = ");
	scanf("%d", &n);
	int weight[n];
	
	printf("Enter the weights = ");
	for(i=0; i<n; ++i){
		scanf("%d", &weight[i]);
	}
	
	for(i=0; i<n; ++i){
		for(j=i+1; j<n; ++j){
			if(weight[i]>weight[j]){
				temp = weight[i];
				weight[i] = weight[j];
				weight[j] = temp;
			}
		}
	}

	int min = weight[0];
	int c = 0;
	
	for(i=c; i<n; i++){
		if(weight[i+1]-min>4){
			container++;
			min = weight[i+1];
			c = i+1;
		}
	}
	
	printf("\n%d", container);
//	for(i=0; i<n; i++){
//		printf("%d\n", weight[i]);
//	}
	
	return 0;
}
