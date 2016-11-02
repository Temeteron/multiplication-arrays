#include "libraries.h"

int num_of_elements;

float calc1 (float a[], float b[]);
float calc2 (float a[], float b[]);
float calc4 (float a[], float b[]);
float calc4d2 (float a[], float b[]);
float calc8 (float a[], float b[]);
float calc16 (float a[], float b[]);
float calc32 (float a[], float b[]);
float calc64 (float a[], float b[]);

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

	result = calc4d2 (a, b);
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

	result = calc64 (a, b);
	printf("\n");


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

// Step k = 4 , 2nd way
float calc4d2 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0, res1, res2, res3, res4;

	while (j < num_of_elements) {
		res1 = a[j] * b[j];
		res2 = a[j+1] * b[j+1];
		res3 = a[j+2] * b[j+2];
		res4 = a[j+3] * b[j+3];
		result = result + res1 + res2 + res3 + res4;
		j = j + 4;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC4D2: %lf\n", time_spent);
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

//Step k = 32
float calc32 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]) + (a[j+4] * b[j+4]) + (a[j+5] * b[j+5]) + (a[j+6] * b[j+6]) + (a[j+7] * b[j+7]) + (a[j+8] * b[j+8]) + (a[j+9] * b[j+9]) + (a[j+10] * b[j+10]) + (a[j+11] * b[j+11]) + (a[j+12] * b[j+12]) + (a[j+13] * b[j+13]) + (a[j+14] * b[j+14]) + (a[j+15] * b[j+15]) + (a[j+16] * b[j+16]) + (a[j+17] * b[j+17]) + (a[j+18] * b[j+18]) + (a[j+19] * b[j+19]) + (a[j+20] * b[j+20]) + (a[j+21] * b[j+21]) + (a[j+22] * b[j+22]) + (a[j+23] * b[j+23]) + (a[j+24] * b[j+24]) + (a[j+25] * b[j+25]) + (a[j+26] * b[j+26]) + (a[j+27] * b[j+27]) + (a[j+28] * b[j+28]) + (a[j+29] * b[j+29]) + (a[j+30] * b[j+30]) + (a[j+31] * b[j+31]);
		j = j + 32;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC32: %lf\n", time_spent);
	return result;

}

float calc64 (float a[], float b[]) {
	clock_t begin = clock();
	int j = 0;
	float result = 0;

	while (j < num_of_elements) {
		result = result + (a[j] * b[j]) + (a[j+1] * b[j+1]) + (a[j+2] * b[j+2]) + (a[j+3] * b[j+3]) + (a[j+4] * b[j+4]) + (a[j+5] * b[j+5]) + (a[j+6] * b[j+6]) + (a[j+7] * b[j+7]) + (a[j+8] * b[j+8]) + (a[j+9] * b[j+9]) + (a[j+10] * b[j+10]) + (a[j+11] * b[j+11]) + (a[j+12] * b[j+12]) + (a[j+13] * b[j+13]) + (a[j+14] * b[j+14]) + (a[j+15] * b[j+15]) + (a[j+16] * b[j+16]) + (a[j+17] * b[j+17]) + (a[j+18] * b[j+18]) + (a[j+19] * b[j+19]) + (a[j+20] * b[j+20]) + (a[j+21] * b[j+21]) + (a[j+22] * b[j+22]) + (a[j+23] * b[j+23]) + (a[j+24] * b[j+24]) + (a[j+25] * b[j+25]) + (a[j+26] * b[j+26]) + (a[j+27] * b[j+27]) + (a[j+28] * b[j+28]) + (a[j+29] * b[j+29]) + (a[j+30] * b[j+30]) + (a[j+31] * b[j+31]) + (a[j+32] * b[j+32]) + (a[j+33] * b[j+33]) + (a[j+34] * b[j+34]) + (a[j+35] * b[j+35]) + (a[j+36] * b[j+36]) + (a[j+37] * b[j+37]) + (a[j+38] * b[j+38]) + (a[j+39] * b[j+39]) + (a[j+40] * b[j+40]) + (a[j+41] * b[j+41]) + (a[j+42] * b[j+42]) + (a[j+43] * b[j+43]) + (a[j+44] * b[j+44]) + (a[j+45] * b[j+45]) + (a[j+46] * b[j+46]) + (a[j+47] * b[j+47]) + (a[j+48] * b[j+48]) + (a[j+49] * b[j+49]) + (a[j+50] * b[j+50]) + (a[j+51] * b[j+51]) + (a[j+52] * b[j+52]) + (a[j+53] * b[j+53]) + (a[j+54] * b[j+54]) + (a[j+55] * b[j+55]) + (a[j+56] * b[j+56]) + (a[j+57] * b[j+57]) + (a[j+58] * b[j+58]) + (a[j+59] * b[j+59]) + (a[j+60] * b[j+60]) + (a[j+61] * b[j+61]) + (a[j+62] * b[j+62]) + (a[j+63] * b[j+63]);
		j = j + 64;
	}

	clock_t end = clock();
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Time spent in function CALC64: %lf\n", time_spent);
	return result;

}

