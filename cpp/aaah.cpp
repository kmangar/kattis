#include <cstring>
#include <iostream> 

using namespace std;
int main()
{
    const int max = 999;
    char str[max];
    string aaah = "aaah";
	
	cin.get(str, max);
	
	if(strlen(str) > 4){
	    std::cout << "go" << std::endl;
	}
	else{
	    std::cout << "no" << std::endl;
	}
    
    
}
