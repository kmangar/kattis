#include <stdio.h>
#include <iostream> 

using namespace std;
int main()
{
    int x;
    int j = 0;
    std::cin >> x;
    int temp[100];
    
    for (int i = 0; i < x; i++) {
        std::cin >> temp[i];
        
        if(temp[i]<0){
            j++;
        }//
    }//
    std::cout << j << std::endl;
}
