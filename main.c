#include <stdio.h>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "NaturalLog.h"
#include "SquareRoots.h"
#include <math.h>

void display(){
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Divide\n");
    printf("5. Natural Log\n");
}
int main() {
    int choice;
    do {
        printf("Choose an option");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                Log();
            case 6:
                Roots();
        }
    }
    while(choice !=4);
    return 0;

}
