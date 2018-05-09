#include <iostream>
  using namespace std;

int main() {
  char op;
  string sped;
  float num1, num2;

  cout << "Do you want to use elseif or the switch statement(Much more faster)? ";
  cin >> sped;

  if (sped == "elseif") {

    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    if (num1 == (int) num1 && num2 == (int) num2) {
      if (op == '+') {
        cout << num1 + num2;
      } else if (op == '-') {
        cout << num1 - num2;
      } else if (op == '*') {
        cout << num1 * num2;
      } else if (op == '/') {
        cout << num1 / num2;
      } else {
        cout << "Are you sure you are using the correct operator used for calculating?";
      }
    } else {
      cout << "Are you sure the following numbers were integers?";
    }
  } else if (sped == "switch") {
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    
   if (num1 == (int) num1 && num2 == (int) num2) {
    switch (op) {
    case '+':
      cout << num1 + num2;
      break;

    case '-':
      cout << num1 - num2;
      break;

    case '*':
      cout << num1 * num2;
      break;

    case '/':
      cout << num1 / num2;
      break;

    default:
      cout << "Error! operator is not correct";
      break;
    }
}else{
cout << "Are you sure the following numbers were integers?";
}
  } else {
    cout << "Please either select elseif or switch.";
  }
system("pause");
}
