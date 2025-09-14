//Q1
// #include <iostream>
// using namespace std;

// int myStack[100]; 
// int top = -1;   


// void push(int value) {
//     if (top == 99) {
//         cout << "Stack is full! (Overflow)\n";
//     } else {
//         top++;
//         myStack[top] = value;
//         cout << value << " pushed into myStack.\n";
//     }
// }


// void pop() {
//     if (top == -1) {
//         cout << "Stack is empty! (Underflow)\n";
//     } else {
//         cout << "Popped element: " << myStack[top] << endl;
//         top--;
//     }
// }


// void peek() {
//     if (top == -1) {
//         cout << "Stack is empty. Nothing to peek.\n";
//     } else {
//         cout << "Top element is: " << myStack[top] << endl;
//     }
// }


// void isEmpty() {
//     if (top == -1) {
//         cout << "Stack is empty.\n";
//     } else {
//         cout << "Stack is not empty.\n";
//     }
// }


// void isFull() {
//     if (top == 99) {
//         cout << "Stack is full.\n";
//     } else {
//         cout << "Stack is not full.\n";
//     }
// }


// void display() {
//     if (top == -1) {
//         cout << "Stack is empty.\n";
//     } else {
//         cout << "Stack elements (top to bottom): ";
//         for (int i = top; i >= 0; i--) {
//             cout << myStack[i] << " ";
//         }
//         cout << endl;
//     }
// }


// int main() {
//     int choice, value;

//     do {
//         cout << "Stack Menu";
//         cout << "1. Push\n";
//         cout << "2. Pop\n";
//         cout << "3. Peek (Top Element)\n";
//         cout << "4. Is Empty?\n";
//         cout << "5. Is Full?\n";
//         cout << "6. Display Stack\n";
//         cout << "7. Exit\n";
//         cout << "Enter your choice (1-7): ";
//         cin >> choice;

//         switch (choice) {
//             case 1:
//                 cout << "Enter value to push: ";
//                 cin >> value;
//                 push(value);
//                 break;

//             case 2:
//                 pop();
//                 break;

//             case 3:
//                 peek();
//                 break;

//             case 4:
//                 isEmpty();
//                 break;

//             case 5:
//                 isFull();
//                 break;

//             case 6:
//                 display();
//                 break;

//             case 7:
//                 cout << "Exiting program. Goodbye!\n";
//                 break;

//             default:
//                 cout << "Invalid choice. Please try again.\n";
//         }
//     } while (choice != 7);

//     return 0;
// }









//Q2
// #include <iostream>
// #include <cstring> 
// using namespace std;



// char mystack[100];
// int top = -1;


// void push(char ch) {
//     if (top == 99) {
//         cout << "Stack Overflow!\n";
//     } else {
//         mystack[++top] = ch;
//     }
// }

// char pop() {
//     if (top == -1) {
//         cout << "Stack Underflow!\n";
//         return '\0';
//     } else {
//         return mystack[top--];
//     }
// }

// int main() {
//     char str[100];

//     cout << "Enter a string: ";
//     cin.getline(str, 100);  

  
//     for (int i = 0; i < strlen(str); i++) {
//         push(str[i]);
//     }

    
//     for (int i = 0; i < strlen(str); i++) {
//         str[i] = pop();
//     }

//     cout << "Reversed string: " << str << endl;

//     return 0;
// }






//Q3
// #include <iostream>
// #include <stack>
// using namespace std;

// bool isBalanced(string expr) {
//     stack<char> s;

//     for (char ch : expr) {
//         if (ch == '(' || ch == '{' || ch == '[') {
//             s.push(ch);
//         } else if (ch == ')' || ch == '}' || ch == ']') {
//             if (s.empty()) return false;

//             char top = s.top();
//             s.pop();

//             if ((ch == ')' && top != '(') ||
//                 (ch == '}' && top != '{') ||
//                 (ch == ']' && top != '[')) {
//                 return false;
//             }
//         }
//     }

//     return s.empty();
// }

// int main() {
//     string expression;
//     cout << "Enter an expression: ";
//     cin >> expression;

//     if (isBalanced(expression))
//         cout << "Balanced\n";
//     else
//         cout << "Not Balanced\n";

//     return 0;
// }







//Q4
// #include <iostream>
// #include <stack>
// #include <cctype>
// using namespace std;

// int precedence(char op) {
//     if (op == '^')
//         return 3;
//     else if (op == '*' || op == '/')
//         return 2;
//     else if (op == '+' || op == '-')
//         return 1;
//     else
//         return 0;
// }

// bool isRightAssociative(char op) {
//     return op == '^';
// }

// string infixToPostfix(string infix) {
//     stack<char> s;
//     string postfix = "";

//     for (char ch : infix) {
//         if (isalnum(ch)) {
//             postfix += ch;
//         }
//         else if (ch == '(') {
//             s.push(ch);
//         }
//         else if (ch == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             if (!s.empty() && s.top() == '(')
//                 s.pop();
//         }
//         else {
//             while (!s.empty() && (
//                     precedence(s.top()) > precedence(ch) ||
//                     (precedence(s.top()) == precedence(ch) && !isRightAssociative(ch))
//                    ) && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(ch);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }

//     return postfix;
// }

// int main() {
//     string infix;
//     cout << "Enter an infix expression: ";
//     cin >> infix;

//     string postfix = infixToPostfix(infix);
//     cout << "Postfix expression: " << postfix << endl;

//     return 0;
// }






//Q5
// #include <iostream>
// #include <stack>
// using namespace std;

// int main() {
//     string postfix;
//     stack<int> s;

//     cout << "Enter a postfix expression : ";
//     cin >> postfix;

//     for (int i = 0; i < postfix.length(); i++) {
//         char ch = postfix[i];

//         if (isdigit(ch)) {
//             s.push(ch - '0');
//         }
//         else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
//             int num2 = s.top(); s.pop();
//             int num1 = s.top(); s.pop();
//             int result;

//             if (ch == '+')
//                 result = num1 + num2;
//             else if (ch == '-')
//                 result = num1 - num2;
//             else if (ch == '*')
//                 result = num1 * num2;
//             else if (ch == '/')
//                 result = num1 / num2;

//             s.push(result);
//         }
//     }

//     cout << "Result: " << s.top() << endl;

//     return 0;
// }