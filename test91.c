#include<stdio.h>
void quick_sort(int array[],int left,int right)
{
    int i =left,j=right;
    int temp;
    int pivot;

    //基準點設置爲中間元素，也可以選擇其他元素作爲基準點
    pivot = array[(left+right)/2];
    while (i<=j)
    {
        //找到左邊大於等於基準點的元素
        while(array[i]<pivot)
        {
            i++;
        }
        //找到右邊小於等於基準點的元素
        while (array[j]>pivot)
        {
            j--;
        }
        //如果左邊小標小於右邊，則互換元素
        if (i<=j)
        {
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
            i++;
            j--;
        }
        
        
    }
    //遞歸遍歷左側子序列
    if (left<j)
    {
        quick_sort(array,left,j);
    }
    //遞歸遍歷右側子序列
    if (i<right)
    {
        quick_sort(array, i ,right);
    }
}
int main(void)
{
    int array[]={73,108,111,118,101,70,105,115,104,67,46,99,111,109};
    int i ,length;

    length=sizeof(array)/sizeof(array[0]);
    quick_sort(array,0,length-1);

    printf("排序後的結果是：");
    for (i=0;i<length;i++)
    {
        printf("%d ",array[i]);
    }
    putchar('\n');

    return 0 ;
}