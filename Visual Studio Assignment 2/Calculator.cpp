//Dylan Barrett
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y) //Takes user input which contains a number operator and another number to perform the correct mathmatical function
{
    switch (oper) //Checks which operator was provided in the Calculate function
    {
    case '+': //In the case that the + operator was provided
        return x + y; // This is the return if the + operator was provided
    case '-'://In the case that the - operator was provided
        return x - y;// This is the return if the - operator was provided
    case '*'://In the case that the * operator was provided
        return x * y;// This is the return if the * operator was provided
    case '/'://In the case that the / operator was provided 
        return x / y;//This is the return if the / operator was provided
    default://This is a fallback in case the user types an operator that isnt accepted
        return 0.0;//0.0 is used here because we specified with the double keyword that we might deal with decimeals so that the program can still return with a succesful value
    }
}
