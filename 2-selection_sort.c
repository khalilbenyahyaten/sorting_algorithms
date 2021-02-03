#include "sort.h"
/**
 * change_element - changes elements
 *
 *@y: array element
 *@z: array element
 *
 *Return: void
 */
void change_element(int *y, int *z)
{
int n;

n = *y;
*y = *z;
*z = n;
}
/**
 * selection_sort - selection sort algorithm
 *
 *@array: array of integers
 *@size: size of array
 *
 *Return: void
 */
void selection_sort(int *array, size_t size)
{
unsigned int i = 0, j, x;

if (!array || size < 2)
return;
for (i = 0; i < size - 1; i++)
{
x = i;
j = 1 + i;
while (j < size)
{
if (array[j] < array[x])
{
x = j;
}
j++;
}
if (x != i)
{
change_element(&array[x], &array[i]);
print_array(array, size);
}
j++;
}
}
