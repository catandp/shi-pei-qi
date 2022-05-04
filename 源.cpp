//stack（栈）适配器，后进先出
/*#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	vector<int>m = { 1,2,3 };
	stack<int, vector<int>>s(m);
	s.push(4);//插入4
	s.emplace(5);//插入5
	s.pop();
	while (!s.empty())//栈内不为空可以一直循环
	{
		cout << s.top() << endl;
		s.pop();//将元素一次弹出，直到为空的时候，不然会一直输出
	}
	return 0;
}******************************************/
//queue队列，先进先出
/*#include<iostream>
#include<list>
#include<queue>
using namespace std;
int main()
{
	list<int>l = { 1,2,3 };
	queue<int, list<int>>s(l);
	s.push(4);
	s.emplace(5);
	s.pop();//最先进入元素被弹出；
	cout << s.front() << endl;
	cout << s.back() << endl;
	while (!s.empty())
	{
		cout << s.front() << endl;//依次输出2，3，4，5
		s.pop();//每输出一个数就将该数出队列
	}
	return 0;
}*/
#include<iostream>
#include<queue>
using namespace std;
class Comp
{
public:
	bool operator ()(int x, int y) { return x > y; }
};
template<class T>
void print(T& q)
{
	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}
}
int main()
{
	priority_queue<int>q;
	for (int n : {1, 2, 6, 3, 8, 5, 9, 7})
	
		q.push(n);
		print(q);
	
	priority_queue<int, vector<int>, greater<int>>q1;
	for (int n : {1, 5, 3, 2, 5, 7, 9, 5, 8, 0})
	
		q1.push(n);
		print(q1);
	
	priority_queue<int, vector<int>, Comp>q2;
	for (int n : {1, 4, 5, 9, 2, 7, 6, 3, 9, 0})
	
		q2.push(n);
		print(q2);
	
	return 0;
}