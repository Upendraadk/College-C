#include <stdio.h>
#include <math.h>

// Function prototype for fact() corrected
float fact(int ,int);

int main() {
    int n, x;
    float s = 0; // Initialize s as float for precision
    printf("Enter any two numbers (n and x): ");
    scanf("%d%d", &n, &x);
    s = fact(n, x); // Calling fact() function
    printf("Result: %f", s); // Print result
    return 0;
}

// Function definition for fact()
float fact(int n,int x) {
    float sum = 0;
    float fact = 1; // Initialize factorial as 1
    for (int i = 1; i <= n; i++) {
        fact *= i; // Update factorial for each iteration
        sum += pow(x, i) / fact; // Calculate Taylor series
    }
    return sum; // Return the sum
}

