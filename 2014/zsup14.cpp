////201403-1 �෴��
//#include <iostream>
//using namespace std;
//int main(){
//	int i=0,n,num=0,j;
//	cin>>n;
//	int a[1000];
//	for(i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(i=0;i<n;i++){
//		for(j=i+1;j<n;j++){
//			if(a[i]==0-a[j]){
//				num++;
//			}
//		}
//	}
//	cout<<num<<endl;
//	return 0;
//} 



//#include<bits/stdc++.h>
//
//using namespace std;
//int A[1001];
//int N;
//int cnt; //�෴������
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int tmp, Tmp;
//		cin >> tmp;
//		Tmp = abs(tmp);
//		A[Tmp] += tmp;
//		if (A[Tmp] == 0) cnt++;
//	}
//	cout << cnt << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<algorithm> 
//using namespace std;
////���飺ȫ�ֱ����������غ��ʼ��Ϊ0���ֲ�����Ϊֹ 
//int A[1010];
//int n;
//int main(){
//    cin>>n;
//    int cnt=0; 
//    for(int i=0;i<n;i++){
//        int temp=0,Temp=0;
//        cin>>temp;
//        Temp=abs(temp);
//        A[Temp]+=temp;
//        if(A[Temp]==0) cnt++;
//    }
//    cout<<cnt;
//    return 0;
//}
//201403-1 �෴��
//#include<iostream>
//using namespace std;
//int main(){
//  int n;
//  cin>>n;
//  int ans=0;
//  int a[1001]={0};
//  for(int i=1;i<=n;i++){
//    int temp=0;
//    cin>>temp;
//    int tempabs=abs(temp);
//    a[tempabs]++;
//    if(a[tempabs]==2)  ans++;
//  }
//  cout<<ans<<endl;
//  return 0;
//}


