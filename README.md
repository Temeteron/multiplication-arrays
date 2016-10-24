# multiplication-arrays
Multiplication of 2 arrays with size 2^19 of floats each

Multiply those two arrays with different ways to achieve the best time execution.

Change step on loop: k={1,2,4,8,16,32}


	k=1
	result += a[i]*b[i]


	k=2
	result += a[i]*b[i] + a[i+1]*b[i+1]


	k=4
	result += a[i]*b[i] + a[i+1]*b[i+1] + a[i+2]*b[i+2] + a[i+3]*b[i+3]

	same for the rest steps

Result

	The time execution keeps dropping until step k=16,
	in that step we got the smallest time execution.
	In step k=32 the time execution starts to increase.
	So the highest efficiency result for k=16


Makefile commands:
	make: compiles code
	clear: deletes files
	make run: executes prog
