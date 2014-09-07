#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[]) {
	int mynum = 0, totalthr = 1;
	
	#pragma omp parallel default(shared) private(mynum, totalthr)
	{
		#if defined (_OPENMP)
			totalhr = omp_get_num_threads();
			mynum = omp_getthread_num();
		#endif
		printf("Hello World. I am thread %d out of %d\n",
			mynum, totalthr);
	}
}