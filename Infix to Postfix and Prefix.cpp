#include<bits/stdc++.h>

using namespace std;

bool isOperator(char c) 
{ 
    return (!isalpha(c) && !isdigit(c)); 
} 
  
int getPriority(char C) 
{ 
    if (C == '-' || C == '+') 
        return 1; 
    else if (C == '*' || C == '/') 
        return 2; 
    else if (C == '^') 
        return 3; 
    return 0; 
} 
  
string infixToPostfix(string infix) 
{ 
    infix = '(' + infix + ')'; 
    int l = infix.size(); 
    stack<char> char_stack; 
    string output; 
  
    for (int i = 0; i < l; i++) { 
  
        // If the scanned character is an  
        // operand, add it to output. 
        if (isalpha(infix[i]) || isdigit(infix[i])) 
            output += infix[i]; 
  
        // If the scanned character is an 
        // ‘(‘, push it to the stack. 
        else if (infix[i] == '(') 
            char_stack.push('('); 
  
        // If the scanned character is an 
        // ‘)’, pop and output from the stack  
        // until an ‘(‘ is encountered. 
        else if (infix[i] == ')') { 
  
            while (char_stack.top() != '(') { 
                output += char_stack.top(); 
                char_stack.pop(); 
            } 
  
            // Remove '(' from the stack 
            char_stack.pop();  
        } 
  
        // Operator found  
        else { 
              
            if (isOperator(char_stack.top())) { 
                while (getPriority(infix[i]) 
                   <= getPriority(char_stack.top())) { 
                    output += char_stack.top(); 
                    char_stack.pop(); 
                } 
  
                // Push current Operator on stack 
                char_stack.push(infix[i]); 
            } 
        } 
    } 
    return output; 
} 
  
string infixToPrefix(string infix) 
{ 
    int l = infix.size(); //String Length
  
    
    reverse(infix.begin(), infix.end()); //Reverse infix 
  
    // Replace ( with ) and vice versa 
    for (int i = 0; i < l; i++) { 
  
        if (infix[i] == '(') { 
            infix[i] = ')'; 
            i++; 
        } 
        else if (infix[i] == ')') { 
            infix[i] = '('; 
            i++; 
        } 
    } 
  
    string prefix = infixToPostfix(infix); 
  
   
    reverse(prefix.begin(), prefix.end());  // Reverse postfix 
  
    return prefix; 
}

int main()
{
	char c;
	string ax;
	do
	{
		system("cls");
		printf("Menu\n1. Infix to Postfix\n2. Infix to Prefix\n0. Exit\nChoose: ");
		cin >> c;
		printf("\n");
		switch(c)
		{
			case '1':
				printf("Insert Math Function (Infix to Postfix): ");
				cin >> ax;
				cout << "Result: "<< infixToPostfix(ax)<<endl;
				getchar();
				break;
			case '2':
				printf("Insert Math Function (Infix to Prefix): ");
				cin >> ax;
				cout << "Result: "<<infixToPrefix(ax)<<endl;
				getchar();
				break;
		}
		getchar();
	}while(c!='0');
	return 0;
}
