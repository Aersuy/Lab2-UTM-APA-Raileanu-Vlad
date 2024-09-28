#include "function.cpp"



int main()
{
     std::vector<double> vect{43,23,56,12,7,101};
     printVector(vect);
     mergeSort(vect,0,vect.size()-1);
     printVector(vect);
     
     std::vector<double> vect2{15,7,16,43,23,12};
     printVector(vect2);
     quickSort(vect2,0,vect2.size()-1);
     printVector(vect2);
    return 0;
}