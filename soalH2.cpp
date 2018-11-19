#include <iostream>
#include <string>
#include <sstream>
using namespace std; 
int main()
{
	long long int odd = 0,even = 0;
  	std::string input;
  	std::getline(std::cin, input);
 	
  	while (input.length() > 0) {
  		int indexStart = input.length() - 17;
  		if (indexStart < 0) indexStart = 0;
 
  		std::stringstream partstream;
  		std::string part = input.substr(indexStart);
  		partstream.str(part);
 
  		unsigned long long number;
  		partstream >> number;
 
		if (number > 0) {
			for (int i = part.length() - 1; i >= 0; --i) {
				if (part[i] != '0') {
					if ((part[i] - '0') % 2) {
					std::cout << "odd" << std::endl;
					} else {
					std::cout << "even" << std::endl;
					}
					break;
				}
			}
			break;
		}
	 
	  	//std::cout << number << std::endl;
	 
	  	//std::cout << input << " " << part << std::endl;
	 
	  	if (indexStart > 0) 
		{
	  		input = input.substr(0, indexStart);
	  	} 
		else 
		{
	  		input = "";
	  	}
	 
	  	//std::cout << "after: " << input << std::endl;
	}
	std::cout << odd << " "<< even<< std::endl;
}
