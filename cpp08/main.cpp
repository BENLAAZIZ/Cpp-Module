#include <iostream>
#include <vector>
#include <iterator>
#include <deque>
#include <list>
#include <set>

int main() {
//     std::vector<int>vec(5);
//     std::vector<int>v(3);

//     for(int i = 0; i < 5; ++i) {
//         vec[i] = i;
//     }

//     vec.push_back(60);
//     vec.insert(vec.begin(), 2, 300000);

//    for(int i = 0; i < 3; ++i) {
//         v[i] = i * 200;
//     }

    // int n = 0;
    //  std::cout << "enter vector elements : \n";
    // for (int i = 0; i < vec.size(); ++i) {
    //     std::cin >> vec[i];
    //     if(i == vec.size() - 1) {
    //         std::cout << "if you want resize the list press the size else prees -1 =  ";
    //         std::cin >> n;
    //         if (n == -1)
    //             break;
    //         else
    //             vec.resize(n);
    //     }
    // }

    // copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
    // std::deque<int> dec(6);

    // std::cout << "\n";
    // for(int i = 0; i!= dec.size(); ++i)
    // {
    //     dec[i] = i;
    // }

    // dec.push_back(90);
    // dec.push_front(-52);
    // dec.insert(dec.begin(),2, 100);
    // std::deque<int>::iterator end = dec.end();
    // std::deque<int>::iterator it = dec.begin();
    // for(; it != end; ++it)
    //    std::cout << * it<< " ";


    // std::list<int> l(5);
    // l.push_back(60);
    // l.push_back(5);
    // l.push_back(100);
    // l.push_back(5);
    // l.push_back(5);
    // l.push_back(5);

    // l.push_back(-3);

    // l.push_back(1);


    // for(int i = 0; i < 5; ++i) {
    //     l.push_back(i);
    // }
    // std::list<int> l2(5);
    // for(int i = 0; i < 5; ++i) {
    //     l2.push_back(i * 200);
    // }

    // l.merge(l2);
    // l.remove(5);
//     l.sort();

//    for (std::list<int>::iterator it = l.begin(); it != l.end(); ++it) {
//         std::cout << *it << " ";
//     }

// std::pair<std::string, int> p1("hamza", 20);

// std::cin >> p1.first >> p1.second ;
// std::cout << p1.first << " " << p1.second << std::endl;



std::set <int> s;

s.insert(10);
s.insert(10);
s.insert(10);
s.insert(20);
s.insert(30);
s.insert(-40);
s.insert(50);

std::set<int>::iterator it = s.begin();

std::set<int>::iterator end = s.end();
for(; it != end; ++it)
    std::cout << *it << " ";

it = s.find(30);
std::cout << "\n-------------\n ";
for(; it != end; ++it)
    std::cout << *it << " ";

std::cout << s.count(30) << std::endl;
std::cout << s.count(100) << std::endl;

    return 0;
}
