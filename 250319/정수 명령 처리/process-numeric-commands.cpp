#include <iostream>
using namespace std;

class MyStack{
    private:
    int* arr;
    int N;

    public:
    MyStack(){
        arr = new int[10000];
        N=0;
    }

    void empty(){
        if(N==0)
            cout << "1\n";
        else cout << "0\n";
    }

    void top(){
        if(N==0)
            return;
        
        cout << arr[N-1] << '\n';
    }

    void size(){
        cout << N << '\n';
    }

    void push(int val){
        arr[N] = val;
        N++;
    }

    void pop(){
        if(N==0)
            return;
        cout << arr[N-1] << '\n';
        N--;
    }
};

int main(){
    int N;
    cin >> N;
    
    MyStack stack;
    while(N--){
        string order;
        cin >> order;
        if(order == "push"){
            int n;
            cin >> n;
            stack.push(n);
        }
        else if(order == "pop")
            stack.pop();
        else if(order == "size")
            stack.size();
        else if(order == "empty")
        stack.empty();
        else if(order == "top")
        stack.top();
    }
}