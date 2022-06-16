#include<stdio.h>
#include<unistd.h>
int main()
{
    int seconds = alarm(5);
    printf("seconds = %d\n",seconds);
    sleep(2);
    seconds = alarm(3);
    printf("seconds = %d\n",seconds);
    return 0;
}