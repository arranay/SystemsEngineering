#include <iostream>
#include <fstream>

using namespace std;

bool simple(int a)
{
    for(int i=2; i<=a/2; ++i)
        if(a%i==0)
        return false;
        
    return true;
}

int main() 
{
	int x; 
	cout << "Type a number: ";
	cin >> x;

	ofstream fileStream;
    fileStream.open("result.txt");
    
    cout << "Result: ";
    
	for(int i=2; i <= x; i++)
	{
		if(simple(i)) {
			cout << i << " ";	
			fileStream << i << " ";	
		}
	}
	
	fileStream.close();
}
