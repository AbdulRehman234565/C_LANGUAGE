#include <stdio.h>
int main(){
		int std,quiz;
		int sum =0;
		printf("No Of Std : ");
		scanf("%d",&std);
			printf("\nNo Of quiz : ");
		scanf("%d",&quiz);
		int marks[std][quiz];
		int i,j;
		int max =1;
		for(i=0;i<std;i++){
			for(j=0;j<quiz;j++){
				scanf("%d",&marks[i][j]);
				sum = sum + marks[i][j];
				if(max<marks[i][j]){
					max = marks[i][j];
				}
			}
			
}
	for(i=0;i<std;i++){
			for(j=0;j<quiz;j++){
				printf(" %d",marks[i][j]);
			}
			printf("\n");
}

float avg = sum/quiz;
printf("\nMAX : %d",max);
printf("\nAverage is %f",avg);
for(i=0;i<std;i++){
	int total=0;
	int mx = -1;
	
	int fail = 0;
	int full =0;
	for(j=0;j<quiz;j++){
		int score = marks[i][j];
	total = total + score;
		if(score==20){
			full++;
		}
		if(score<10){
			fail++;
		}
		if(mx<score){
			mx=score;
		}
	}

		 printf("\nMax,\nfail,\nfull,\ntotal :\n%d \n%d \n%d \n%d ",mx,fail,full,total);
}

	
}
