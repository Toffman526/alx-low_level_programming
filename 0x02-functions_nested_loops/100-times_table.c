#include "main.h"

void printTimesTable(int n) 
{
if (n < 0)
{
printf("Invalid input. Please provide a non-negative integer.\n");
return;
}
for (int i = 0; i <= 10; i++) {
int product = n * i;
char buffer[20]; // Buffer to hold the converted integer to string
int j = 0;

// Convert the product to a string
if (product == 0) 
{
buffer[j++] = '0';
} 
else {
while (product > 0) {
buffer[j++] = (product % 10) + '0';
product /= 10;
}
}

// Print the product
for (int k = j - 1; k >= 0; k--) {
putchar(buffer[k]);
}
putchar(' ');
}

putchar('\n');
}

int main() {
int n;

printf("Enter a non-negative integer: ");
scanf("%d", &n);

printTimesTable(n);

return 0;
}

