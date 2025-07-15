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

void explainSet() {
    set<int> s; // set is a collection of unique elements, sorted in ascending order by default

    s.insert(1); // {1}
    s.emplace(2); // {1, 2}
    s.insert(3); // {1, 2, 3}
    s.insert(2); // {1, 2, 3} (duplicate element is not added)

    // functionality of insert in vector is similar to set, but in set, elements are unique and sorted

    // begin(), end(), rbegin(), rend(),
    // size(), swap(), empty(), clear() same as vector

    auto it = s.find(2); // finds the element 2 in the set, returns an iterator to it

    auto it2 = s.find(4); // finds the element 4 in the set, returns an iterator to end() if not found

    if (it2 != s.end()) {
        cout << *it2; // prints 4 if found
    } else {
        cout << "Element not found";
    }

    auto it3 = s.find(5); // finds the element 5 in the set, returns an iterator to it

    s.erase(2); // removes element 2, now set is {1, 3} (takes O(log n) time)

    s.erase(it2, it3); // erases elements in the range [it2, it3) (start inclusive, end exclusive)

    int cnt = s.count(3); // returns 1 if 3 is present, else 0 (takes O(log n) time)

    s.lower_bound(2); // returns an iterator to the first element that is not less than 2

    s.upper_bound(2); // returns an iterator to the first element that is greater than 2

    // lower_bound and upper_bound are used to find the range of elements in the set

    // lower_bound => returns an iterator to the first element that is greater than or equal to the given value
    // upper_bound => returns an iterator to the first element that is strictly greater than the given value

    // uses in dsa => to find the range of elements in the set
    // lower_bound can be used to find the starting point of a range
    // upper_bound can be used to find the ending point of a range

    // set does not support indexing, so we cannot access elements by index
}

void explainMultiSet(){
    //everything is same as set, but it allows duplicate elements

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.emplace(2); // {1, 2}
    ms.insert(2); // {1, 2, 2}

    ms.erase(2); // removes all occurrence of 2, now multiset is {1}

    ms.insert(2); // {1, 2}
    ms.insert(2); // {1, 2, 2}

    ms.erase(ms.find(2)); // removes only one occurrence of 2, now multiset is {1, 2} (since it points the the iterator of the first occurrence of 2)

    ms.insert(2); // {1, 2, 2}

    // ms.erase(ms.find(2), ms.find(2)+2); // removes all occurrences of 2 in the range [it2, it3) (start inclusive, end exclusive)

    // ms.erase(ms.lower_bound(2), ms.upper_bound(2)); // removes all occurrences of 2 in the range [it2, it3) (start inclusive, end exclusive)

    // the rest of the functions are same as set
}

void explainUSet(){
    // unordered_set is a collection of unique elements, not sorted, uses hash table for storage

    unordered_set<int> us;

    us.insert(1); // {1}
    us.emplace(2); // {1, 2}
    us.insert(3); // {1, 2, 3}
    us.insert(2); // {1, 2, 3} (duplicate element is not added)

    // rest of the functions are same as set
    // but the order of elements is not guaranteed to be sorted
    // lower_bound and upper_bound are not available in unordered_set

    // it has a better average time complexity for insert, erase and find operations compared to set (O(1) on average)
    // but it can take O(n) time in the worst case due to collisions in the hash table
}

void explainMap() {
    // map is a collection of key-value pairs, sorted by keys by default

    map<int, int> mpp; // {key: value}

    map<int, pair<int, int>> mpp2; // {key: (value1, value2)}

    map<pair<int, int>, int> mpp3; // { (key1, key2): value }

    mpp[1] = 2; // {1: 2}
    mpp.emplace(2, 3); // {1: 2, 2: 3}
    mpp.insert({3, 4}); // {1: 2, 2: 3, 3: 4}
    mpp3[{4, 5}] = 6; // {1: 2, 2: 3, 3: 4, (4, 5): 6}

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl; // prints key and value pairs
    }

    cout << mpp[1] << " " << mpp.at(5); // returns value for key 1 and 5

    auto it = mpp.find(2); // finds the key 2 in the map, returns an iterator to it
    cout << (it)->first << " " << (it)->second; // prints key and value for key 2

    auto it2 = mpp.find(5); // finds the key 5 in the map, returns an iterator to end() if not found

    if (it2 != mpp.end()) {
        cout << (it2)->first << " " << (it2)->second; // prints key and value for key 5 if found
    } else {
        cout << "Key not found";
    }

    // syntax for lower_bound and upper_bound in map
    auto it3 = mpp.lower_bound(2); // returns an iterator to the first
    // element that is not less than 2 (i.e., key >= 2)

    auto it4 = mpp.upper_bound(2); // returns an iterator to the first
    // element that is greater than 2 (i.e., key > 2)

    // erase, size, swap, clear, empty same as set
}

