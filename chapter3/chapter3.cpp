#include <iostream>
#include <string>

using namespace std;

/**
 * 练习3.6
 * 使用范围for循环将字符串中的字符使用X代替,最终结果直接打印
 */
void practice_36();
/**
 * 练习3.7，使用范围for循环,将类型限制为char,what will happen?
 */
void practice_37();
/**
 * 练习3.10
 * 读入一个包含标点符号的字符串，去除标点符号输出字符串剩余的部分
 */
void practice_310();


int main(int argc, char **argv){
	practice_36();
	practice_37();
	practice_310();
	return 0;
}

void practice_36(){
	string s;
	getline(cin, s);
	if(!s.empty())
	{
		for(auto &c : s){
			c = 'X';
		}
		for(auto c : s){
			cout << (char)c;
		}
		cout << '\n';
	}else{
		cout << "nothing to do\n";
	}
}

void practice_37(){
	string s;
	getline(cin, s);
	if(!s.empty())
	{
		//everything is normal
		for(char &c : s){
			c = 'X';
		}
		for(auto c : s){
			cout << (char)c;
		}
		cout << '\n';
	}else{
		cout << "nothing to do\n";
	}
}

void practice_310(){
	string s;
	getline(cin, s);
	if(!s.empty()){
		for(auto c : s){
			if(!ispunct(c)){
				cout << c;
			}
		}
		cout << '\n';
	}
}