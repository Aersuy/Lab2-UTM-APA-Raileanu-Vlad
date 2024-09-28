#include "function.cpp"



int main()
{
     std::vector<double> vect{43,23,56,12,7,101};
     printVector(vect);
     mergeSort(vect,0,vect.size()-1);
     printVector(vect);

    return 0;
}