//在交换函数的基础是实现数组的反转
void reverse_array(int a[], int cnt){
    int first,last;
    for(first = 0,last = cnt -1;
        first < last;
        first++,last--)
        inplace_swap(&a[first], &a[last]);
}
