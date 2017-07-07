#include<bits/stdc++.h>
#define R 3
#define C 6
using namespace std;
typedef long long int ll;
int size;
map<int,int> m;
queue<int> q;
void set1(int x,int y){
		int s=q.size();
	if(m.find(x)!=m.end()){
		
	
		while(s--){
			
			int temp=q.front();
			q.pop();
			if(temp!=x) q.push(temp);
		}
	}
	else if(s>=size){
		int temp=q.front();
		q.pop();
		m.erase(temp);
	}
	q.push(x);
	m[x]=y;
}
int get(int x){
	int s=q.size();
	if(m.find(x)!=m.end()){
		
		while(s--){
			
			int temp=q.front();
			q.pop();
			if(temp!=x)
			q.push(temp);
		}
		
		q.push(x);
		return m[x];
		
	}
	return -1;
}
int main(){
	int t;
	cin >>  t;
	while(t--){
		cin >> size;
		int q;
		cin >> q;
		while(q--){
			
			string s;
			cin >> s;
			if(s=="SET"){
				int x,y;
				cin >> x >> y;
				set1(x,y);
			}
			else{
				int x;
				cin >> x;
				cout << get(x) << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
