/*
1. list is a double list in the aspect of C
2. list is a sequence of container that allow non-contingous memory allocation.
3. list is faster compare to other sequence containers(vector, forward_list, deque)
4. we should use this class instead of traditional double linked list becuase 
    it was well tested and have a buunch of available function
5. few available operations
    operator = 
    assign
    front
    back
    empty
    size
    max_size
    clear
    insert
    emplace
    push_back
    pop_back
    push_front
    pop_front
    reverse
    sort
    merge
    splive
    unique
    remove
    remove_if
    resize

 * */

#include <iostream>
#include <list>
#include <string>

using namespace std;


void print_out(list<string> &li) {

    for(auto& elem : li) {
        cout << elem << " ";
    }
    cout << endl;
}
void print_out(list<int> &li) {

    for(auto& elem : li) {
        cout << elem << " ";
    }
    cout << endl;
}


void print_out(list<char> &li) {

    for(auto& elem : li) {
        cout << elem << " ";
    }
    cout << endl;
}


int main() {
    // list




    list<int> li_1 = {0,1,2,3,4,5};
    list<int> li_2 = {0,1,2,3,4,5,6,7,8};


    cout << "li_1 ==> ";
    print_out(li_1); 
    cout << "li_2 ==> ";
    print_out(li_2); 
    cout << endl;

    cout << "---------------------------" << endl;
    cout << "Assign li_1 to li_2" << endl;
    cout << "---------------------------" << endl;
    li_2= li_1;

    cout << "li_1 ==> ";
    print_out(li_1); 
    cout << "li_2 ==> ";
    print_out(li_2); 
    cout << endl;

    
    cout << "--------------------" << endl;
    cout << "reverse li_1" << endl;
    cout << "--------------------" << endl;
    li_1.reverse();

    cout << "li_1 ==> ";
    print_out(li_1); 
    cout << "li_2 ==> ";
    print_out(li_2); 
    cout << endl;

    cout << "--------------------" << endl;
    cout << "front and back" << endl;
    cout << "--------------------" << endl;
    int f = li_1.front();
    int b = li_2.back();

    cout << "li_1 ==> ";
    print_out(li_1); 
    cout << "li_2 ==> ";
    print_out(li_2); 
    cout << endl;
    cout << "li_1 front " << f << endl;
    cout << "li_2 back " << b << endl;
    cout << endl;

    cout << "--------------------" << endl;
    cout << "empty & size & clear" << endl;
    cout << "--------------------" << endl;
    cout << "list 1 is empty is "<<li_1.empty() <<endl;
    cout << "list 2 is empty is "<<li_2.empty() <<endl;
    cout << "||======> clearing list 2...... "<<endl;
    li_2.clear();
    cout << "list 1 is size is "<<li_1.size() <<endl;
    cout << "list 2 is size is "<<li_2.size() <<endl;

    cout << "--------------------" << endl;
    cout << "sort" << endl;
    cout << "--------------------" << endl;
    list<int> li_3 = {4,1,65,5,2,19,8,1,28,941};
    cout << "||======> sorting list 3 int...... "<<endl;
    li_3.sort();
    print_out(li_3);
    cout << endl;

//    list<char> li_3 = {o,s,d,i,s,n,d,i,o,l,f,g,a,i,q,n,v};
    list<char> li_4 = {'s','s','g','e','a','e','r','e','l'};
    cout << "||======> sorting list 4 char...... "<<endl;
    li_4.sort();
    print_out(li_4);
    cout << endl;


    list<string> li_5 = {"sort","dislike","unique","yourself","row","winter","router","head","time"};
    cout << "||======> sorting list 5 char...... "<<endl;
    li_5.sort();
    print_out(li_5);
    cout << endl;






    return 0;
}































