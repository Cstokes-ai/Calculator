//
// Created by corne on 12/21/2023.
//

#ifndef CALCULATOR_DIVISION_H
#define CALCULATOR_DIVISION_H

#endif //CALCULATOR_DIVISION_H
void Division(){
    double a;
    double b;
    printf("What numbers are you wishing to divide\n");
    printf("number 1\n");
    scanf("%lf", &a); //use %lf instead of %d for double values
    printf("Number 2");
    scanf("%lf", &b);
    double division= a / b;
    printf("%lf / %lf = %lf\n",a,b, division);
}