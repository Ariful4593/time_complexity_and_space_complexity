#include<stdio.h>
int main()
{
    int n, result;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        result = result + i;
    }
    printf("%d\n", result);
    return 0;
}
