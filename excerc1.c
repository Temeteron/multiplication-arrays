#include <stdio.h>
#include <math.h>
#include <stdlib.h>  // rand(), srand()
#include <time.h> 
#define SIZE pow(2,19)

int num_of_elements;

float calc1 (float a[], float b[]);
float calc2 (float a[], float b[]);
float calc4 (float a[], float b[]);
float calc8 (float a[], float b[]);
float calc16 (float a[], float b[]);
float calc32 (float a[], float b[]);

// int a[num_of_elements], b[num_of_elements];

int main (int argc, char *argv[]) {
	// k=1, 2, 4, 8, 16
	int i;
	num_of_elements = pow(2, 20);
	// float a[num_of_elements], b[num_of_elements];
	// float result = 0;
	float result = 0;
	float *a = (float *)malloc(sizeof(float)*num_of_elements);
	float *b = (float *)malloc(sizeof(float)*num_of_elements);

	// CREATING ELEMENTS FOR A, B
	// for (i = 0; i < num_of_elements; i++) {
	//     a[i] = (float)rand();
	//     b[i] = (float)rand();
	// }

	for (i = 0; i < num_of_elements; i++) {
	    a[i] = (float)rand();
	    b[i] = (float)rand();
	}

	// a * bs
	result = calc1 (a, b);
	printf("\n");
	// printf("Result of calc1 is: %.2lf\n", result);
		
	result = calc2 (a, b);
	printf("\n");
	// printf("Result of calc2 is: %.2lf\n", result);

	result = calc4 (a, b);
	printf("\n");
	// printf("Result of calc4 is: %.2lf\n", result);

	result = calc8 (a, b);
	printf("\n");
	// printf("Result of calc8 is: %.2lf\n", result);

	result = calc16 (a, b);
	printf("\n");
	// printf("Result of calc16 is: %.2lf\n", result);

	result = calc32 (a, b);
	printf("\n");
	// printf("Result of calc32 is: %.2lf\n", result);


	// printf("PAOK\n");
    // printf("a's element is: %d, b's element is: %d\n", a[num_of_elements-1], b[num_of_elements-1]);
	// printf("Result of a*b is: %.2lf\n", result);
	printf("Result of a*b is: %.2lf\n", result);

	free(a);
	free(b);

	return 0;
}

// Step k = 1
float calc1 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]);
		j++;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC1: %lf\n", time_spent);
	return result;

}

// Step k = 2
float calc2 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j] + (a[j+1] * b[j+1]));
		j = j + 2;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC2: %lf\n", time_spent);
	return result;

}


// Step k = 4
float calc4 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]);
		j = j + 4;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC4: %lf\n", time_spent);
	return result;

}


// Step k = 8
float calc8 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]) + (a[j+4] * b[j+4]) + (a[j+5] * b[j+5]) + (a[j+6] * b[j+6]) + (a[j+7] * b[j+7]);
		j = j + 8;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC8: %lf\n", time_spent);
	return result;

}

// Step k = 16
float calc16 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]) + (a[j+4] * b[j+4]) + (a[j+5] * b[j+5]) + (a[j+6] * b[j+6]) + (a[j+7] * b[j+7]) + (a[j+8] * b[j+8]) + (a[j+9] * b[j+9]) + (a[j+10] * b[j+10]) + (a[j+11] * b[j+11]) + (a[j+12] * b[j+12]) + (a[j+13] * b[j+13]) + (a[j+14] * b[j+14]) + (a[j+15] * b[j+15]);
		j = j + 16;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC16: %lf\n", time_spent);
	return result;

}

float calc32 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]) + (a[j+4] * b[j+4]) + (a[j+5] * b[j+5]) + (a[j+6] * b[j+6]) + (a[j+7] * b[j+7]) + (a[j+8] * b[j+8]) + (a[j+9] * b[j+9]) + (a[j+10] * b[j+10]) + (a[j+11] * b[j+11]) + (a[j+12] * b[j+12]) + (a[j+13] * b[j+13]) + (a[j+14] * b[j+14]) + (a[j+15] * b[j+15]) + (a[j+16] * b[j+16]) + (a[j+17] * b[j+17]) + (a[j+18] * b[j+18]) + (a[j+19] * b[j+19]) + (a[j+20] * b[j+20]) + (a[j+21] * b[j+21]) + (a[j+22] * b[j+22]) + (a[j+23] * b[j+23]) + (a[j+24] * b[j+24]) + (a[j+25] * b[j+25]) + (a[j+26] * b[j+26]) + (a[j+27] * b[j+27]) + (a[j+28] * b[j+28]) + (a[j+29] * b[j+29]) + (a[j+30] * b[j+30]) + (a[j+31] * b[j+31]);
		j = j + 16;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC32: %lf\n", time_spent);
	return result;

}

