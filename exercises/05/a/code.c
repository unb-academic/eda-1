/*
 * MIT License
 *
 * Copyright (c) 2023 UnB
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
**/

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef char item;

typedef struct _node {
    item value;
    struct _node *next;
} node;

typedef struct _stack {
    struct _node *top;
    int size;
} stack;

node *node_new(item value) {
    node *node = malloc(sizeof(struct _node));

    node->value = value;
    node->next = NULL;
    return node;
}

bool stack_is_empty(stack *stack) {
    return stack->size == 0;
}

void stack_push(stack *stack, item value) {
    node *node = node_new(value);

    node->next = stack->top;
    stack->top = node;
    stack->size++;
}

item stack_pop(stack *stack) {
    node *node = stack->top;

    stack->top = node->next;
    stack->size--;

    item value = node->value;
    free(node);

    return value;
}

item stack_spy(stack *stack) {
    return stack->top->value;
}

void stack_print(stack *stack) {
    node *node = stack->top;

    printf("[");
    while (node) {
        printf("%c", node->value);
        node = node->next;

        if (node)
            printf(", ");
    }
    printf("]\n");
}

stack *stack_new() {
    stack *stack = malloc(sizeof(struct _stack));
    stack->top = NULL;
    stack->size = 0;
    return stack;
}

int main() {
    char string[101];
    int i;

    scanf("%s", string);

    stack *stack = stack_new();

    for (i = 0; i < strlen(string); i++)
        stack_push(stack, string[i]);

    for (i = 0; i < strlen(string); i++)
        printf("%c", stack_pop(stack));

    printf("\n");
    return 0;
}
