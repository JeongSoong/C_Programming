#include <stdio.h>

float new_average=0;
float old_average=0;

 void data_average (float a,int K)
 {
    new_average = (old_average*(K-1)/K) + (a/K);
    old_average=new_average;
  }

int main(void)
{
	float b=0;
	int K=1;
	
	while(1)
	{
		printf("넣을 값을 입력하세요: ");
		scanf("%f",&b);
		data_average (b,K);
		K = K+1;
		printf("평균값: %f \n",new_average);
	}
}