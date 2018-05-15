/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int myArray [] = {451,372,258,124,51,21,87,988,876,76,8768,433,543,6} ;
    //myArray[1] = 
    int x =  (sizeof(myArray)/sizeof(*myArray)) ;
    for (int i = 0; i <= x-1; i++)
    {
        std::cout << myArray[i] << ", ";
        //cout << myArray[0] << endl;
    }

    // int value;
    // std::cout << "What value you want to delete :" << std::endl;
    // std::cin >> value;
    // int j = 0;
    // while(myArray[j] != value)
    // {
    //     j++;    
    //     if(j == x)
    //     {
    //         std::cout << "no such value exists" << endl;
    //         return false;
    //     }
    // }
    // while(j != x)
    // {
    //     myArray[j] = myArray[j+1];
    //     j++;
    // }
    // //length-- ;
    // std::cout << "The desired value is deleted" << endl;

    // for (int i = 0; i <= x-1; i++)
    // {
    //     std::cout << myArray[i] << ", ";
    //     //cout << myArray[0] << endl;
    // }
    
    /*myArray [5] = {861};
    cout << myArray[5] << endl;*/
    
    x is the size or length of array
    
    cout << endl << "size of array is " << x << endl;
    cout << "this is sorting of array" << endl ;
    
    for(int k = 0; k <= x-2; k++)
    {
        
        for (int j = 0; j <= x-2; j++)
        {
            if(myArray[j+1] < myArray[j])
            {
                int temp;
                temp = myArray[j+1];
                myArray[j+1] = myArray[j];
                myArray[j] = temp;
            }
        }
    }
    for (int i = 0; i <= x-1; i++)
    {
        std::cout << myArray[i] << ", ";
        //cout << myArray[0] << endl;
    }
    
    
    //find the location of the largest element
    int  value = myArray[0];
    int loc = 0;
    for (int a = 0; a <= x-1; a++)
    {
        if (myArray[a]>value)
        {
            loc = a;
            value = myArray[a];
            
        }
    }
    cout << endl <<"Largest value is " << value << " at location " << loc;
    
    
}
    




