#include <stdio.h>
#include <stdlib.h>

int convert(int n)
{
    int num = n;
    int result = 0;
    int ratio = 1;
    while (num) {
        int lastdigit = num % 10;
        num = num / 10;
        result += lastdigit * ratio;
        ratio = ratio * 2;
    }
    return result;
}
 
// Driver program to test above function
int main()
{
    char num[8] = "00000000";
    printf("Enter a eight-digit binary number:\n");
    scanf("%s",num);

    int number = atoi(num);
 
    int result = convert(number);

    printf("%d\n", result);
}