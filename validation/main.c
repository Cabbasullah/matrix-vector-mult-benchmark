
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MV(char *a, char *b, char *c, char *d, char *e, char *f, int *vo)
{
    int Iteration1, Iteration2;
  
    Iteration2 = (atoi(a) * atoi(e)) + (atoi(b) * atoi(f));
    Iteration1 = (atoi(c) * atoi(e)) + (atoi(d) * atoi(f));

    vo[0] = Iteration2;
    vo[1] = Iteration1;

    // return Iteration1,Iteration2;
    //Instead of returning Iteration1 and Iteration2, it only returns Iteration1 which is the first part of the matrix. As you can
    //from the result, the one element of the result from C is same the other element. It just does not print the second part
}

int main(int argc, char *argv[])
{

    int vo[2];
    MV(argv[1], argv[2], argv[3], argv[4], argv[5], argv[6],vo);
    printf("%d, %d",vo[0],vo[1]);
    

    return 0;
}