void explainMultiMap() {
    // everything is same as map, but it allows duplicate keys in sorted order of keys

    multimap<int, int> mmp; // {key: value}

    mmp.insert({1, 2}); // {1: 2}
    mmp.emplace(2, 3); // {1: 2, 2: 3}
    mmp.insert({2, 4}); // {1: 2, 2: 3, 2: 4}

    // only mmp[key] = value; is not allowed, as it will overwrite the value for the key
    // we can use mmp.insert({key, value}) or mmp.emplace(key, value) to insert a new key-value pair

     // rest of the functions are same as map
}

void explainUMap() {
    // unordered_map is a collection of key-value pairs, not sorted, uses hash table for storage

    unordered_map<int, int> ump; // {key: value}

    ump[1] = 2; // {1: 2}
    ump.emplace(2, 3); // {1: 2, 2: 3}
    ump.insert({3, 4}); // {1: 2, 2: 3, 3: 4}

    for(auto it : ump) {
        cout << it.first << " " << it.second << endl; // prints key and value pairs
    }

    // rest of the functions are same as map
    // but the order of elements is not guaranteed to be sorted
    // lower_bound and upper_bound are not available in unordered_map
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) {
        return true; // sorted by second element in ascending order

    } 
    else if(p1.second > p2.second) {
        return false; // not sorted by second element in ascending order
    }

    // the second elements are same, we sort by first element in descending order

    else if (p1.first < p2.first) {
        return false; // sorted by first element in descending order
    }
    else if (p1.first > p2.first) {
        return true; // not sorted by first element in descending order
    }

    return false; // if both elements are same, return false
}

void explainExtra() {

    vector<int> v = {5, 2, 3, 1, 4};
    int a[] = {5, 2, 3, 1, 4};
    int n = sizeof(a) / sizeof(a[0]); // calculates the size of the array

    sort(a, a + n); // sorts the array in ascending order
    sort(v.begin(), v.end()); // sorts the vector in ascending order
    sort(v.begin(), v.end(), greater<int>()); // sorts the vector in descending order
    
    sort(a+2, a+4); // sorts the array from index 2 to index 3 (exclusive) in ascending order

    pair<int, int> a[] = {{1, 2}, {2, 5}, {5, 1}};

    //sort it according to second element in the pair, 
    // if second element is same, then sort
    // if according to first element, sort in descending

    sort(a, a+n, comp);

    int num = 3;
    int cnt = __builtin_popcount(num); // counts the number of set bits in num (significant bits)

    long long int num2 = 3;
    int cnt2 = __builtin_popcountll(num2); // counts the number of set bits in num2 (significant bits)

    string s = "123";


    // prints all permutations of the string s
    do{
        cout << s << endl; 
    } while(next_permutation(s.begin(), s.end()));

    int     maxi = *max_element(v.begin(), v.end()); // returns the maximum element in the vector v

    int mini = *min_element(v.begin(), v.end()); // returns the minimum element in

}

class timeComplexity {
    /*
        time complexity of operations:
            => vector: 
                        push_back O(1),
                        pop_back O(1), 
                        insert O(n), 
                        erase O(n), 
                        access O(1)
            => pair: 
                        access O(1)
            => list: 
                        push_back O(1), 
                        pop_back O(1), 
                        insert O(1), 
                        erase O(1), 
                        access O(n)
            => deque: 
                        push_back O(1), 
                        pop_back O(1), 
                        push_front O(1), 
                        pop_front O(1), 
                        insert O(n), 
                        erase O(n), 
                        access O(1)
            => stack: 
                        push O(1), 
                        pop O(1), 
                        top O(1), 
                        empty O(1), 
                        size O(1)
            => queue: 
                        push O(1), 
                        pop O(1), 
                        front O(1), 
                        back O(1), 
                        empty O(1), 
                        size O(1)
            => priority_queue: 
                        push O(log n), 
                        pop O(log n), 
                        top O(1), 
                        empty O(1), 
                        size O(1)

    */
};

int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultiMap();
    explainUMap();
    explainExtra();
    return 0;
}