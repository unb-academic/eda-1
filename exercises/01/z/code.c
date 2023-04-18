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
#include <string.h>

int main() {
    int n, k = 1;
    scanf("%d", &n);

    while (true) {
        char students[n][21], student[21] = "";
        int grades[n], min = 10;

        for (int i = 0; i < n; i++)
            scanf("%s %d", students[i], &grades[i]);

        for (int i = 0; i < n; i++)
            if (grades[i] < min)
                min = grades[i];

        for (int i = 0; i < n; i++)
            if (grades[i] == min && strcmp(students[i], student) > 0)
                strcpy(student, students[i]);

        printf("Instancia %d\n", k++);
        printf("%s\n", student);

        if (scanf("%d", &n) == EOF)
            break;
        else
            printf("\n");
    }

    return 0;
}
