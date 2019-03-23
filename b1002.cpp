// A + B > C
#include <cstdio>

int main()
{
    int  T , i = 1;

    scanf("%d" , &T);

    while (T -- )
 {
    long long a, b, c;
    scanf ("%lld %lld %lld", &a, &b, &c);
    
    if (a +b > c){
            printf ("Case #%d: true\n", i++);

    }
    else {
            printf("Case #%d: false\n", i++);
    }

} 


    return 0;
    }
