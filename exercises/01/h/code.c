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
    int aux, x, y, j1, j2, n = 0;

    while (true) {
        scanf("%d", &aux);

        if (aux == 0)
            break;

        j1 = 0;
        j2 = 0;
        n += 1;

        for (int i = 0; i < aux; i++) {
            // I don't know if there is a way to scan two integers and
            // increment them at the same time. So by now, I'm doing it
            // separately.
            scanf("%d %d", &x, &y);
            j1 += x;
            j2 += y;
        }

        printf("Teste %d\n", n);

        // No case for equality. There is no case where both players have the
        // same number of points, so there is no need to check for it.
        if (j1 > j2)
            printf("Aldo\n");
        else
            printf("Beto\n");

        printf("\n");
    }

    return 0;
}
