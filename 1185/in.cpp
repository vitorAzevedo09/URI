#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {

  char o;
  double number;
  double res;
  int count;
  count = 0;
  cin >> o;
  for (int i = 0; i < 12; i++) {
    for (int j = 0; j < 12; j++) {
      cin >> number;
      if (i + j < 11) {
          res += number;
          count+=1;
    }
  }
}if (o == 'S') {
      std::cout << res << '\n';
}else{
    std::cout << res/count << '\n';
}

  return 0;
}
