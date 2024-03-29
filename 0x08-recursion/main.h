#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int get_sqrt(int n, int r);
int is_prime_number(int n);
int check_prime(int n, int i);
int is_palindrome(char *s);
int check_palindrome(char *s, int left, int right);
char *get_non_wild_char(char *s);
char *get_matching_char(char *s1, char *s2);
int wildcmp(char *s1, char *s2);

#endif
