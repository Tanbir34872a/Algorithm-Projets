#include <iostream>
#include <queue>

using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    cout << "The queue is : ";
    showq(gquiz);

    cout<<"Size of queue: "<<gquiz.size()<<endl;
    cout<<"First element: "<<gquiz.front()<<endl;
    cout<<"Last element: "<<gquiz.back()<<endl;

    gquiz.pop();

    cout << "The queue is : ";
    showq(gquiz);

    return 0;
}
