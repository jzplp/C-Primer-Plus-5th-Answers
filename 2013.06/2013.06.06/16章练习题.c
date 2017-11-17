#define NAME 25
#define SPACE ' '
#define PS() putchar(' ')
#define BIG(X) ((X)+3)
#define SUMSQ(X,Y) ((X)*(X)+(Y)*(Y))

#define PRINT(X) printf("name: "#x" ; value: %d; address: %p\n",(X),(X))

#define __AAA__
#ifndef __AAA__
//   XXX;
#endif

#ifdef PR_DATE
printf("%s\n",__DATE__);
#endif

#include<stdlib.h>
	//int comp(const void * a,const void * b);
	//qsort(scores,100,sizeof(int),comp);

//memcmpy(data1,data2,100*sizeof(double));
//memcmpy(data1,data2+200,100*sizeof(double));


