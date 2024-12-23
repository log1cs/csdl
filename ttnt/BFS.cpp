#include<bits/stdc++.h>
using namespace std;
const int maxN=100;//gia su dinh chua toi da maxN
queue<int>open;//hang doi
vector<int>close;//luu trang thai da duyet
bool visited[maxN];//danh dau dinh da tham
vector<int>ke[maxN];//luu dinh ke
void BFS(int start,int end) {
	open.push(start);//dinh dau tien
	visited[start]=true;
	while(!open.empty()) {
		int u=open.front();
		close.push_back(u);
		open.pop();
		if(u==end) break;
		for(int x:ke[u]) {//duyet cac dinh ke
			if(!visited[x]) {
				open.push(x);
				visited[x]=true;
			}
		}
	}
}
int main() {
	cout<<"Nhap so dinh: ";
	int s;
	cin>>s;
	for(int i=1; i<s; i++) { //nhap s-1 cap gia tri (u,v)
		cout<<"Nhap cac dinh(u,v)= ";
		int u,v;
		cin>>u>>v;
		ke[u].push_back(v);
		ke[v].push_back(u);
	}
	int start,end;
	cout<<"Nhap dinh bat dau: ";cin>>start;
	cout<<"Nhap dinh ket thuc: ";cin>>end;
	BFS(start,end);
	cout<<"Thu tu duyet theo chieu rong: ";
	for(int i=0; i<close.size(); i++) {
		cout<<close[i]<<" ";
	}
	return 0;
}


