#include <iostream>
#include <stack>
using namespace std;

void deleteMid(stack<int>& st, int current, int mid) {
    if (st.empty() || current == mid) {
        st.pop(); // Hapus elemen tengah
        return;
    }

    int topElement = st.top();
    st.pop();
    deleteMid(st, current + 1, mid);
    st.push(topElement); // Kembalikan elemen setelah rekursi selesai
}

void deleteMid(stack<int>& st) {
    int mid = st.size() / 2;
    deleteMid(st, 0, mid);
}

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    deleteMid(st);

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
