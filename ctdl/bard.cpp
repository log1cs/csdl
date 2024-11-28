#include <iostream>
#include <stack>

using namespace std;

// hàm trả về độ ưu tiên của một toán tử
int precedence(char c) {
  if (c == '+' || c == '-') {
    return 1;
  }
  if (c == '*' || c == '/') {
    return 2;
  }
  return 0;
}

// hàm kiểm tra xem một ký tự có phải là toán tử hay không
bool isoperator(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/') {
    return true;
  }
  return false;
}

// hàm chuyển biểu thức trung tố thành hậu tố
string infixToPostfix(string infix) {
  stack<char> stack;
  string postfix;

  // duyệt từng ký tự của biểu thức trung tố
  for (int i = 0; i < infix.length(); i++) {
    // nếu ký tự là chữ số, thì thêm nó vào hậu tố
    if (isdigit(infix[i])) {
      postfix += infix[i];
    }
    // nếu ký tự là toán tử, thì
    else if (isoperator(infix[i])) {
      // trong khi đỉnh ngăn xếp là một toán tử có độ ưu tiên cao hơn hoặc bằng toán tử hiện tại,
      // thì thêm toán tử ở đỉnh ngăn xếp vào hậu tố và xóa nó khỏi ngăn xếp
      while (!stack.empty() && isoperator(stack.top()) && precedence(infix[i]) <= precedence(stack.top())) {
        postfix += stack.top();
        stack.pop();
      }
      // đẩy toán tử hiện tại vào ngăn xếp
      stack.push(infix[i]);
    }
  }

  // trong khi ngăn xếp không rỗng,
  // thì thêm toán tử ở đỉnh ngăn xếp vào hậu tố và xóa nó khỏi ngăn xếp
  while (!stack.empty()) {
    postfix += stack.top();
    stack.pop();
  }

  // trả về hậu tố
  return postfix;
}

int main() {
  // nhập biểu thức trung tố
  string infix;
  cin >> infix;

  // chuyển biểu thức trung tố thành hậu tố
  string postfix = infixToPostfix(infix);

  // in biểu thức hậu tố
  cout << postfix << endl;

  return 0;
}
