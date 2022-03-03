#include <stdio.h>

const int STACK_LENGTH = 4;
int position = 0;

void push(int number, int arr[]);
void pop(int arr[]);
void print_array(int arr[]);
void fill_array_with_zeros(int arr[]);

int main(void)
{
    int stack[STACK_LENGTH];
    fill_array_with_zeros(stack);

    push(1, stack);
    push(1, stack);
    push(1, stack);
    push(1, stack);

    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);

    printf("posicao: %d\n", position);
    puts("pilha:");
    print_array(stack);
    return 0;
}

void push(int number, int arr[])
{
    // aceita da posicao 0 a 3 do array, ou seja, da primeira ate a ultima
    if (position >= 0 && position <= STACK_LENGTH - 1)
    {
        arr[position] = number;
        position++;
    }
    else
    {
        puts("Erro, a pilha esta cheia.");
    }
}

void pop(int arr[])
{
    // aceita da posicao 1 a 4 do array
    if (position >= 1 && position <= STACK_LENGTH)
    {
        arr[position - 1] = 0;
        position--;
    }
    else
    {
        puts("Erro, a pilha esta vazia.");
    }
}

void print_array(int arr[])
{
    int i;
    for (i = 0; i < STACK_LENGTH; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void fill_array_with_zeros(int arr[])
{
    int i;
    for (i = 0; i < STACK_LENGTH; i++)
    {
        arr[i] = 0;
    }
}
