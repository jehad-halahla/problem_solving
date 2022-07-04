#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++){
            int len;
            scanf("%d",&len);
            char str[len+1];
            scanf("%s",str);
            int startBrackets = 0 ;
            int endBrackets =0 ;
            for(int j = 0 ; j  < len ; j++){
                if(str[j] == '(')
                    startBrackets++;
                else if(startBrackets != 0 && str[j] ==')')
                    startBrackets--;
                else
                    endBrackets++;

            }
            printf("%d\n",endBrackets);
    }
    return 0;
}

