#include<stdio.h>
int main(){

int num, pos, i, j, x, y, temp, result[10];
scanf("%d %d",&num,&pos);

for(i=1;i<=num;i++){
	if(i%2==0){
			for(j=1;j<=num;j++){


		result[j]=i;

			}

	}

printf("%d = %d\n",i,result[i]);
}









}
