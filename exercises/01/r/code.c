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

int main() {
    int n;
    scanf("%d", &n);

    int first_map[n][n], second_map[n][n], result_map[n][n], i, j;

    // Populate the both maps.
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &first_map[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &second_map[i][j]);

    // Sum the both maps.
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            result_map[i][j] = first_map[i][j] + second_map[i][j];

    // Finally, print the result.
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", result_map[i][j]);

            if (j < n - 1)
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
