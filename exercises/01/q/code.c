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

#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, v, idx = 1;
    bool isFirst = true;

    while (true) {
        scanf("%d %d", &a, &v);

        if (a == 0 && v == 0)
            break;

        if (isFirst)
            isFirst = false;
        else
            printf("\n\n");

        int x, y, max = 0, airports[a - 1];

        for (int i = 0; i < a; i++)
            airports[i] = 0;

        for (int i = 0; i < v; i++) {
            scanf("%d %d", &x, &y);
            airports[x - 1]++;
            airports[y - 1]++;
        }

        for (int i = 0; i < a; i++)
            if (airports[i] > max)
                max = airports[i];

        printf("Teste %d\n", idx++);

        for (int i = 0; i < a; i++)
            if (airports[i] == max)
                printf("%d ", i + 1);
    }

    printf("\n");
    return 0;
}
