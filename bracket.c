#include <stdio.h>
#include <stdlib.h>

typedef struct bracket
{   
    int size;
    char *data;
    int top;
}Bracket;
Bracket create_stack(int size)
{
    Bracket bracket;
    bracket.size = size;
    bracket.data = (char*)malloc(sizeof(char)*size);
    bracket.top = 0;
    return bracket;
}
int main(void)
{   
    Bracket b;
    printf("수식: ");
    //scanf("%s",bracket);
    printf("괄호수:");

}