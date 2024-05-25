#include <iostream>
#include <string>
using namespace std;
class binary{
     string s;
     public:
        void read(void);
        void check_bin(void);
};

void binary::read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}
void binary::check_bin(void){
  for(int i=0; i<s.length(); i++){
    if(s[i]!='0' && s[i]!='1'){
      cout<<"Invalid binary number"<<endl;
      exit (0);
      
    }
  }
}
      
int main(){
  binary number;
  number.read();
  number.check_bin();
    return 0;
}