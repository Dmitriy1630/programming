#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(int argc, const char * argv[]) { //программа 1
    float n,x,b,z;
    //Вывести пользователю в окне вычисление суммы
    printf("1.Calculate sum at point x,with tolerance n.\n");
    printf("n = ");
    scanf("%f",&n);
    printf("x = ");
    scanf("%f",&x);
    double previous,current;
    double sum = PI/2.0;
    int k=0;
    current=(float)powf(-1,(k+1))/((2*k+1)*powf(x,2*k+1));
    sum+=current;
    k++;
    do{
        previous=current;
        current=(float)powf(-1,(k+1))/((2*k+1)*powf(x,2*k+1));
        sum +=current;
        k++;
    }while(fabs(current-previous)> n);
    printf("sum = %f\n",sum);
    printf("2.Calculate expression z(x)=arctg(x)+b \n"); //программа 2
    printf("x = ");
    scanf("%f",&x);
    printf("b= ");
    scanf("%f",&b);
    z=(float)atanf(x)+b;
    printf("z =  %f \n",&z);

    return 0;
}