//201403-2 ����
//#include <iostream>
//#include <vector>
//using namespace std;
//struct Window{
//	int x1,x2,y1,y2;
//	int number;
//	Window(){}
//	Window(int _x1,int _x2,int _y1,int _y2,int n):x1(_x1),x2(_x2),y1(_y1),y2(_y2),number(n){}
//}; 
//vector<Window> order;
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++){
//		int x1,x2,y1,y2;
//		cin>>x1>>y1>>x2>>y2;
//		order.insert(order.begin(),Window(x1,x2,y1,y2,i)); 
//	}
//	for(int i=0;i<m;i++){
//		int x,y,j;
//		cin>>x>>y;
//		for(j=0;j<n;j++){
//			Window current=order[j];
//			if(current.x1<=x&&current.x2>=x&&current.y1<=y&&current.y2>=y){
//				order.erase(order.begin()+j);
//				order.insert(order.begin(),current);
//				cout<<current.number<<endl;
//				break;
//			}
//		}
//		if(j==n){
//			cout<<"IGNORED"<<endl;
//		}
//	}
//	return 0;
//}

//201403-2 ����
//#include<bits/stdc++.h>
//using namespace std;
//struct Area{
//	int x1,y1;
//	int x2,y2;
//}Win_Area[15];
//vector<int> V;
//bool Judge_In(int x,int y,int no){
//	if(x<=Win_Area[no].x2 && x>= Win_Area[no].x1 && y<=Win_Area[no].y2 && y>=Win_Area[no].y2 ){
//		return true;
//	}else{
//		return false;
//	}
//} 
//int main(){
//	int N,M;
//	cin>>N>>M;
//	for(int i=1;i<=N;i++){
//		cin>>Win_Area[i].x1>>Win_Area[i].y1>>Win_Area[i].x2>>Win_Area[i].y2;
//		V.push_back(N-i+1);
//	}
//	for(int i=0;i<M;i++){
//		int x,y;
//		cin>>x>>y;
//		for(auto it=V.begin();it != V.end();it++){
//			if(Judge_In(x,y,*it)==true){
//				cout<<*it<<endl;
//				int store=*it;
//				V.erase(it);
//				V.insert(V.begin(),store);
//				x=-1;
//				break;
//			}
//		}
//		if(x!=-1) cout<<"IGNORED"<<endl;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//vector<int> V;
//struct Area{
//	int x1,y1;
//	int x2,y2;
//}Win_Area[15];
//bool Judge_On(int x,int y,int no){
//	if(x>=Win_Area[no].x1 && x<=Win_Area[no].x2 && y>=Win_Area[no].y1 && y<=Win_Area[no].y2){
//		return true;
//	}else{
//		return false;
//	}
//}
//int main(){
//	int N,M;
//	cin>>N>>M;
//	for(int i=1;i<=N;i++){
//		cin>>Win_Area[i].x1>>Win_Area[i].y1>>Win_Area[i].x2>>Win_Area[i].y2;
//		V.push_back(N-i+1);
//	}
//	for(int i=0;i<M;i++){
//		int x,y;
//		cin>>x>>y;
//		for(auto it=V.begin();it!=V.end();it++){
//			if(Judge_On(x,y,*it)){
//				cout<<*it<<endl;
//				int temp=*it;
//				V.erase(it);
//				V.insert(V.begin(),temp);
//				x=-1;
//				break;
//			}
//		}
//		if(x!=-1) cout<<"IGNORED"<<endl;
//	}
//	return 0;
//}

// 201403-3 ������ѡ��
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	string line;
//	cin>>line;
//	map<char,bool> dct;//true:������ѡ�false��������ѡ�� 
//	int i;
//	for(i=0;i<line.size();i++){
//		if(line[i]!=':'){
//			dct.insert(pair<char,bool>(line[i],false));
//		}else{
//			dct[line[i-1]]=true;
//		}
//	}
//	int n;
//	cin>>n;
//	cin.ignore(); //ɾ���������еĻس� 
//	string s;
//	map<string,string> res;
//	for(i=0;i<n;i++){
//		res.clear();//����ַ����е������ַ� 
//		string temp;//ָ�� 
//		getline(cin,s);//��ȡһ���ַ����������س����������˻��У� 
//		stringstream ss(s);
//		ss>>temp; 
//		while(ss>>temp){
//			if(temp[0] == '-' && dct.find(temp[1])!=dct.end()){
//				if(dct[temp[1]]){
//					string arg;
//					if(ss>>arg){
//						if(res.find(temp)!=res.end()){//���ݴ��� 
//							res[temp]=arg;
//						}else{//���ݲ����� 
//							res.insert(pair<string,string>(temp,arg));
//						}
//					}
//					else{
//						break;
//					}
//				}
//				else{
//					res.insert(pair<string,string>(temp,""));
//				}
//			}
//			else{
//				break;
//			}
//		}
//		cout<<"Case "<<i+1<<": ";
//		map<string,string>::iterator iter;
//		for(iter=res.begin();iter!=res.end();iter++){
//			cout<<iter->first<<" ";
//			if(iter->second!=""){
//				cout<<iter->second<<" ";
//			} 
//		}
//		cout<<endl;
//	}
//	return 0;
//} 


//201403-4 ��������
//#include<bits/stdc++.h>
//using namespace std;
//struct node{//�������ã�cnt1��ʾ����������·��������cnt2��ʾ��������·����������������㣩
//    int index,cnt1,cnt2;
//};
////x[i],y[i]��ʾ·�������꣬��ԭ·����������ķ�һ�飬����ʱ����i�Ƿ���ڵ���nȷ���¾�·����
//int n,m,k,r,x[200],y[200],c[200]={0};//c[i]��ʾ����㵽��i����������·������
//double d[200][200]={0};
//
////������� 
//double dis(int i,int j){
//    double ans=pow(1.0*x[i]-x[j],2.0)+pow(1.0*y[i]-y[j],2.0);
//    return sqrt(ans);
//}
//
//int bfs(){
//    queue<node> q;
//    q.push((node){0,0,0});
//    fill(c+1,c+m+n,k+1);//��ʼ��
//    while(!q.empty()){
//        node now=q.front();
//        q.pop();
//        int indx=now.index,c1=now.cnt1,c2=now.cnt2;
//        if(indx==1) return c2-1;//c2�������յ㣬��Ҫ��ȥ
//        for(int i=0;i<n+m;i++){
//            if(i==n) c1++;//֮���������·����
//            if(c1>k) break;
//            if(d[indx][i]<=r&&c1<c[i]){//i���״γ��ֵ�ʱ��������þ���������·�������٣�����������
//                c[i]=c1;
//                q.push((node){i,c1,c2+1});
//            }
//        }
//    }
//}
//
//int main(){
//	cin>>n>>m>>k>>r;
//    for(int i=0;i<n+m;i++)
//    	cin>>x[i]>>y[i];
//    for(int i=0;i<n+m;i++)//�ȰѸ���֮����������
//        for(int j=i+1;j<n+m;j++){
//            d[j][i]=d[i][j]=dis(i,j);
//        }
//    cout<<bfs()<<endl;
//    return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//const int N=200;
//int n,m,k,r;
////x[i],y[i]�洢����·�������꣬����nʱΪ����·������c[i]��ʾ����㵽i������������·���������� 
//int x[N],y[N],c[N]={0};
////d[i][j]�洢������Ϣ 
//double d[N][N]={0};
////����bfs�� cnt_n��ʾ����������·���������� cnt_t��ʾ�������ܵ�·�������� 
//struct node{
//	int id,cnt_n,cnt_t;
//};
//double dist(int i,int j){
//	double res=pow(1.0*x[i]-x[j], 2.0) + pow(1.0*y[i]-y[j], 2.0);
//	return sqrt(res);
//}
//int bfs(){
//	queue<node> q;
//	q.push((node){0,0,0});
//	fill(c+1,c+n+m,k+1);
//	while(!q.empty()){
//		node temp=q.front();
//		q.pop();
//		int index=temp.id,c1=temp.cnt_n,c2=temp.cnt_t;
//		if(index==1) return c2-1;
//		for(int i=0;i<n+m;i++){
//			if(i==n) c1++;
//			if(c1>k) break;
//			if(d[index][i]<=r && c1<c[i]){
//				c[i]=c1;
//				q.push((node){i,c1,c2+1});
//			}
//		} 
//	}
//}
//int main(){
//	cin>>n>>m>>k>>r;
//	for(int i=0;i<n+m;i++){
//		cin>>x[i]>>y[i];
//	}
//	for(int i=0;i<n+m;i++){
//		for(int j=i+1;j<n+m;j++){
//			d[j][i]=d[i][j]=dist(i,j);
//		}
//	}
//	cout<<bfs()<<endl;
//	return 0;
//} 

//201409-1 ��������
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int num[1005];
//int main(){
//	int n,count=0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>num[i];
//	}
//	sort(num,num+n);
//	for(int i=0;i<n;i++){
//		if(num[i+1]-num[i]==1){
//			count++;
//		}
//	}
//	cout<<count<<endl;
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int a[1005]; 
//int main(){
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	sort(a,a+n);
//	int ans=0;
//	for(int i=0;i<n;i++){
//		if(a[i+1]-a[i]==1){
//			ans++;
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//} 


//201409-2 ��ͼ
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N=105;
//bool flag[N+1][N+1];
//int main(){
//	int n,x1,y1,x2,y2,sum=0;
//	memset(flag,false,sizeof(flag));
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>x1>>y1>>x2>>y2;
//		sum+=(x2-x1)*(y2-y1);
//		for(int i=x1;i<x2;i++)
//			for(int j=y1;j<y2;j++){
//				if(flag[i][j])
//					sum--;
//				flag[i][j]=true;
//			}
//	}
//	cout<<sum<<endl;
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int flag[105][105];
//int main(){
//    int n,x1,y1,x2,y2,sum=0;
//    memset(flag,false,sizeof(flag));
//    cin>>n;
//    for(int i=0;i<n;i++){
//        cin>>x1>>y1>>x2>>y2;
//        sum+=(x2-x1)*(y2-y1);
//        for(int i=x1;i<x2;i++){
//            for(int j=y1;j<y2;j++){
//                if(flag[i][j])
//                   sum--;
//                flag[i][j]=true;
//            }
//        }
//    }
//    cout<<sum;
//    return 0;
//}

////201409-2 ��ͼ
//#include<bits/stdc++.h>
//using namespace std;
//bool flag[105][105];
//int main(){
//	int n,x1,y1,x2,y2,sum=0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>x1>>y1>>x2>>y2;
//		sum+=(x2-x1)*(y2-y1);
//		for(int i=x1;i<x2;i++){
//			for(int j=y1;j<y2;j++){
//				if(flag[i][j])
//					sum--;
//				flag[i][j]=true;
//			}
//		}
//	}
//	cout<<sum<<endl;
//	return 0; 
//}


//201409-3 �ַ���ƥ��
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//string s;
//bool flag;
//int n;
//int main(){
//	cin>>s;
//	cin>>flag;
//	cin>>n;
//	//��Сд�����У���ͳһת��Ϊ��д 
//	if(!flag){
//		transform(s.begin(),s.end(),s.begin(),::tolower);
//	}
//	while(n--){
//		string a;
//		string res;
//		cin>>a;
//		res=a;
//		if(!flag) transform(a.begin(),a.end(),a.begin(),::tolower);
//		//find�����ִ�Сд�ģ����ҵ��򷵻��ַ�������ĸ�±�λ�ã�ʱ�临�Ӷ�O(n*m) 
//		if(a.find(s)!=-1){
//			cout<<res<<endl;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//string s;
//bool flag;
//int n;
//int main(){
//    cin>>s;
//    cin>>flag;
//    cin>>n;
//    if(!flag){
//       transform(s.begin(),s.end(),s.begin(),::tolower);
//    }
//    while(n--){
//          string a;
//          string res;
//          cin>>a;
//          res=a;
//          
//          if(!flag){
//             transform(a.begin(),a.end(),a.begin(),::tolower);
//          }
//          if(a.find(s)!=-1){
//             cout<<res<<endl;
//          }
//    }
//    return 0;
//}

//201409-3 �ַ���ƥ��
//#include<bits/stdc++.h>
//#include<string>
//using namespace std;
//int main(){
//	string s;
//	cin>>s;
//	bool flag;
//	cin>>flag;
//	int n;
//	cin>>n;
//	if(!flag){
//		transform(s.begin(), s.end(), s.begin(), ::tolower);
//	}
//	while(n--){
//		string a,temp;
//		cin>>a;
//		temp=a;
//		if(!flag){
//			transform(a.begin(), a.end(), a.begin(), ::tolower);
//		}
//		if(a.find(s)!=-1){
//			cout<<temp<<endl;
//		}
//	} 
//	return 0;
//}

//string s;
//transform(s.begin(),s.end(),s.begin(),::tolower);//ת��ΪСд 
//transform(s.begin(),s.end(),s.begin()<::toupper);//ת��Ϊ��д 

//#include<iostream>
//#include<queue>
//using namespace std;
//const int N = 1005;
//bool vis[N][N];
//long long num[N][N],ans = 0;
//int n;
//struct node{
//	int x,y;
//	long long dis;
//};
//struct POS{
//	int x,y;
//}pos[4]={{-1,0},{1,0},{0,-1},{0,1}};
//queue<node> q;
//void fun(){
//	node tmp;
//	while(!q.empty()){
//		node cur = q.front();
//		q.pop();
//		for(int i = 0; i < 4; i++){
//			tmp.x = cur.x+pos[i].x;
//			tmp.y = cur.y+pos[i].y;
//			if(tmp.x<1||tmp.x>n||tmp.y<1||tmp.y>n||vis[tmp.x][tmp.y]) continue;
//			vis[tmp.x][tmp.y] = true;
//			ans += num[tmp.x][tmp.y]*(cur.dis+1);
//			tmp.dis=cur.dis+1;
//			q.push(tmp);
//		}
//	}
//	cout<<ans;
////	printf("%lld\n", ans);
//}
//int main()
//{
//	int m,k,d,x,y,c;
//	cin>>n>>m>>k>>d;
////	scanf("%d%d%d%d", &n, &m, &k, &d);
//	while(m--){
//		cin>>x>>y;
////		scanf("%d%d", &x, &y);
//		q.push({x,y,0}); 
//	}
//	while(k--){
//		cin>>x>>y>>c;
////		scanf("%d%d%d", &x, &y, &c);
//		num[x][y] += c;//���ܸõ��ж���ͻ��������õ��� 
//	}
//	while(d--){
//		cin>>x>>y;
////		scanf("%d%d", &x, &y);
//		vis[x][y] = true;
//	}
//	fun();
//	return 0;
//}

//#include<iostream>
//#include<queue>
//using namespace std;
//const int N=1005;
//bool vis[N][N];
//long long num[N][N],ans=0;
//int n;
//struct node{
//	int x,y;
//	long long dis;
//};
//struct POS{
//	int x,y;
//}pos[4]={{-1,0},{1,0},{0,-1},{0,1}};
//queue<node> q;
//void bfs(){
//	node tmp;
//	while(!q.empty()){
//		node cur=q.front();
//		q.pop();
//		for(int i=0;i<4;i++){
//			tmp.x=cur.x+pos[i].x;
//			tmp.y=cur.y+pos[i].y;
//			if(tmp.x<1||tmp.x>n||tmp.y<1||tmp.y>n||vis[tmp.x][tmp.y]) continue;
//			vis[tmp.x][tmp.y]=true;
//			ans+=num[tmp.x][tmp.y]*(cur.dis+1);
//			tmp.dis=cur.dis+1;
//			q.push(tmp);
//		}
//	}
//	cout<<ans;
//}
//int main(){
//	int m,k,d,x,y,c;
//	cin>>n>>m>>k>>d;
//	while(m--){
//		cin>>x>>y;
//		q.push({x,y,0});
//	}
//	while(k--){
//		cin>>x>>y>>c;
//		num[x][y]+=c;
//	}
//	while(d--){
//		cin>>x>>y;
//		vis[x][y]=true;
//	}
//	bfs();
//	return 0;
//}

//201409-4 �������
//#include<iostream>
//#include<queue>
//using namespace std;
//const int N=1005;
//long long num[N][N];
//bool vis[N][N];
//struct node{
//	int x,y;
//	long long dist;
//};
//struct POS{
//	int x,y;
//}pos[4]={{-1,0},{1,0},{0,-1},{0,1}};
//queue<node> q;
//int n;
//long long ans=0;
//void bfs(){
//	node temp;
//	while(!q.empty()){
//		node cur=q.front();
//		q.pop();
//		for(int i=0;i<4;i++){
//			temp.x=cur.x+pos[i].x;
//			temp.y=cur.y+pos[i].y;
//			if(temp.x<1 || temp.x>n || temp.y<1 || temp.y>n || vis[temp.x][temp.y]) continue; 
//			vis[temp.x][temp.y]=true;
//			ans+=num[temp.x][temp.y]*(cur.dist+1);
//			temp.dist=cur.dist+1;
//			q.push(temp);
//		}
//	}
//	cout<<ans;
//}
//
//int main(){
//	int m,k,d,x,y,c;
//	cin>>n>>m>>k>>d;
//	for(int i=0;i<m;i++){
//		cin>>x>>y;
//		q.push({x,y,0});
//	}
//	for(int i=0;i<k;i++){
//		cin>>x>>y>>c;
//		num[x][y]+=c;
//	}
//	for(int i=0;i<d;i++){
//		cin>>x>>y;
//		vis[x][y]=true;
//	}
//	bfs();
//	return 0; 
//} 


//201412-1 �Ž�ϵͳ
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int n;
//int a[1005];
//int main(){
//	cin>>n;
//	while(n--){
//		int x;
//		cin>>x;
//		a[x]++;
//		cout<<a[x]<<" ";
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int A[1005];
//int main(){
//    int n;
//    cin>>n;
//    while(n--){
//          int i;
//          cin>>i;
//          A[i]++;
//          cout<<A[i]<<" ";
//    }
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int a[1005];
//int main(){
//	int n;
//	cin>>n;
//	while(n--){
//		int temp;
//		cin>>temp;
//		a[temp]++;
//		cout<<a[temp]<<" ";
//	}
//	return 0;
//} 


//201412-2 Z����ɨ��
//#include<iostream>
//using namespace std;
//int main(){
//	int i,j,n,a[505][505];
//	cin>>n;
//	for(i=0;i<n;i++)
//		for(j=0;j<n;j++)
//			cin>>a[i][j];
//	//i��ʾ���ǵ�ǰ�������ǵڼ������Խ��ߣ����Ǻ����꣬��2n - 1�����Խ���
//	for(i=0;i<2*n-1;i++){
//		int s=i<n?0:(i-n+1);
//		int e=i<n?i:(n-1);
//		//��ż�����Խ�����������
//		if(i%2==0){
//			//j��ʾ��ǰ���Խ������ĺ����꣬��������i - j�������
//			for(j=s;j<=e;j++)
//				cout<<a[i-j][j]<<" ";
//		}
//		//���������Խ�����������
//		else{
//			//j��ʾ��ǰ���Խ������ĺ����꣬��������i - j�������
//			for(j=s;j<=e;j++)
//				cout<<a[j][i-j]<<" ";
//		}
//	}
//	return 0;
//	
//}
//Z����ɨ�� 
//#include<iostream>
//using namespace std;
//int A[510][510];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cin>>A[i][j];
//		}
//	}
//	for(int i=2;i<=2*n;i++){
//		if(i%2==0){
//			for(int j=i-1;j;j--){
//				if(j>=1 && j<=n && i-j>=1 && i-j<=n){
//					cout<<A[j][i-j]<<' ';
//				}
//			}
//		}else{
//			for(int j=1;j<i;j++){
//				if(j>=1 && j<=n && i-j>=1 && i-j<=n){
//					cout<<A[j][i-j]<<' ';
//				}
//			}
//		}
//	}
//	return 0;
//} 
//

//#include<iostream>
//using namespace std;
//int z[505][505];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=n;j++){
//			cin>>z[i][j];
//		}
//	}
//	for(int i=2;i<=2*n;i++){
//		if(i%2==0){
//			for(int j=i-1;j;j--){
//				if(j>=1 && j<=n && i-j>=1 && i-j<=n){
//					cout<<z[j][i-j]<<" ";
//				}
//			}
//		}else{
//			for(int j=1;j<i;j++){
//				if(j>=1 && j<=n && i-j>=1 && i-j<=n){
//					cout<<z[j][i-j]<<" ";
//				}
//			}
//		}
//	}
//	return 0;
//} 


//#include <iostream>
//using namespace std;
//
//const int MAXN = 505;
//int z[MAXN][MAXN];
//
//int main() {
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> z[i][j];
//        }
//    }
//
//    for (int i = 2; i <= 2 * n; i++) {
//        int j_start = max(1, i - n), j_end = min(i - 1, n);
//        if (i % 2 == 0) {
//            for (int j = j_end; j >= j_start; j--) {
//                cout << z[j][i - j] << " ";
//            }
//        } else {
//            for (int j = j_start; j <= j_end; j++) {
//                cout << z[j][i - j] << " ";
//            }
//        }
//    }
//
//    return 0;
//}



//201412-3 ���Ͼ���
//#include<iostream>
//#include<string>
//#include<cstdio>
//#include<algorithm>
//using namespace std;
//struct Node{
//	bool isSell;//�Ƿ�Ϊ���� 
//	double price;//�۸� 
//	int number;//���� 
//}node[5010];
//long long buy[5010]={0},sell[5010]={0};
//bool cmp(Node a,Node b){
//	if(a.price==b.price) return a.isSell>b.isSell;
//	return a.price<b.price;
//}
//int main(){
//	int count = 1,num;
//	string str;
//	//�������� 
//	while(cin>>str){
//		double price,number;
//		if(str=="buy"){
//			cin>>node[count].price>>node[count].number;
//			node[count].isSell=false;
//		}
//		else if(str=="sell"){
//			cin>>node[count].price>>node[count].number;
//			node[count].isSell=true;
//		}
//		else{
//			cin>>num;
//			node[num].price=node[num].number=0;
//		}
//		count++;
//	}
//	//���۸��С�����������������
//	sort(node,node+count,cmp);	
//	int left = 1,high = count-1;
//	long long ans=0,bestans=0,cum=0;
//	double p=0;
//	while(node[left].price==0) left++;
//	//�����������ۼ���Һ����� 
//	for(int i = high;i >= left;i--){
//		if(node[i].isSell==false)cum+=node[i].number;
//		buy[i] = cum;
//	}
//	cum=0;
//	for(int i = left;i<=high;i++){
//		if(node[i].isSell==true)cum+=node[i].number;
//		sell[i] = cum;
//	}
//	for(int i = left;i <= high;i++){
//		ans = min(sell[i],buy[i]);
//		if(ans>=bestans){
//			bestans=ans;
//			p=node[i].price;
//		}
//	}
////	cout<<p<<bestans<<endl;
//	printf("%.2lf %lld",p,bestans);
//	return 0;
//}
//
//
//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//struct Node{
//	bool isSell;//�Ƿ�Ϊ���� 
//	double price; 
//	int number;//���� 
//}node[5010];
//long long buy[5010]={0},sell[5010]={0};
//// 
//bool cmp(Node a,Node b){
//	if(a.price==b.price ) return a.isSell>b.isSell;
//	return a.price<b.price;
//}
//int main(){
//	int count=1,num;
//	string str;
//	while(cin>>str){
//		double price,number;
//		if(str=="buy"){
//			cin>>node[count].price>>node[count].number;
//			node[count].isSell=false;
//		}else if(str=="sell"){
//			cin>>node[count].price>>node[count].number;
//			node[count].isSell=true;
//		}else{
//			cin>>num;
//			node[num].price=node[num].number=0;
//		}
//		count++;
//	}
//	sort(node,node+count,cmp);
//	int left=1,high=count-1;
//	long long ans=0,bestans=0,cum=0;
//	double p=0;
//	while(node[left].price==0) left++;
//	for(int i=high;i>=left;i--){
//		if(node[i].isSell==false) cum+=node[i].number;
//		buy[i]=cum;
//	}
//	cum=0;
//	for(int i=left;i<=high;i++){
//		if(node[i].isSell==true) cum+=node[i].number;
//		sell[i]=cum;
//	}
//	for(int i=left;i<=high;i++){
//		ans=min(sell[i],buy[i]);
//		if(ans>=bestans){
//			bestans=ans;
//			p=node[i].price;
//		}
//	}
//	printf("%.2lf %lld",p,bestans);
//	return 0;
//}



//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=5010;
//struct NODE{
//	bool sell;
//	double price;
//	int  num;
//}node[N];
//long long buy[N]={0},sell[N]={0};
//bool cmp(NODE a, NODE b){
//	if(a.price==b.price) return a.sell>b.sell;//�۸���ȣ���sell����buy�� 
//	return a.price<b.price;//�۸񲻵ȣ����ռ۸��С���� 
//}
//int main(){
//	string s;
//	int index=1,num_cancal;
//	while(cin>>s){
//		if(s=="buy"){
//			cin>>node[index].price>>node[index].num;
//			node[index].sell=false;
//		}else if(s=="sell"){
//			cin>>node[index].price>>node[index].num;
//			node[index].sell=true;
//		}else{
//			cin>>num_cancal;
//			node[num_cancal].price=node[num_cancal].num=0;
//		}
//		index++;
//	}
//	sort(node,node+index,cmp);
//	int left=1,high=index-1;
//	long long ans=0,total=0,sum=0;
//	double bestprice=0;
//	while(node[left].price==0) left++;
//	for(int i=high;i>=left;i--){
//		if(!node[i].sell) sum+=node[i].num;
//		buy[i]=sum;
//	}
//	sum=0;
//	for(int i=left;i<=high;i++){
//		if(node[i].sell) sum+=node[i].num;
//		sell[i]=sum;
//	}
//	for(int i=left;i<=high;i++){
//		ans=min(buy[i],sell[i]);
//		if(ans>=total){
//			total=ans;
//			bestprice=node[i].price;
//		}
//	}
//	printf("%.2lf %lld",bestprice,total); 
//	
//}



//201412-4 ���Ź��
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node{
//	int a;
//	int b;
//	int c;
//}; 
//vector<Node>p;
//int n,m;
//int sign[1005];
//bool cmp(const Node s,const Node e){
//	return s.c<e.c;
//}
//int Kruskal(){
//	long long counts=0;
//	for(int i=1;i<n;i++)
//		sign[i]=i;
//	for(int i=0;i<m;i++){
//		int x=sign[p[i].a];
//		int y=sign[p[i].b];
//		if(x!=y){
//			counts+=p[i].c;
//			for(int j=1;j<=n;j++)
//				if(sign[j]==y)
//					sign[j]=x;
//		}
//	}
//	return counts;
//}
//int main(){
//	Node temp;
//	cin>>n>>m;
//	for(int i=0;i<m;i++){
//		cin>>temp.a>>temp.b>>temp.c;
//		p.push_back(temp);
//	}
//	sort(p.begin(),p.end(),cmp);
//	cout<<Kruskal();
//	return 0;
//
//}


#include<iostream>
#include<algorithm> 
#include<vector>
using namespace std;
struct node{
	int a;
	int b;
	int cost;
};
vector<node>p;
int n,m;
int sign[1005];
bool cmp(const node d,const node e){
	return d.cost < e.cost;
}
int Kruskal(){
	long long counts=0;
	for(int i=1;i<n;i++)
		sign[i]=i;
	for(int i=0;i<m;i++){
		int x=sign[p[i].a];
		int y=sign[p[i].b];
		if(x!=y){
			counts+=p[i].cost;
			for(int j=1;j<=n;j++)//!!!!!!!!!!!!!j��Ҫ���i 
				if(sign[j]==y)
					sign[j]=x;
		}
	}
	return counts;
}
int main(){
	node temp;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>temp.a>>temp.b>>temp.cost; 
		p.push_back(temp);
	}
	sort(p.begin(),p.end(),cmp);
	cout<<Kruskal()<<endl;
	return 0;
}


 


