#include <stdio.h>
float convertCelsious(int gradosF);

int main(int argc, char const *argv[])
{   
    int TemperatureF;
    float celsious;
    printf("Dime la temperatura en grados farenheit y la convertire a celsious: ");
    scanf("%i", &TemperatureF);

    celsious=convertCelsious(TemperatureF);

    printf("Temperature en grados Celsious: %.2f", celsious);
    return 0;
}

float convertCelsious(int gradosF)
{
    return (gradosF-32)/1.8;
}