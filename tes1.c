#include <stdio.h>

//Giving some delay
void delay( unsigned int value)
{
    unsigned int count1 =0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value ; count1++ )
    {
        for(count2 = 0; count2 < count1 ; count2++ )
        {

        }
    }
}


// string to display Rocket
const char rocket[] =
    " Selamat datang di biodata saya  ";

int main()
{

    int jumpControlAtBottom = 0;
    const int someDelay = 20000
	;
    int shifControl = 0;


    //jump to bottom of console

    for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    //Print rocket
    fputs(rocket,stdout);

    for (shifControl = 0; shifControl < 30; ++shifControl)
    {
        // Rocket move on the basis of delay
        delay(someDelay);
        
        // move rocket a line upward
        printf("\n");
    }
    return 0;
}
