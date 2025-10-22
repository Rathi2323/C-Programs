#include <stdio.h>
#include <stdint.h>
#include <string.h>

int roman(int r)
{
    switch(r)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int changeroman(char *s)
{
    long long total = 0;
    int len = strlen(s);
    for(int i=0;i<len;i++)
    {
        int curr = roman(s[i]);
        int next = (i<len) ? roman(s[i+1]) : 0;

        if(curr < next)
            total -= curr;
        else
            total += curr;
    }
    return total;
}

int main()
{
    char *s = "LD";
    int value = changeroman(s);
    printf("Numerical equivalent is %d",value);
    
}