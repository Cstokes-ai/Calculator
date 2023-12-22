//
// Created by corne on 12/21/2023.
//

#ifndef CALCULATOR_SUBTRACTION_H
#define CALCULATOR_SUBTRACTION_H

#endif //CALCULATOR_SUBTRACTION_H
void Subtraction(){
    double a;
    double b;
    printf("What numbers are you wishing to Subtract\n");
    printf("number 1\n");
    scanf("%lf", &a); //use %lf instead of %d for double values
    printf("Number 2");
    scanf("%lf", &b);
    double subtraction = a - b;
    printf("%lf - %lf = %lf\n",a,b, subtraction);
}