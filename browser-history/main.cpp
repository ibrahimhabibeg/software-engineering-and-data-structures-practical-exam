#include <iostream>
#include <string>
#include <vector>

using namespace std;


template <typename T>
class Stack {
private:
  vector<T> elements;

public:
  void push(T element) {
    elements.push_back(element);
  }

  void pop() {
    if (!elements.empty()) {
      elements.pop_back();
    }
  }

  T top() {
    if (!elements.empty()) {
      return elements.back();
    }
    return "";
  }

  bool isEmpty() {
    return elements.empty();
  }

  int size() {
    return elements.size();
  }

  void clear() {
    elements.clear();
  }
};

class BrowserHistory {
private:
  Stack<string> backStack;
  Stack<string> forwardStack;
  string currentUrl;

public:
  BrowserHistory() {
    currentUrl = "";
  }

  void visit(string url) {
    if (!currentUrl.empty()) {
      backStack.push(currentUrl);
    }
    currentUrl = url;
    forwardStack.clear();
  }

  bool canBack() {
    return !backStack.isEmpty();
  }

  void back() {
    if (!backStack.isEmpty()) {
      forwardStack.push(currentUrl);
      currentUrl = backStack.top();
      backStack.pop();
    }
  }

  bool canForward() {
    return !forwardStack.isEmpty();
  }

  void forward() {
    if (!forwardStack.isEmpty()) {
      backStack.push(currentUrl);
      currentUrl = forwardStack.top();
      forwardStack.pop();
    }
  }

  string getCurrentUrl() const {
    return currentUrl;
  }
};

int main() {
  BrowserHistory browserHistory;
  string command;
  string url;

  while (true) {
    cout << "Current URL: " << browserHistory.getCurrentUrl() << endl;
    cout << "Enter a command (visit, back, forward, quit): ";
    cin >> command;

    if (command == "visit") {
      cout << "Enter URL: ";
      cin >> url;
      browserHistory.visit(url);
      cout << "Visited: " << browserHistory.getCurrentUrl() << endl;
    } else if (command == "back") {
      if (browserHistory.canBack()) {
        browserHistory.back();
        cout << "After going back, Current URL: " << browserHistory.getCurrentUrl() << endl;
      } else {
        cout << "No more history to go back." << endl;
      }
    } else if (command == "forward") {
      if (browserHistory.canForward()) {
        browserHistory.forward();
        cout << "After going forward, Current URL: " << browserHistory.getCurrentUrl() << endl;
      } else {
        cout << "No more history to go forward." << endl;
      }
    } else if (command == "quit") {
      break;
    } else {
      cout << "Invalid command." << endl;
    }

    cout << endl;
  }

  return 0;
}