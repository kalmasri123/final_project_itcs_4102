#include <iostream>

using namespace std;

int main()
{
    //Memory is allocated on stack. 
    //Stack memory cannot be manually freed since 
    //it gets released at the end of the block
    int x = 5;
    //Dynamically allocated memory. Does not free on its own.
    int *y = (int*)malloc(sizeof(int)*10);
    //frees memory of y.
    free(y);

    //This is unsafe code since the memory has been freed. 
    //g++ compiler will not warn you and will be evalutated at runtime
    printf("%d",y[5]);
}
