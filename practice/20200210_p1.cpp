//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int priority(char c) {
//	switch (c) {
//	case '+': case '-':
//		return 1;
//	case '*': case '/':
//		return 2;
//	}
//}
//
//int main()
//{
//	string str, postmark;
//	stack<char> s;
//	cin >> str;
//
//	for (int i = 0; i < str.size(); i++)
//	{
//		if ('0' <= str[i] && str[i] <= '9')
//			postmark += str[i];
//		else if (s.empty()) {
//			s.push(str[i]);
//		}
//		else if(priority(s.top()) >= priority(str[i])) {
//			postmark += s.top();
//			s.pop();
//			s.push(str[i]);
//		}
//		else {
//			s.push(str[i]);
//		}
//	}
//	while (!s.empty())
//	{
//		postmark += s.top();
//		s.pop();
//	}
//
//	cout << postmark << '\n';
//
//	return 0;
//}