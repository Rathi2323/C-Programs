#include <stdio.h>
#include <stdbool.h>

bool ispalindrome(int x)
{
    int result =0;
    int original = x;
    while(x!=0)
    {
        int temp = x%10;
        result = result*10 + temp;
        x = x/10;
    }

    if(result == original)
        return 1;
    else
        return 0;
}

int main()
{
    int x = 242465;
    int final_result = ispalindrome(x);

    if(final_result)
    {
        printf("True");
    }
    else
    printf("False");

}