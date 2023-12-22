//
// Created by corne on 12/21/2023.
//
#include <math.h>
#ifndef CALCULATOR_NATURALLOG_H
#define CALCULATOR_NATURALLOG_H

#endif //CALCULATOR_NATURALLOG_H

void Log(){
    double number;
    printf("Enter the number to find the log");
    scanf("%lf",&number);
    double naturalLog=log(number);
    printf("The natural log of %lf is %lf\n", number, naturalLog);

}
