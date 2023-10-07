#include <stdio.h>
/**
 * main - Entry point
 *  a program that prints the alphabet in lowercase, 
 * and then in uppercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main() {
    char letter = 'a';
    while (letter <= 'z') {
        putchar(letter);
        letter++;
    }
    letter = 'A';
    while (letter <= 'Z') {
        putchar(letter);
        letter++;
    }

    putchar('\n');  // Print a newline character
    return 0;
}

