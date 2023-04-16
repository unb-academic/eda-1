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
    int n;
    scanf("%d", &n);

    int v[n], k;
    bool found = false;

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    scanf("%d", &k);

    // A binary search would be way more efficient, but this is not the focus
    // of this exercise, so we'll just do a linear search, which is O(n).
    for (int i = 0; i < n; i++) {
        if (v[i] == k) {
            found = true;
            break;
        }
    }

    if (found)
        printf("pertence\n");
    else
        printf("nao pertence\n");

    return 0;
}
