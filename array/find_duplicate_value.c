// 07/11/2023
#include <stdio.h>
// in c we write array in curly bracket
int arr[] = {13, 55, 60, 89, 78, 13, 1, 2, 13, 4, 900};
int count = 0;
int main()
{
    printf("%d",sizeof(*arr));
    int i=0;
    while(arr[i]!="\0"){
        printf("%d",i);
        i++;
    }

    // access element in any array
    printf("%d ", arr[5]);
    for (int i = 0; i < 11; i++)
    {
        //  Name of an array returns location of 1st element of that perticular array
        // printf("index is: %d and value is: %d \n", i, arr);
        // when we add star in beginning of array name it return 1st element's value of that perticular array
        // printf("index is: %d and value is: %d \n", i, *arr);
        // when we add +1 in any array location and add * it will return next element value same as arr[index]
        // printf("index is: %d and value is: %d \n", i, *(arr+i));


        // In this method it is easy to find duplicate value but it shows one value multiple time
        for (int j = i + 1; j < 11; j++)
        {
            if (arr[i] == arr[j])
            {
                count += 1;
            }
        }
        printf("%d repeated %d times \n", arr[i], count);
        count = 0;
    }
    return 0;
}