#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    float F,x1,x2,delta;
    unsigned int v,N;


    printf("Variant 1 or 2? : ");
    scanf("%u",&v);

    while(v!=1 && v!=2)
    {
     printf("ACHTUNG! ERROR\n");
     printf("Variant 1 or 2? : ");
     scanf("%u",&v);
    }
    if(v == 1)
    {
        printf("\nx1 = ");
        scanf("%f", &x1);
        printf("\nx2 = ");
        scanf("%f", &x2);
        printf("\n(N>0) N = ");
        scanf("%u", &N);

    while( N<1 ){
         printf("ACHTUNG! N must be >0 \n");
         printf("N=");
         scanf("%u", &N);}

    int i = 1;
    delta=(x2-x1)/(N-1);
    system("cls");
            printf("\n----------------------------------\n");
            printf("|   N   |     X     |      F     |\n");
            printf("----------------------------------\n");
    for(i; i<=N; i++)
    {
            printf("|%4d   |%9.2f  |%11.2f |", i, x1, F );
            printf("\n");
            printf("----------------------------------");
            printf("\n");
                 x1 = x1 + delta;
                 F = (x1+5);
            if( i%12 == 0)
                {
                printf("Press any key\r");
                getch();
                }
}
    }
    if(v == 2)
    {
        printf("\nx1 = ");
        scanf("%f", &x1);
        printf("\nx2 = ");
        scanf("%f", &x2);
        printf("\ndelta = ");
        scanf("%f", &delta);

     while(delta<1)
     {
         printf("ACHTUNG! delta must be >0 \n");
         printf("delta=");
         scanf("%u", &delta);
     }
     int i = 1;
            system("cls");
            printf("\n----------------------------------\n");
            printf("|   N   |     X     |      F     |\n");
            printf("----------------------------------\n");
     while(x1<=x2)
    {
            printf("|%4d   |%9.2f  |%11.2f |", i, x1, F );
            printf("\n");
            printf("----------------------------------");
            printf("\n");
                x1 = x1 + delta;
                F = (x1+5);
                i++;
            if( i%12 == 0)
                {
                printf("Press any key\r");
                getch();
                }
    }
  }

    return 0;
}



