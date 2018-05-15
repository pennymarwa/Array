#include "array_ds.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{  
  string command;        // operation to be executed
  array_ds arr;
  // Prompt for file names, read file names, and prepare files
  std::cout << "What operation to be performed? " << std::endl;
  cin >> command;
  while (command != "Quit")
  { 
    //std::cout << command;
    if (command == "PutItem")
    {
	    if (!(arr.IsFull()))
	    {
			int value1;
		    std::cout << "What value you want to add : " << std::endl;
		    std::cin >> value1;
		    string by;
	    	std::cout << "Add in the end or Add by Key";
	    	std::cin >> by;
	    	if (by == "end")
	    	{
			  arr.PutItem(value1);
		  	}
		  	else if(by == "key")
		  	{
		  		int pos;
			  	std::cout << "What key position you vant to add" << endl;
			  	std::cin >> pos;
			  	if(pos < arr.GetLength())
			  		arr.PutItembykey(pos,value1);
			  	else
			  		arr.PutItem(value1);
			  		std::cout << "Added to end " << endl;
		  	}

	    }
	    else
	    {
	    	std::cout << "The Array is already full" << endl ;
	    }
    }
    else if (command == "DeleteItem")
    {
    	string by;
    	std::cout << "Delete by value or Delete by Key";
    	std::cin >> by;
    	if (by == "value")
    	{
	    	int value2;
	      std::cout << "What value you want to delete :" << std::endl;
	      std::cin >> value2;
	      arr.DeleteItem(value2);
	  	}
	  	else if(by == "key")
	  	{
	  		int value3;
	      std::cout << "What key position you want to delete :" << std::endl;
	      std::cin >> value3;
	      arr.DeleteItembykey(value3);
	  	}
    }
    else if (command == "GetItem")
    {
      std::cout << "inside GetItem" << std::endl;
    } 
    else if (command == "GetLength")  
    {
      arr.GetLength();
      std::cout << "Length is " << arr.GetLength() << std::endl;
    } 
    else if (command == "MakeEmpty")
    {
      arr.MakeEmpty();
    }
    else if (command == "PrintList")
    {
    	arr.Display();
    }
    else if (command == "Sort")
    {
    	arr.Sort();
    }
    else if (command == "Reverse")
    {
    	arr.Reverse();
    }
    else std::cout << " Command not recognized." << std::endl; 
    std::cout << "What next operation to be performed? " << std::endl;
    cin >> command;
  };
 
  std::cout << "Quit" << std::endl << "Testing completed."  << std::endl;
  return 0;
};


array_ds::array_ds()
{
	length = 0;
	//std::cout << "hello again";
}
void array_ds::Display()
{
	for (int i = 0; i < length; i++)
    {
        std::cout << info[i] << ", ";
    }
}
void array_ds::Sort()
{
	for(int k = 0; k < length-1; k++)
    {
        
        for (int j = 0; j < length-1; j++)
        {
            if(info[j+1] < info[j])
            {
                int temp;
                temp = info[j+1];
                info[j+1] = info[j];
                info[j] = temp;
            }
        }
    }
    for (int i = 0; i < length; i++)
    {
        std::cout << info[i] << ", ";
    }
}
int array_ds::PutItem(int item)
{
	info[length] = item;
	length ++;
	return 0;
}
int array_ds::PutItembykey(int pos, int item)
{
	int post = length;
	while(post!=pos)
	{
		info[post] = info[post-1];
		post--;
	}
	info[pos] = item;
	length ++;
	return 0;
}
int array_ds::GetLength()
{
	return length;
	std::cout << length ;
}
bool array_ds::IsFull()
{
	if(length == MAX_ITEMS)
		return true;
	else
		return false;
}
void array_ds::MakeEmpty()
{
	length = 0;
}
int array_ds::GetItem(int item)
{
	int i = 0;
	while(info[i] != item)
	{
		i++;	
		if(i == MAX_ITEMS)
		{
			std::cout << "no such value exists " << endl;
			return false;
		}
	}
	std::cout << "The desired value exist at location " << i << endl;
	return i;
}
int array_ds::DeleteItem(int item)
{
	int j = 0;
	while(info[j] != item)
	{
		j++;	
		if(j == MAX_ITEMS)
		{
			std::cout << "no such value exists " << endl;
			return false;
		}
	}
	while(j!=MAX_ITEMS)
	{
		info[j] = info[j+1];
		j++;
	}
	length-- ;
	std::cout << "The desired value is deleted " << endl;
	return true;
}
int array_ds::DeleteItembykey(int item)
{	
	if(item == MAX_ITEMS)
	{
		std::cout << "no such value exists " << endl;
		return false;
	}
	while(item!=MAX_ITEMS)
	{
		info[item] = info[item+1];
		item++;
	}
	length-- ;
	std::cout << "The desired value is deleted " << endl;
	return true;
}
void array_ds::Reverse()
{
	int pos = 0;
	int pos_l = length-1;
	while(pos != pos_l)
	{
		int temp;
		temp = info[pos];
		info[pos] = info[pos_l];
		info[pos_l] = temp;
		pos++;
		pos_l--;
		if(pos_l < pos)
		{
			break;
		}
	}
	for (int i = 0; i < length; i++)
    {
        std::cout << info[i] << ", ";
    }
}

