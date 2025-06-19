#include<bits\stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3, 4}};

    cout << p.first << " "; // << p.second.second << " " << p.second.first;

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

void explainVector() {
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // better option than push_back

    vector<pair<int, int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);  // {100,100,100,100,100}
    vector<int> v2(5);      // {0,0,0,0,0}
    vector<int> v3(v2);     // copies v2 into v3

    vector<int>::iterator it = v.begin();   // it = 0 (index val)
    it++;                                   // increases index val by 1
    cout << *(it) << " ";                   // returns val at index from address resolution

    vector<int>::iterator it = v.end();   // "it" points to the index right after the last index i.e., (last_index + 1)

    // traversing the vector
    cout << v[0] << " " << v.at(0);  // both return element at index 0
    cout << v.back() << " ";         // returns last element 

    v.pop_back();                     // removes last element
    v.clear();                       // clears the vector
    cout << v.empty();               // returns true if vector is empty, else false

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";   // prints all elements in the vector
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";   // prints all elements in the vector
    }

    for (auto it : v) {
        cout << it << " ";      // prints all elements in the vector
    }

    // erasing elements
    v.erase(v.begin() + 1);                 // erases element at index 1   
    v.erase(v.begin() + 1, v.begin() + 3);  // erases elements from index 1 to index 2 [start inclusive, end exclusive)

    // inserting elements
    v.insert(v.begin() + 1, 100);           // inserts 100 at index 1
    v.insert(v.begin() + 1, 3, 100);         // inserts 3 times 100 at index 1  
    v.insert(v.begin() + 1, {1, 2, 3});      // inserts {1, 2, 3} at index 1
    v.insert(v.begin() + 1, v2.begin(), v2.end()); // inserts all elements of v2 at index 1

    vector<int> copy(2,50); // {50, 50}
    v.insert(v.begin() + 1, copy.begin(), copy.end()); // inserts all elements of copy at index 1

    // swapping vectors
    vector<int> v4 = {1, 2, 3};
    vector<int> v5 = {4, 5, 6};
    v4.swap(v5); // swaps the contents of v4 and v5
}

void explainList() {
    list<int> l;

    l.push_back(1);    // {1}
    l.emplace_back(2); // {1, 2}
    l.push_front(3);   // {3, 1, 2}
    l.emplace_front(4); // {4, 3, 1, 2}

    cout << l.front() << " " << l.back(); // prints first and last element

    l.pop_back();  // removes last element, now list is {4, 3, 1}
    l.pop_front(); // removes first element, now list is {3, 1}

    cout << l.empty(); // returns true if list is empty, else false

    for (auto it : l) {
        cout << it << " "; // prints all elements in the list
    }

    // inserting elements
    l.insert(l.begin(), 100); // inserts 100 at the beginning

    // rest same as vector
    // begin, end, rbegin, rend, size, swap, clear, insert, erase, emplace, emplace_back, push_back, pop_back
}

void explainDeque() {
    deque<int> d; // double-ended queue

    d.push_back(1);  // {1}
    d.emplace_back(2); // {1, 2}
    d.push_front(2);  // {2, 1, 2}
    d.emplace_front(3); // {3, 2, 1, 2}

    cout << d[0] << " " << d.at(0) << " " << d.front() << " " << d.back();

    d.pop_back();
    d.pop_front();

    //rest functions same as vector
    // begin, end, rbegin, rend, size, swap, clear, insert
}

void explainStack() {
    stack<int> s;  // stack is a LIFO (Last In First Out) data structure

    s.push(1); // {1}
    s.emplace(2); // {1, 2}

    cout << s.top(); // returns top element (2)

    s.pop(); // removes top element, now stack is {1}

    cout << s.size(); // returns size of stack (1)

    cout << s.empty(); // returns 1 if stack is empty, else 0

    stack<int> s2;
    s2.push(3); // {3}
    s2.push(4); // {3, 4}
    
    s.swap(s2); // swaps the contents of s and s2, now s is {3, 4} and s2 is {1}

    // stack does not support iterators, so we cannot traverse it like vector or list
    // we can only access the top element using top() and remove it using pop()
}

void explainQueue() {
    queue<int> q; // queue is a FIFO (First In First Out) data structure

    q.push(1); // {1}
    q.emplace(2); // {1, 2}

    q.back() += 5; // modifies the last element, now queue is {1, 7}

    cout << q.front() << " " << q.back(); // returns first and last element (1 and 2)

    q.pop(); // removes first element, now queue is {2}

    // swap, size, empty, clear  same as stack
    // queue does not support iterators, so we cannot traverse it like vector or list
}

void explainPriorityQueue() {
    priority_queue<int> pq; // the largest element stays at the top (max heap by default)

    pq.push(1); // {1}
    pq.emplace(2); // {2, 1}
    pq.push(8); // {8, 2, 1}
    pq.push(3); // {8, 3, 1, 2}

    cout << pq.top(); // returns top element (8)

    pq.pop(); // removes top element, now pq is {3, 2, 1}

    // size, empty, swap same as others

    //for minimum element, we can use a custom comparator
    priority_queue<int, vector<int>, greater<int>> minHeap; // min heap
    minHeap.push(1); // {1}
    minHeap.emplace(2); // {1, 2}
    minHeap.push(3); // {1, 2, 3}
    minHeap.push(0); // {0, 1, 2, 3}

    cout << minHeap.top(); // returns top element (0)
}



/*
    time complexity of operations:
        => vector: push_back O(1), pop_back O(1), insert O(n), erase O(n), access O(1)
        => list: push_back O(1), pop_back O(1), insert O(1), erase O(1), access O(n)
        => deque: push_back O(1), pop_back O(1), push_front O(1), pop_front O(1), insert O(n), erase O(n), access O(1)
        => stack: push O(1), pop O(1), top O(1), empty O(1), size O(1)
        => queue: push O(1), pop O(1), front O(1), back O(1), empty O(1), size O(1)
        => priority_queue: push O(log n), pop O(log n), top O(1), empty O(1), size O(1)
*/

int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    return 0;
}