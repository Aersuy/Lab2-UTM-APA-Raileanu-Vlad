#pragma once
#include <iostream>
#include "function.h"

void merge(std::vector<double>& array, int begin, int mid, int end)
{   int num1,num2;
       num1 = mid - begin + 1;
       num2 = end - mid;

       std::vector<double> vector1(num1),vector2(num2);

       for (int iterator = 0; iterator < num1; iterator++)
       {
        vector1[iterator] = array[begin + iterator];
       }
       for (int iterator = 0; iterator < num2; iterator++)
       {
               vector2[iterator] = array[mid + 1+ iterator];
       }

       int iterator1 = 0;
       int iterator2 = 0;
       int iterator3 = begin;
       while (iterator1 < num1 && iterator2 < num2)
       {
        if (vector1[iterator1] <= vector2[iterator2])
        {
            array[iterator3] = vector1[iterator1];
            iterator1++;
        }
          else
          {
            array[iterator3] = vector2[iterator2];
            iterator2++;
          }
          iterator3++;
                 }
       while (iterator1 < num1)
       {
        array[iterator3] = vector1[iterator1];
        iterator1++;
        iterator3++;
       }
       while (iterator2 < num2)
       {
        array[iterator3] = vector2[iterator2];
        iterator2++;
        iterator3++;
       }

}


void mergeSort(std::vector<double>& array,int begin,int end)
{
    if (begin >= end)
    {
        return;
    }
    int mid = begin + (end - begin)/2;
    mergeSort(array,begin,mid);
    mergeSort(array,mid+1,end);
    merge(array,begin,mid,end);
}

void printVector( std::vector<double>& v)
{
    int max = v.size();

    for (int iterator1 = 0; iterator1 < max; iterator1++)
    {
      std::cout << v[iterator1] << "  ";
    }
    std::cout << "\n";
    
}



int partition(std::vector<double>& array, int begin, int end)
{
    double pivot = array[end]; 
    int iterator1 = begin - 1;   

    for (int iterator2 = begin; iterator2 <= end - 1; iterator2++)
    {
        if (array[iterator2] < pivot)
        {
            iterator1++; 
            std::swap(array[iterator1], array[iterator2]);
        }
    }

    std::swap(array[iterator1 + 1], array[end]); 
    return iterator1 + 1;
}
void quickSort(std::vector<double>& arr,int begin,int end)
{
  if (begin < end)
  {
      int part = partition(arr,begin,end);
      quickSort(arr,part + 1,end);
      quickSort(arr,begin,part - 1);
  }
  
}