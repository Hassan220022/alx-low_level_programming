#include <stdio.h>

int main( void )
{
    unsigned int a[] = { 12, 1234, 123456, 12345678, 1234567890 };
    const unsigned int Base = 10;

    for ( size_t i = 0; i < sizeof( a ) / sizeof( *a ); i++ )
    {   
        unsigned int divisor = Base;
        while ( a[i] / divisor > divisor ) divisor *= Base;

        printf( "%u\t%u\n", a[i] / divisor, a[i] % divisor );
    }        
}