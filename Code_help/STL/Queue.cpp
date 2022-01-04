#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("Gurpreet");
    q.push("Sarangal");
    q.push("BCA");

    cout<<"Size before pop: "<<q.size()<<endl;
    cout<<"First Element -> "<<q.front()<<endl;
    q.pop();
    cout<<"First Element -> "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;

    return 0;
}