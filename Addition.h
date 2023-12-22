//
// Created by corne on 12/20/2023.
//

#ifndef CALCULATOR_ADDITION_H
#define CALCULATOR_ADDITION_H

#endif //CALCULATOR_ADDITION_H
void Addition(){
    double a;
    double b;
    printf("What numbers are you wishing to add\n");
    printf("number 1\n");
    scanf("%lf", &a); //use %lf instead of %d for double values
    printf("Number 2");
    scanf("%lf", &b);
    double addition= a + b;
    printf("%lf + %lf = %lf\n",a,b, addition);


}
