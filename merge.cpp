#include <iostream>

using namespace std;

int main()
{
    int arr[] = {451,372,258,124,51,21,87} ;
    int x =  (sizeof(arr)/sizeof(*arr)) ;
    for(int k = 0; k <= x-2; k++)
    {
        
        for (int j = 0; j <= x-2; j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp;
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout <<  "done first sort" << endl;
    // for (int i = 0; i <= x-1; i++)
    // {
    //     std::cout << arr[i] << ", ";
    // }
    int arr1[] ={988,876,76,8768,433,543,6};
    int x1 =  (sizeof(arr1)/sizeof(*arr1)) ;
    for(int k = 0; k <= x1-2; k++)
    {
        
        for (int j = 0; j <= x1-2; j++)
        {
            if(arr1[j+1] < arr1[j])
            {
                int temp;
                temp = arr1[j+1];
                arr1[j+1] = arr1[j];
                arr1[j] = temp;
            }
        }
    }

    std::cout <<  "done second sort" << endl;
    // for (int i = 0; i <= x-1; i++)
    // {
    //     std::cout << arr[i] << ", ";
    // }
    int p = x+x1;
    int arr2[p];
    int y=0;
    int z=0;
    int w=0;
    while(arr[y])
    {
    	arr2[z] = arr[y];
    	z++;
    	y++;
    }

    std::cout <<  "add first array" << endl;
    while(arr1[w])
    {
    	arr2[z] = arr1[w];
    	z++;
    	w++;
    }

    std::cout <<  "add second array" << endl;
    int x2 =  (sizeof(arr2)/sizeof(*arr2)) ;
    for (int i = 0; i <= x2-1; i++)
    {
        std::cout << arr2[i] << ", ";
    }
}