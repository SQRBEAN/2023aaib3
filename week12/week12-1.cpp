///week12-1.cpp ��Ƶ��c�� struck  vs class
#include <iostream>
#include <string>
using namespace std;

///struck Node{};///������������ C�y�������c
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
