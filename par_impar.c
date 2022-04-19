#include <stdio.h>
#include <stdlib.h>

#define eh_par( n )      ( ( n % 2 ) ? 0 : 1 )
#define comparar( a, b ) ( ( a == b ) ? 0 : ( ( a > b ) ? 1 : -1 ) )

int main( int argc, char * argv[] )
{
    int a = 0;
    int b = 0;

    printf("a: ");
    scanf( "%d", &a );

    printf("b: ");
    scanf( "%d", &b );

    switch( comparar( a, b ) )
    {
        case -1: printf( "%d eh menor que %d\n", a, b ); break;
        case  0: printf( "%d eh igual a %d\n", a, b ); break;
        case  1: printf( "%d eh maior que %d\n", a, b ); break;
    }

    printf("%d eh um numero %s\n", a, eh_par(a)?"PAR":"IMPAR" );
    printf("%d eh um numero %s\n", b, eh_par(b)?"PAR":"IMPAR" );

    return 0;
}
