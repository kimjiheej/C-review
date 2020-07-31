#include <Stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    
    {
        srand(time(NULL));
        printf("%난수출력: %d\n", rand() % 100);
        printf("%난수출력: %d\n", rand() % 100);
        printf("%난수출력: %d\n", rand() % 100);
        printf("%난수출력: %d\n", rand() % 100);
        printf("%난수출력: %d\n", rand() % 100);
    }
}