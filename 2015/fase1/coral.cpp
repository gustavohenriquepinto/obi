#include <iostream>
using namespace std;

int main(){
  int x[4];
  cin >> x[0];
  cin >> x[1];
  cin >> x[2];
  cin >> x[3];

  if(x[0]==x[2]||x[1]==x[3])
    cout << 'V'<<endl;
  else
    cout << 'F'<<endl;
  
  return 0;
}
