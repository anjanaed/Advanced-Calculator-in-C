#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int pass,op,p;
    float tp,hp,t,h=0;
    float a,b,e;
    printf("***************************************************************\n"
           "Hello, Welcome to All in one C based Calculator by Anjana Ed :)\n"
           "***************************************************************\n\n\n");
    printf("Please Enter the unique code to use calculator :");
    scanf("%d",&pass);
    if(pass==2002){
        printf("Welcome to the Arithmatic World, What can i do for you...\n"
               "Here are the calculations that i can do. Please enter the relavant number to execute operations\n\n");
        printf("1 - Addition\n2 - Substraction\n3 - Multiplication\n4 - Division\n5 - Power\n6 - Square Root\n7 - Show Current Value\n8 - Reset Current Value\n9 - Exit\n");
        op:
        printf("Enter a option(number) to continue :");
        scanf("%d",&op);
        switch(op) {
            case 1:
                printf("Enter the numbers you want to add one by one. Enter 0 to go back to options\n");
                while (1) {
                    printf("Enter the number: ");
                    scanf("%f", &a);
                    if (a == 0) {
                        goto op;
                    } else {
                        t += a;
                        printf("Answer: %.2f\n", t);
                    }
                }
            case 2:
                printf("Enter the numbers you want to Substract one by one. Enter 0 to go back to options\n");
                while (1) {
                    printf("Enter the number: ");
                    scanf("%f", &a);
                    if (a == 0) {
                        goto op;
                    } else {
                        t -= a;
                        printf("Answer: %.2f\n", t);
                    }
                }
            case 3:
                printf("Enter the numbers you want to multiply one by one. Enter 0 to go back to options\n");
                while (1) {
                    printf("Enter the number: ");
                    scanf("%f", &a);
                    if (a == 0) {
                        goto op;
                    } else {
                        t *= a;
                        printf("Answer: %.2f\n", t);
                    }
                }
            case 4:
                printf("Enter the numbers you want to divide one by one. Enter 0 to go back to options\n");
                while (1) {
                    printf("Enter the number: ");
                    scanf("%f", &a);
                    if (a == 0) {
                        goto op;
                    } else {
                        t /= a;
                        printf("Answer: %.2f\n", t);
                    }
                }
            case 5:
                printf("Enter the base number to find power, Enter 0 to go back to options\n");
                scanf("%f", &b);
                while (1) {
                    printf("Enter the power: ");
                    scanf("%f", &e);
                    if (e == 0) {
                        goto op;
                    } else {
                        tp = pow(b, e);
                        printf("Answer: %.2f\n", tp);
                        printf("Do you want to update this value as current executing value? :0/1");
                        scanf("%d", &p);
                        if (p == 1) {
                            t = tp;
                            printf("Updated\n");
                        }
                    }
                }

            case 6:
                if (t != 0) {
                    printf("Do you want to find the square root of current value? 1/0 :");
                    scanf("%d", &p);
                    if (p == 1) {
                        t = sqrt(t);
                        printf("Answer: %.2f\n", t);
                        goto op;
                    }
                } else {
                    printf("Enter the number to find square root :");
                    scanf("%f", &h);
                    hp = sqrt(h);
                    printf("Answer: %.2f\n", hp);
                    printf("Do you want to update this value as current executing value? :0/1");
                    scanf("%d", &p);
                    if (p == 1) {
                        t = hp;
                        printf("Updated\n");
                    goto op;
                    }
            case 7:
                printf("Current Value is %.2f\n", t);
                goto op;

            case 8:
                t = 0;
                printf("Value Reset back to 0\n");
                goto op;

            case 9:
                exit(0);
                }
        }
    }else{
        printf("Wrong code! Try again");
        exit(1);
    }
    return 0;
}