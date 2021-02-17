// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Write your code here
    if (num%2==0)
    printf("%d is Even\n",num);
    else
    printf("%d is Odd\n",num);    
   
    return 0;
}
