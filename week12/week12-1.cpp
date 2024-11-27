///week12-1.cpp 資料結構的 struck  vs class
#include <iostream>
#include <string>
using namespace std;

///struck Node{};///都有分號結尾 C語言的結構
///class Cat{};
struct Node{
    int val;

};
class Cat{
public:
    string name;
};
int main(){
    Cat cat1;
    cat1.name = "cattie";
    Node node;
    node.val = 1;
}
