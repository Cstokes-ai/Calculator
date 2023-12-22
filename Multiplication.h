//
// Created by corne on 12/21/2023.
//

#ifndef CALCULATOR_MULTIPLICATION_H
#define CALCULATOR_MULTIPLICATION_H

#endif //CALCULATOR_MULTIPLICATION_H
void Multiplication(){
    double a;
    double b;
    printf("What numbers are you wishing to multiply\n");
    printf("number 1\n");
    scanf("%lf", &a); //use %lf instead of %d for double values
    printf("Number 2");
    scanf("%lf", &b);
    double multiplication= a * b;
    printf("%lf * %lf = %lf\n",a,b, multiplication);

}