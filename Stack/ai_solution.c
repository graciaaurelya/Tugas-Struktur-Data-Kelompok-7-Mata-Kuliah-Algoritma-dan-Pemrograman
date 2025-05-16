#include <iostream>
#include <stack>
using namespace std;

void deleteMid(stack<int>& st)
{
    int n = st.size();
    stack<int> tempSt;
    int count = 0;

    while (count < n / 2) {
        int c = st.top();
        st.pop();
        tempSt.push(c);
        count++;
    }

    st.pop();

    while (!tempSt.empty()) {
        st.push(tempSt.top());
        tempSt.pop();
    }
}

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    deleteMid(st);

    while (!st.empty()) {
        int p = st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
