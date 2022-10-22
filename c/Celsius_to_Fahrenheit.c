#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    //celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}

/*
Output
Enter temperature in Celsius: 10
10.00 Celsius = 50.00 Fahrenheit
*/
