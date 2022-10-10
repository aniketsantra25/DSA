int *findTwoElement(int *a, int n)
{
    int i;
    int arr[2];
    for (i = 0; i < n; i++) {
        if (a[abs(a[i]) - 1] > 0)
            a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
        else
            arr[0] = abs(a[i]);
    }

    for (i = 0; i < size; i++) {
        if ([i] > 0)
            arr[1] = i+1;
    }
    return arr;
}