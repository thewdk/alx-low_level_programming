#include <stdio.h>
/**
 * main - Entry point
 *  a program that prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void) {
    for (int i = 0; i <= 9; i++) {
        putchar(i + '0'); 
        if (i < 9) {
            putchar(',');    
            putchar(' ');    
        }
    }
    putchar('\n'); 
    return 0;
}