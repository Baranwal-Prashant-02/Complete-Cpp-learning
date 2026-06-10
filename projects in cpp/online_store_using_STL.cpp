/*
here we use stl to make such project 

some of them are with its usage

Container           Feature Demonstrated
--------------------------------------------------------------------------

vector              Dynamic array, indexing, traversal

deque               Insert/delete from front & back

list                Doubly linked list, traversal

set                 Unique sorted values

map                 Key-value pairs, sorted keys

multimap            Multiple values for same key

unordered_map       Hash table, fast lookup

unordered_set       Unique values using hashing

===============================================================================
DETAILED VIEW
===============================================================================

vector
------
✔ Dynamic size
✔ Random access using index
✔ Fast insertion at end

Example:
vector<int> v = {10,20,30};

--------------------------------------------------------------------------

deque
-----
✔ Insert from front
✔ Insert from back
✔ Delete from front
✔ Delete from back

Example:
deque<int> dq;

dq.push_front(10);
dq.push_back(20);

--------------------------------------------------------------------------

list
----
✔ Doubly linked list
✔ Fast insertion/deletion
❌ No random access

Example:
list<int> l;

--------------------------------------------------------------------------

set
---
✔ Unique values only
✔ Automatically sorted
❌ Duplicate values not allowed

Example:
set<int> s;

--------------------------------------------------------------------------

map
---
✔ Key → Value storage
✔ Keys remain sorted
✔ Unique keys

Example:
map<int,string> mp;

--------------------------------------------------------------------------

multimap
--------
✔ One key can have multiple values
✔ Keys remain sorted

Example:
multimap<string,int> mm;

--------------------------------------------------------------------------

unordered_map
-------------
✔ Hash table
✔ Very fast search O(1) average
❌ Not sorted

Example:
unordered_map<int,string> ump;

--------------------------------------------------------------------------

unordered_set
-------------
✔ Unique values
✔ Hash table
✔ Fast lookup O(1) average
❌ Not sorted

Example:
unordered_set<int> us;

===============================================================================
MEMORY TRICK
===============================================================================

vector          → Dynamic Array

deque           → Double Ended Queue

list            → Linked List

set             → Unique + Sorted

map             → Key → Value + Sorted

multimap        → Multiple Values Per Key

unordered_map   → Hash Table + Key Value

unordered_set   → Hash Table + Unique Values

===============================================================================
*/



#include <bits/stdc++.h>
using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {

    // ================= VECTOR =================
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "SmartPhone", "Electronics"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"}
    };

    cout << "\n===== VECTOR PRODUCTS =====\n";

    for(const auto &p : products) {
        cout << p.productID << " "
             << p.name << " "
             << p.category << endl;
    }

    // Random Access
    cout << "\nFirst Product: "
         << products[0].name << endl;


    // ================= DEQUE =================
    deque<string> recentCustomers = {"C001","C002","C003"};

    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    cout << "\n===== DEQUE =====\n";

    for(auto customer : recentCustomers) {
        cout << customer << " ";
    }

    cout << endl;

    recentCustomers.pop_front();
    recentCustomers.pop_back();

    cout << "After pop operations:\n";

    for(auto customer : recentCustomers) {
        cout << customer << " ";
    }

    cout << endl;


    // ================= LIST =================
    list<Order> orderHistory;

    orderHistory.push_back({1,101,1,"C001",time(0)});
    orderHistory.push_back({2,102,2,"C002",time(0)});
    orderHistory.push_back({3,103,1,"C003",time(0)});

    cout << "\n===== LIST ORDERS =====\n";

    for(const auto &order : orderHistory) {
        cout << "Order ID: "
             << order.orderID
             << " Customer: "
             << order.customerID
             << endl;
    }


    // ================= SET =================
    set<string> categories;

    for(const auto &product : products) {
        categories.insert(product.category);
    }

    cout << "\n===== SET (Unique Categories) =====\n";

    for(auto cat : categories) {
        cout << cat << endl;
    }

    if(categories.find("Kitchen") != categories.end()) {
        cout << "Kitchen category found\n";
    }


    // ================= MAP =================
    map<int,int> productStock = {
        {101,10},
        {102,20},
        {103,15},
        {104,5},
        {105,7}
    };

    cout << "\n===== MAP (Product Stock) =====\n";

    for(auto item : productStock) {
        cout << "Product ID: "
             << item.first
             << " Stock: "
             << item.second
             << endl;
    }

    cout << "\nStock of Product 101 = "
         << productStock[101]
         << endl;

    productStock[101] += 5;

    cout << "Updated Stock of 101 = "
         << productStock[101]
         << endl;


    // ================= MULTIMAP =================
    multimap<string, Order> customerOrders;

    for(const auto &order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    cout << "\n===== MULTIMAP =====\n";

    for(auto entry : customerOrders) {
        cout << entry.first
             << " -> Order "
             << entry.second.orderID
             << endl;
    }


    // ================= UNORDERED MAP =================
    unordered_map<string,string> customerData = {
        {"C001","Alice"},
        {"C002","Hitesh"},
        {"C003","Vidya"},
        {"C004","Max"},
        {"C005","Harry"}
    };

    cout << "\n===== UNORDERED MAP =====\n";

    for(auto customer : customerData) {
        cout << customer.first
             << " -> "
             << customer.second
             << endl;
    }

    cout << "\nCustomer C002 = "
         << customerData["C002"]
         << endl;


    // ================= UNORDERED SET =================
    unordered_set<int> uniqueProductIDs;

    for(const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    cout << "\n===== UNORDERED SET =====\n";

    for(auto id : uniqueProductIDs) {
        cout << id << " ";
    }

    cout << endl;

    if(uniqueProductIDs.find(103)
        != uniqueProductIDs.end())
    {
        cout << "Product ID 103 exists\n";
    }

    return 0;
}

/*
output:

===== VECTOR PRODUCTS =====
101 Laptop Electronics
102 SmartPhone Electronics
103 Coffee Maker Kitchen
104 Blender Kitchen
105 Desk Lamp Home

First Product: Laptop

===== DEQUE =====
C005 C001 C002 C003 C004 
After pop operations:
C001 C002 C003 

===== LIST ORDERS =====
Order ID: 1 Customer: C001
Order ID: 2 Customer: C002
Order ID: 3 Customer: C003

===== SET (Unique Categories) =====
Electronics
Home
Kitchen
Kitchen category found

===== MAP (Product Stock) =====
Product ID: 101 Stock: 10
Product ID: 102 Stock: 20
Product ID: 103 Stock: 15
Product ID: 104 Stock: 5
Product ID: 105 Stock: 7

Stock of Product 101 = 10
Updated Stock of 101 = 15

===== MULTIMAP =====
C001 -> Order 1
C002 -> Order 2
C003 -> Order 3

===== UNORDERED MAP =====
C005 -> Harry
C004 -> Max
C003 -> Vidya
C002 -> Hitesh
C001 -> Alice

Customer C002 = Hitesh

===== UNORDERED SET =====
105 104 103 102 101 
Product ID 103 exists

*/