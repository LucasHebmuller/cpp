#include <iostream>
#include <stack>
#include <cctype>
#include <string>
using namespace std;


int main()
{
    char answer;

    do {
        stack<int> myStack;
        string expression;
        string newexpression;


        cout << "Please enter the postfix expression (RPN) to be evaluated:";
        getline(cin, expression);

        for (char i : expression)
        {
            if ( i != ' ' && i != ':' )
                newexpression += i;
        }
        /* Could use this instead:
         *for ( int i = 0; i < expression.length(); i ++ )
          {
            if ( expression[i] != ' ' && expression[i] != ':' )
                newexpression += expression[i];
          }
         */


        for ( int i = 0; i < newexpression.length(); i++ )
        {
            char element = newexpression[i];

            if (isdigit(element))
            {
                cout << "Token = " << element << " Push " << element << endl;
                myStack.push(element - '0');
            }

            else
            {
                int test = myStack.top();
                myStack.pop();
                if ( myStack.empty() )
                {
                    cout << "Invalid  postfix  expression!  -  less  than  2  entries  in  stack  for arithmetic operation" << endl;
                    break;
                }
                myStack.push(test);


                if ( element == '+' )
                {
                    cout << "Token = " << element;

                    int a = myStack.top();
                    cout << " Pop " << a;
                    myStack.pop();

                    int b = myStack.top();
                    cout << " Pop " << b;
                    myStack.pop();

                    cout << " Push " << b + a << endl;
                    myStack.push(b + a);
                }

                else if ( element == '-' )
                {
                    cout << "Token = " << element;

                    int a = myStack.top();
                    cout << " Pop " << a;
                    myStack.pop();

                    int b = myStack.top();
                    cout << " Pop " << b;
                    myStack.pop();

                    myStack.push(b - a);
                    cout << " Push " << b - a << endl;
                }

                else if ( element == '*' )
                {
                    cout << "Token = " << element;

                    int a = myStack.top();
                    cout << " Pop " << a;
                    myStack.pop();

                    int b = myStack.top();
                    cout << " Pop " << b;
                    myStack.pop();

                    myStack.push(b * a);
                    cout << " Push " << b * a << endl;
                }

                else if ( element == '/' )
                {
                    cout << "Token = " << element;

                    int a = myStack.top();
                    cout << " Pop " << a;
                    myStack.pop();

                    int b = myStack.top();
                    cout << " Pop " << b;
                    myStack.pop();

                    myStack.push(b / a);
                    cout << " Push " << b / a << endl;
                }

                else
                {
                    cout << "Invalid postfix expression - invalid character -> " << element << endl;
                    break;
                }
            }

            if ( i == newexpression.length() - 1)
            {
                cout << "Token = Pop " << myStack.top();
                myStack.pop();
                cout << endl;
            }
        }

        cout << endl;

        cout << "Type 'Y' or 'y' to continue or type any other letter to quit:";
        cin >> answer;
        cin.ignore();
        cin.get();

    } while ( answer == 'Y' || answer == 'y' );



    return 0;
}


/*
 * EXECUTION SAMPLE:
 * Please enter the postfix expression (RPN) to be evaluated:2 4 * 9 5 + -
 * Token = 2 Push 2
 * Token = 4 Push 4
 * Token = * Pop 4 Pop 2 Push 8
 * Token = 9 Push 9
 * Token = 5 Push 5
 * Token = + Pop 5 Pop 9 Push 14
 * Token = - Pop 14 Pop 8 Push -6
 * Token = Pop -6
 *
 * Type 'Y' or 'y' to continue or type any other letter to quit:Y
 * Please enter the postfix expression (RPN) to be evaluated:2 4 # :
 * Token = 2 Push 2
 * Token = 4 Push 4
 * Invalid postfix expression - invalid character -> #
 *
 * Type 'Y' or 'y' to continue or type any other letter to quit:y
 * Please enter the postfix expression (RPN) to be evaluated:7 4 - - :
 * Token = 7 Push 7
 * Token = 4 Push 4
 * Token = - Pop 4 Pop 7 Push 3
 * Invalid  postfix  expression!  -  less  than  2  entries  in  stack  for arithmetic operation
 *
 * Type 'Y' or 'y' to continue or type any other letter to quit:q
 *
 * Process finished with exit code 0
 */