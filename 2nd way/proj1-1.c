#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#define LENGTH pow(2,20)

int main (int argc,char* argv[]){
	float *a,*b,c=0;
	int i;
	clock_t begin,end;
	double time_spent;
	
	//srand(time(NULL));
	
	a=(float*)malloc(LENGTH*sizeof(float));
	b=(float*)malloc(LENGTH*sizeof(float));
//Initialize vectors
	for(i=0; i<=LENGTH-1; i++){
		a[i]=(float)rand();
		b[i]=(float)rand();
	//	printf("%.21fl \n ",a[i]);
	}

//k=1
//	if (strcmp(argv[1],"1")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i++){
		c=c+a[i]*b[i];
		}
		end=clock();
	 time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
	printf("Time spent in function CALC1: %lf\n", time_spent);
//	}
	
//k=2	
	//if (strcmp(argv[1],"2")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i=i+2){
		c=c+a[i]*b[i]+a[i+1]*b[i+1];
		}
		end=clock();
		time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
	printf("Time spent in function CALC2: %lf\n", time_spent);
//	}

//k=4
	//if (strcmp(argv[1],"4")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i=i+4){
		c=c+a[i]*b[i] + (a[i+1] * b[i+1]) + (a[i+2] * b[i+2]) + (a[i+3] * b[i+3]);
		}
		end=clock();
		time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
	printf("Time spent in function CALC4: %lf\n", time_spent);
//	}
	
//k=8
//	if (strcmp(argv[1],"8")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i=i+8){
		c=c+(a[i] * b[i]) + (a[i+1] * b[i+1]) + (a[i+2] * b[i+2]) + (a[i+3] * b[i+3]) + (a[i+4] * b[i+4]) + (a[i+5] * b[i+5]) + (a[i+6] * b[i+6]) + (a[i+7] * b[i+7]);
		}
		end=clock();
		time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
		printf("Time spent in function CALC8: %lf\n", time_spent);
//	}

//k=16
//	if (strcmp(argv[1],"16")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i=i+16){
		c=c + (a[i] * b[i]) + (a[i+1] * b[i+1]) + (a[i+2] * b[i+2]) + (a[i+3] * b[i+3]) + (a[i+4] * b[i+4]) + (a[i+5] * b[i+5]) + (a[i+6] * b[i+6]) + (a[i+7] * b[i+7]) + (a[i+8] * b[i+8]) + (a[i+9] * b[i+9]) + (a[i+10] * b[i+10]) + (a[i+11] * b[i+11]) + (a[i+12] * b[i+12]) + (a[i+13] * b[i+13]) + (a[i+14] * b[i+14]) + (a[i+15] * b[i+15]);
		}
		end=clock();
		time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
		printf("Time spent in function CAL16: %lf\n", time_spent);
//	}
	
	//k=32
//	if (strcmp(argv[1],"32")==0){
		begin=0;
		end=0;
		begin=clock();
		c=0;
		for(i=0; i<=LENGTH-1; i=i+32){
		c=c + (a[i] * b[i]) + (a[i+1] * b[i+1]) + (a[i+2] * b[i+2]) + (a[i+3] * b[i+3]) + (a[i+4] * b[i+4]) + (a[i+5] * b[i+5]) + (a[i+6] * b[i+6]) + (a[i+7] * b[i+7]) + (a[i+8] * b[i+8]) + (a[i+9] * b[i+9]) + (a[i+10] * b[i+10]) + (a[i+11] * b[i+11]) + (a[i+12] * b[i+12]) + (a[i+13] * b[i+13]) + (a[i+14] * b[i+14]) + (a[i+15] * b[i+15]) + (a[i+16] * b[i+16]) + (a[i+17] * b[i+17]) + (a[i+18] * b[i+18]) + (a[i+19] * b[i+19]) + (a[i+20] * b[i+20]) + (a[i+21] * b[i+21]) + (a[i+22] * b[i+22]) + (a[i+23] * b[i+23]) + (a[i+24] * b[i+24]) + (a[i+25] * b[i+25]) + (a[i+26] * b[i+26]) + (a[i+27] * b[i+27]) + (a[i+28] * b[i+28]) + (a[i+29] * b[i+29]) + (a[i+30] * b[i+30]) + (a[i+31] * b[i+31]);
		}
		end=clock();
		time_spent = (double)(end - begin)/ CLOCKS_PER_SEC;
		printf("Time spent in function CAL32: %lf\n", time_spent);
//	}
	printf(" \n %fl \n ",c);
//	printf("%s \n",argv[1]);
	
	free(a);
	free(b);
	
	return 0;
}