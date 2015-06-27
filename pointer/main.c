#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned int i[]= {1,3,10};

    unsigned int ch1 = *(unsigned int *)((2293500)+4);

    printf("%lu\r\n",ch1);

    unsigned int *p = i;

    printf("the value of ++*++p is %u\r\n",++*++p);//4

    printf("the value of *p is %u\r\n",*p);//4

    printf("the value of ++*++p++ is %u\r\n",++*++p++);//5

    printf("the value of *p is %u\r\n",*p);//10

    printf("%u",i[1]);
    //printf("the value of *p++ is %c\r\n",*p++);//b

   // printf("the value of ++*p is %c\r\n",++*p);//c

    //printf("the value of *p is %c\r\n",*p);//b

   // printf("the value of *p is %c\r\n",*p+1);//c

    //printf("the value of *(p+1) is %c\r\n",*(p+1));//can not know

   // printf("the value of ++p is %ld \r\n",++p);

   // printf("the value of p++ is %ld \r\n",p++);

   // printf("the value of ++*p is %c\r\n",++*p);//b

  //  printf("the value of (*p)++ is %c\r\n",(*p)++);//c

    //printf("Hello world!\n");
    return 0;
}
