//201604-1 �۵����
//#include<iostream>
//using namespace std;
//const int N=1010;
//int a[N];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	int res=0;
//	for(int i=2;i<n;i++){
//		if(a[i]>a[i-1]&&a[i]>a[i+1]) res++;
//		if(a[i]<a[i-1]&&a[i]<a[i+1]) res++;
//	}
//	cout<<res;
//	return 0;
//} 

//#include<iostream>
//using namespace std;
//int a[1010];
//int main(){
//    int n;
//    cin>>n; 
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    int res=0;
//    for(int i=2;i<n;i++){
//        if(a[i]>a[i-1] && a[i]>a[i+1]) res++;
//        if(a[i]<a[i-1] && a[i]<a[i+1]) res++;
//    }
//    cout<<res;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//const int N=1010;
//int a[N];
//int main(){
//	int n;
//	cin>>n;
//	int ans=0;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//	}
//	for(int i=1;i<n-1;i++){
//		if(a[i]>a[i-1]&&a[i]>a[i+1]) ans++;
//		if(a[i]<a[i-1]&&a[i]<a[i+1]) ans++;
//	}
//	cout<<ans<<endl;
//	return 0;
//}



//201604-2 ����˹����
//#include<iostream>
//using namespace std;
//int main(){
//	short A[15][10],B[4][4],local[4][2];
//	int n,i,j,flag=0,row=0,l=0;
//	for(i=0;i<15;i++){
//		for(j=0;j<10;j++){
//			cin>>A[i][j];
//		}
//	}
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			cin>>B[i][j];
//		}
//	}
//	cin>>n;
//	n--;
//	for(i=0;i<4;i++){
//		for(j=0;j<4;j++){
//			if(B[i][j]){
//				local[l][0]=i;
//				local[l][1]=n+j;
//				l++;
//			}
//		}
//	}
//	while(local[0][0]+1!=15 && local[1][0]+1!=15 && local[2][0]+1!=15 && local[3][0]+1!=15 &&
//			A[local[0][0]+1][local[0][1]]!=1 && A[local[1][0]+1][local[1][1]]!=1 &&
//			A[local[2][0]+1][local[2][1]]!=1 && A[local[3][0]+1][local[3][1]]!=1){
//				local[0][0]++;
//				local[1][0]++;
//				local[2][0]++;
//				local[3][0]++; 
//			}
//	for(i=0;i<4;i++){
//		A[local[i][0]][local[i][1]]=1;
//	}
//	for(i=0;i<15;i++){
//		for(j=0;j<10;j++){
//			cout<<A[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int g[20][10];
//int p[4][4];
//int main(){
//	memset(g,1,sizeof(g));
//	for(int i=1;i<=15;i++){
//		for(int j=1;j<=10;j++){
//			cin>>g[i][j];
//		}
//	}
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			cin>>p[i][j];
//		}
//	}
//	int c;
//	cin>>c;
//	for(int r=1;;r++){
//		bool st=false;
//		for(int i=0;i<4;i++){
//			for(int j=0;j<4;j++){
//				if(p[i][j] && g[r+i][c+j]){
//					st=true;
//					break;
//				}
//			}
//			if(st) break;
//		}
//		if(st){
//			r--;
//			for(int i=0;i<4;i++){
//				for(int j=0;j<4;j++){
//					if(p[i][j]) g[r+i][c+j]=p[i][j];
//				}
//			}
//			break;
//		}
//	}
//	for(int i=1;i<=15;i++){
//		for(int j=1;j<=10;j++){
//			cout<<g[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//using namespace std;
//int g[20][10];
//int p[4][4];
//int main(){
//	memset(g,1,sizeof(g));
//	for(int i=1;i<=15;i++){
//		for(int j=1;j<=10;j++){
//			cin>>g[i][j];
//		}
//	}
//	for(int i=0;i<4;i++){
//		for(int j=0;j<4;j++){
//			cin>>p[i][j];
//		}
//	}
//	int c;
//	cin>>c;
//	for(int r=1;;r++){
//		bool st=false;
//		for(int i=0;i<4;i++){
//			for(int j=0;j<4;j++){
//				if(p[i][j] && g[r+i][c+j]){
//					st=true;
//					break;
//				}
//			}
//			if(st) break;
//		}
//		if(st){
//			r--;
//			for(int i=0;i<4;i++){
//				for(int j=0;j<4;j++){
//					if(p[i][j]) g[r+i][c+j]=p[i][j];
//				}
//			}
//			break;
//		}
//	}
//	for(int i=1;i<=15;i++){
//		for(int j=1;j<=10;j++){
//			cout<<g[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//201604-3 ·������
//#include<iostream>
//#include<string>
//#include<cstring>
//using namespace std;
//int main(){
//	int P;
//	string rootdir;
//	cin>>P>>rootdir;
//	getchar();
//	while(P--){
//		string str;
//		getline(cin,str);
//		int num;
//		if(str[0]!='/')
//			str=rootdir+"/"+str;
////		���.. 
//		num=str.find("/../");
//		while(num!=-1){
//			if(num==0)
//				str.erase(num+1,3);
//			else{
//				int snum=str.rfind("/",num-1);
//				str.erase(snum,(num+2)-snum+1);
//			}
//			num=str.find("/../");
//		}
////		���. 
//		num=str.find("/./");
//		while(num!=-1){
//			str.erase(num+1,2);
//			num=str.find("/./");
//		}
////		���// 
//		num=str.find("//");
//		while(num!=-1){
//			int count=2;
//			while(str[num+count]=='/')
//				count++;
//			
//			str.erase(num,count-1);
//			num=str.find("//");
//		}
////		���ĩβ�Ƿ���/ 
//		if(str.size()>1 && str[str.size()-1]=='/')
//			str.erase(str.size()-1);
//		cout<<str<<endl;
//	}
//	return 0;
//} 

//#include<iostream>
//
//using namespace std;
//int main(){
//	int p;
//	string cur_dit;
//	cin>>p>>cur_dit;
//	getchar();
//	while(p--){
//		string str;
//		getline(cin,str);
//		int num;
//		if(str[0]!='/')
////			str+=cur_dit;
//			str=cur_dit+'/'+str;
//			
//		num=str.find("/../");
//		while(num!=-1){
//			if(num==0){
//				str.erase(num,3);
////				str.erase(num+1,3);  
//			}else{
//				int snum=str.rfind('/',num-1);
//
//				str.erase(snum,num+2-snum+1); 
////				str.erase(snum+1,num+2-snum+1);
//			}
//			num=str.find("/../");
//		}
//		
//		num=str.find("/./");
//		while(num!=-1){
//			str.erase(num,2);
////			str.erase(num+1,2); 
//			num=str.find("/./");
//		}
//		
////		num=str.find("///");
//		num=str.find("//"); 
//		while(num!=-1){
//			int count=2;
//			while(str[num+count]=='/')
//				count++;
//
//			
//			str.erase(num,count-1);
//			num=str.find("//"); 
////			num=str.find("///");
//				
//		}
//		if(str.size() >1 && str[str.size() -1]=='/')
//			str.erase(str.size()-1); 
//		
//		cout<<str<<endl;
////		num=str.length()-1;
////		while(num!=-1){
////			if(str[num]=='/')
//				
////		}
//		
////		cout<<str<<endl;
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main(){
//	int p;
//	string cur_dit;
//	cin>>p>>cur_dit;
//	getchar();//�ǳ���Ҫ������ 
//	while(p--){
//		string str;
//		getline(cin,str);
//		int num;
//		if(str[0]!='/')
//			str=cur_dit+'/'+str;
//			
//		num=str.find("/../");
//		while(num!=-1){
//			if(num==0){
//				str.erase(num,3);
//			}else{
//				int snum=str.rfind('/',num-1);
//
//				str.erase(snum,num+2-snum+1); 
//			}
//			num=str.find("/../");
//		}
//		
//		num=str.find("/./");
//		while(num!=-1){
//			str.erase(num,2);
//			num=str.find("/./");
//		}
//		
//		num=str.find("//"); 
//		while(num!=-1){
//			int count=2;
//			while(str[num+count]=='/')
//				count++;
//			
//			str.erase(num,count-1);
//			num=str.find("//"); 
//				
//		}
//		if(str.size() >1 && str[str.size() -1]=='/')
//			str.erase(str.size()-1); 
//		
//		cout<<str<<endl;
//	}
//	return 0;
//}


//201604-4 ��Ϸ
//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N=105;
//int visited[N][N][305];
//struct Node{
//	int x,y,time;
//};
//queue<Node> p;
//struct Direct{
//	int x,y;
//}dir[4]={{-1,0},{0,1},{1,0},{0,-1}};
//
//int bfs(int n,int m){
//	Node s,node,temp;
//	s.x=1;
//	s.y=1;
//	s.time=0;
//	p.push(s);
//	while(!p.empty()){
//		node=p.front();
//		p.pop();
//		if(node.x==n && node.y==m)
//			return node.time;
//		for(int i=0;i<4;i++){
//			temp.x=node.x+dir[i].x;
//			temp.y=node.y+dir[i].y;
//			temp.time=node.time+1;
//			if(visited[temp.x][temp.y][temp.time] || temp.x<1 || temp.x>n || temp.y<1 || temp.y>m)
//				continue;
//			visited[temp.x][temp.y][temp.time]=1;
//			p.push(temp);
//		}
//	}
//	return 0;
//}
//int main(){
//	int n,m,t,r,c,a,b;
//	cin>>n>>m>>t;
//	memset(visited,0,sizeof(visited));
//	for(int i=0;i<t;i++){
//		cin>>r>>c>>a>>b;
//		for(int j=a;j<=b;j++)
//			visited[r][c][j]=1;
//	}
//	int counts=bfs(n,m);
//	cout<<counts<<endl;
//	return 0;
//	
//}

//201604-4 ��Ϸ
//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N=105;
//int visited[N][N][305];
//struct Node{
//	int x,y,time;
//};
//queue<Node> q;
//struct Dir{
//	int x,y;
//}d[4]={{-1,0},{0,1},{1,0},{0,-1}};
//int bfs(int n,int m){
//	Node s,node,temp;
//	s.x=1;
//	s.y=1;
//	s.time=0;
//	q.push(s);
//	while(!q.empty()){
//		node=q.front();
//		q.pop();
//		if(node.x==n && node.y==m)
//			return node.time;
//		for(int i=0;i<4;i++){
//			temp.x=node.x+d[i].x;
//			temp.y=node.y+d[i].y;
//			temp.time=node.time+1;
//			if(visited[temp.x][temp.y][temp.time]) continue;
//			if(temp.x<1 ||temp.x>n || temp.y<1 || temp.y>m) continue;
//			visited[temp.x][temp.y][temp.time]=1;
//			q.push(temp);
//		}
//	}
//	return 0;
//}
//
//int main(){
//	int n,m,t,r,c,a,b;
//	cin>>n>>m>>t;
//	memset(visited,0,sizeof(visited));
//	for(int i=0;i<t;i++){
//		cin>>r>>c>>a>>b;
//		for(int j=a;j<=b;j++){
//			visited[r][c][j]=1;
//		}
//	}
//	int ans=bfs(n,m);
//	cout<<ans<<endl;
//	return 0;
//} 

//201609-1 ��󲨶�
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1010];
//int main(){
//	int n;
//	cin>>n;
//	for(int i=1;i<=n;i++) cin>>a[i];
//	int res=0;
//	for(int i=2;i<=n;i++) res=max(res,abs(a[i]-a[i-1]));
//	cout<<res;
//	return 0;
//} 



//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=1010;
//int a[1010];
//int main(){
//	int n;
//	cin>>n;
//	int ans=0;
//	for(int i=0;i<n;i++){
//		cin>>a[i];
//		if(i&&abs(a[i-1]-a[i])>ans){
//			ans=abs(a[i-1]-a[i]);
//		}
//	}
//	cout<<ans<<endl;
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//int a[1010];
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cin>>a[i];
//    }
//    int res=0;
//    for(int i=2;i<=n;i++){
////        res=max(res,a[i]-a[i-1]);
//		  res=max(res,abs(a[i]-a[i-1]));
//    }
//    cout<<res;
//    return 0;
//}

//201609-2�𳵹�Ʊ
//#include<iostream>
//using namespace std;
//const int N=30;
//int seat[N][N];
//bool is_buyed[N][N];
//int main(){
//	int n;
//	cin>>n;
//	int num=1;
//	for(int i=1;i<=20;i++){
//		for(int j=1;j<=5;j++){
//			seat[i][j]=num;
//			num++;
//		}
//	}
//	while(n--){
//		int p=0;
//		cin>>p;
//		bool flag=false;
//		for(int i=1;i<=20;i++){
//			int bn=0;
//			int c=0;
//			for(int j=1;j<=5;j++){
//				if(is_buyed[i][j]){
//					c=0;
//					bn=j;
//				}
//				else c++;
//			}
//			if(c>=p){
//				flag=true;
//				for(int j=bn+1;j<bn+1+p;j++){
//					is_buyed[i][j]=true;
//					cout<<seat[i][j]<<" ";
//				}
//				cout<<endl;
//				break;
//			}
//		}
//		if(!flag){
//			int cnt=0;
//			for(int i=1;i<=20;i++){
//				for(int j=1;j<=5;j++){
//					if(!is_buyed[i][j]){
//						cnt++;
//						cout<<seat[i][j]<<" ";
//						is_buyed[i][j]=true;
//					}
//					if(cnt==p) break;
//				}
//				if(cnt==p) break;
//			}
//			cout<<endl;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int a[21]={5};
//int main(){
//	int n,i,num;
//	cin>>n;
//	while(n--){
//		int flag=0;
//		cin>>num;
//		for(i=1;i<=20;i++){
//			if(a[i]>=num){
//				flag=1;
//				int k=i*5-a[i]+1;
//				for(int j=0;j<num;j++){
//					cout<<k++<<' ';
//				}
//				cout<<endl;
//				a[i]-=num;
//				break;
//			}
//		}
//		if(flag==1) continue;
//		for(i=1;i<=20;i++){
//			int count=num;
//			if(a[i]>0){
//				int k;
//				while(a[i]&&count){
//					k=i*5-a[i]+1;
//					cout<<k<<' ';
//					a[i]--;
//					count--;
//				}
//			}
//			if(!count){
//				cout<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//} 
//201609-2�𳵹�Ʊ
//#include<iostream>
//#include<cstring>
//using namespace std;
//int a[21];
//int main(){
//	int n,num;
//	cin>>n;
//	for(int i=1;i<=20;i++) a[i]=5;
//	while(n--){
//		cin>>num;
//		int flag=0;
//		for(int i=1;i<=20;i++){
//			if(a[i]>=num){
//				flag=1;
//				int k=i*5-a[i]+1;
//				for(int j=0;j<num;j++){
//					cout<<k++<<' ';
//				}
//				cout<<endl;
//				a[i]-=num;
//				break;
//			}
//		}
//		if(flag==1) continue;
//		for(int i=1;i<=20;i++){
//			int count=num;
//			if(a[i]>0){
//				int k;
//				while(a[i]&&count){
//					k=i*5-a[i]+1;
//					cout<<k<<' ';
//					a[i]--;
//					count--;
//				}
//			}
//			if(!count){
//				cout<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//
//int a[21];
//
//int main(){
//  int n, i, num;  //�������
//  cin >> n; //���������������n����ʾ��n���������
//  for(int i=1;i<=20;i++) a[i]=5;
//  while (n--) { //ѭ��n���������
//    int flag=0; //flag��ʾ��ǰ�Ƿ����㹻������������������
//    cin >> num; //���������������num����ʾ��ǰ��Ҫ������������г���
//
//    //���ҵ�һ���㹻������������
//    for (i = 1; i <= 20; i++) {
//      if (a[i] >= num) { //�����ǰ�������г��ȴ��ڻ����Ҫ��ĳ���
//        flag = 1; //���Ϊ�ҵ�
//        int k = i * 5 - a[i] + 1; //�����������еĵ�һ������
//        for (int j = 0; j < num; j++) { //ѭ��Ҫ��ĳ��ȣ������������
//          cout << k++ << ' ';
//        }
//        cout << endl; //һ���������������ϣ�����
//        a[i] -= num; //���������ж�Ӧ���������г���
//        break; //����������������е�ѭ��
//      }
//    }
//
//    if (flag == 1) continue; //����ҵ����㹻�����������У��������һ�ֲ���
//
//    //���û���ҵ��㹻�����������У�����������������ɵ���������
//    for (i = 1; i <= 20; i++) {
//      int count=num; //�������count��ʾ��ǰ�����������������
//      if (a[i] > 0){ //�����ǰ�������г��ȴ���1
//        int k;
//        while (a[i] && count){ //ѭ����ǰ�������У�ֱ���������н�����������������������������
//          k = i * 5 - a[i] + 1; //�����������еĵ�һ������
//          cout << k << ' '; //�������
//          a[i]--; //��ǰ�������еĳ��ȼ�ȥ1
//          count--; //��ǰ�������������������ȥ1
//        }
//      }
//      if (!count){ //��������������Ҫ������ѭ��
//        cout << endl; //һ���������������ϣ�����
//        break; 
//      }
//    }
//  }
//
//  return 0; //��������
//}


//201609-3 ¯ʯ��˵
//#include<iostream>
//#include<string>
//#include<vector>
//#define OPONENT 1-player
//using namespace std;
//const int RED=0;
//const int BLACK=1;
//struct status{
//	int life,power;
//	status(int l,int a){
//		life=l;
//		power=a;
//	}
//};
//vector<status> v[2];
//
//int main(){
//	int n,player=RED;
//	string action;
//	int position,attack,health;
//	int attacker,defender;
//	v[RED].push_back(status(30,0));
//	v[BLACK].push_back(status(30,0));
//	cin>>n;
//	while(n--){
//		cin>>action;
//		if(action=="summon"){
//			cin>>position>>attack>>health;
//			v[player].insert(v[player].begin()+position,status(health,attack));
//		}else if(action=="attack"){
//			cin>>attacker>>defender;
//			v[player][attacker].life-=v[OPONENT][defender].power;
//			v[OPONENT][defender].life-=v[player][attacker].power;
//			if(v[player][attacker].life <= 0)
//				v[player].erase(v[player].begin()+attacker);
//			if(defender!=0 && v[OPONENT][defender].life <= 0)
//				v[OPONENT].erase(v[OPONENT].begin()+defender);
//		}else if(action=="end"){
//			player=OPONENT;
//		}
//	}
//	if(v[RED][0].life <= 0)
//		cout<<-1<<endl;
//	else if(v[BLACK][0].life <=0)
//		cout<<1<<endl;
//	else 
//		cout<<0<<endl;
//	cout<<v[RED][0].life<<endl;
//	cout<<v[RED].size()-1;
//	for(int i=1;i<(int)v[RED].size();i++)
//		cout<<" "<<v[RED][i].life;
//	cout<<endl;
//	cout<<v[BLACK][0].life<<endl;
//	cout<<v[BLACK].size()-1;
//	for(int i=1;i<(int)v[BLACK].size();i++)
//		cout<<" "<<v[BLACK][i].life;
//	cout<<endl;
//	
//	return 0;
//	
//} 
//
//
//#include<iostream>
//#include<string>
//#include<vector>
//#define OPONENT 1-player  // ���峣������ȡȫ��д��ĸ����ʾ�����ǵ�ǰ��ҵĶ��֣����ڱ�ʾ��һ����ң�
//using namespace std;
//const int RED=0; // ���峣����0 ��ʾ�췽
//const int BLACK=1; // ���峣����1 ��ʾ�ڷ�
//struct status{ // �����Ƶ�״̬�ṹ��
//  int life, power; // ����ֵ�͹�����
//  status(int l,int a){  // ���캯�����������������ֱ��ʾ����ֵ�͹�����
//    life=l;
//    power=a;
//  }
//};
//vector<status> v[2]; // �������� vector ����ÿ��Ԫ��Ϊһ�� status �ṹ�壬��ʾ�����ϵľ����Ӣ����
//
//int main(){
//  int n, player=RED; // ��ʼ�����˳�򣬴Ӻ췽��ʼ
//  string action; // ����һ���ַ�������ʾ��ҵĲ���
//  int position, attack, health; // �����������ͱ�������ʾ������ٻ������Ƶ�λ�á�����ֵ�͹�����
//  int attacker, defender; // �����������ͱ�������ʾ�����ߺͱ������ߵ�λ��
//  v[RED].push_back(status(30,0)); // ��ʼ���췽���ϵ�һ���ƣ���Ӣ���ƣ���״̬��30������ֵ��0�㹥����
//  v[BLACK].push_back(status(30,0)); // ��ʼ���ڷ����ϵ�һ���ƣ���Ӣ���ƣ���״̬��30������ֵ��0�㹥����
//  cin>>n; // ������Ϸ���� n
//
//  while(n--){ // ����ÿһ������
//    cin>>action; // �����������
//    if(action=="summon"){ // ������ٻ��ƣ���Ҫ������Ƶ�λ�á�������������ֵ
//      cin>>position>>attack>>health; // �����Ƶ�λ�á�������������ֵ
//      v[player].insert(v[player].begin()+position, status(health,attack)); // �����¿��Ƶ�����ҵ� vector �����е���Ӧλ��
//    }else if(action=="attack"){ // ����ǹ�����������Ҫ���빥���ߺͱ������ߵ�λ��
//      cin>>attacker>>defender; // ���빥���ߺͱ������ߵ�λ��
//      v[player][attacker].life-=v[OPONENT][defender].power; // �����Ƽ�ȥ�������ƵĹ�����
//      v[OPONENT][defender].life-=v[player][attacker].power; // �������Ƽ�ȥ�����ƵĹ�����
//      if(v[player][attacker].life<=0) // ��������������ˣ�����ֵ������0��
//        v[player].erase(v[player].begin()+attacker); // �Ӹ���ҵ� vector ���Ƴ��ÿ���
//      if(defender!=0 && v[OPONENT][defender].life<=0) // ����������߲���Ӣ���ƣ���������ֵ����0
//        v[OPONENT].erase(v[OPONENT].begin()+defender); // �ӱ��������� vector ���Ƴ��ÿ���
//    }else if(action=="end"){ // ����ǻغϽ�������
//      player=OPONENT; // ����ұ��Ϊ��һ�����
//    }
//  }
//
//  if(v[RED][0].life<=0) // ����췽Ӣ���Ƶ�����ֵ���ڵ���0��˵����ʧ��
//    cout<<-1<<endl; // ���-1��ʾ�ڷ�ʤ��
//  else if(v[BLACK][0].life<=0) // ����ڷ�Ӣ���Ƶ�����ֵ���ڵ���0��˵����ʧ��
//    cout<<1<<endl; // ���1��ʾ�췽ʤ��
//  else 
//    cout<<0<<endl; // ������������0��ʾ��Ϸƽ��
//
//  cout<<v[RED][0].life<<endl; // ����췽Ӣ���Ƶ�����ֵ
//  cout<<v[RED].size()-1; // ���ϵͳ��ǰ�췽���ϵĿ�������
//  for(int i=1; i<(int)v[RED].size(); i++)
//    cout<<" "<<v[RED][i].life; // ѭ������췽����ÿ���Ƶ�����ֵ
//
//  cout<<endl;
//  cout<<v[BLACK][0].life<<endl; // ����ڷ�Ӣ���Ƶ�����ֵ
//  cout<<v[BLACK].size()-1; // ���ϵͳ��ǰ�ڷ����ϵĿ�������
//  for(int i=1; i<(int)v[BLACK].size(); i++)
//    cout<<" "<<v[BLACK][i].life; // ѭ������ڷ�����ÿ���Ƶ�����ֵ
//
//  cout<<endl;
//  return 0; // ���
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//#define OPONENT 1-player//��ʾ�����ǵ�ǰ��ң����ڱ�ʾ��һ��ң� 
//const int RED=0;
//const int BLACK=1;
////�Ƶ�״̬ 
//struct status{
//	int life,power;
//	status(int l,int a){
//		life=l;
//		power=a;
//	}
//};
//����2��vector����ÿ��Ԫ��Ϊһ��status�ṹ�壬��ʾ�����ϵľ����Ӣ���� 
//vector<status> v[2];
//int main(){
//	int n,player=RED;//��ʼ�����˳�򣬴Ӻ췽��ʼ 
//	string action;
//	
//	int position,attack,health;//������ֵ 
//	int attacker,defender;//�������뱻������
//	 
//	v[RED].push_back(status(30,0)); //�췽Ӣ�� 
//	v[BLACK].push_back(status(30,0));
//	
//	cin>>n;
//	while(n--){
//		cin>>action;
//		if(action=="summon"){//�ٻ��� 
//			cin>>position>>attack>>health;
//			v[player].insert(v[player].begin()+position,status(health,attack)); 
//			
//		}else if(action=="attack"){//�������� 
//			cin>>attacker>>defender;//����λ�� 
//			v[player][attacker].life-=v[OPONENT][defender].power;
//			v[OPONENT][defender].life-=v[player][attacker].power;
//			if(v[player][attacker].life<=0)//������������� 
//				v[player].erase(v[player].begin()+attacker);
//			if(defender!=0&&v[OPONENT][defender].life<=0)//�������Ĳ���Ӣ�ۣ���������ֵ����0 
//				v[OPONENT].erase(v[OPONENT].begin()+defender);  
//		}else if(action=="end"){//�غϽ��� 
//			player=OPONENT;//������� 
//		}
//	}
//	
//	//�췽Ӣ������ֵ����0��˵��ʧ�� 
//	if(v[RED][0].life<=0) cout<<-1<<endl;
//	else if(v[BLACK][0].life<=0) cout<<1<<endl;
//	else cout<<0<<endl;
//	
//	cout<<v[RED][0].life<<endl;
//	cout<<v[RED].size()-1;//�췽�������� 
//	for(int i=1;i<(int)v[RED].size();i++)//�췽ÿ���Ƶ�����ֵ 
//		cout<<" "<<v[RED][i].life;
//	cout<<endl;
//	
//	
//	cout<<v[BLACK][0].life<<endl;
//	cout<<v[BLACK].size()-1;
//	for(int i=1;i<(int)v[BLACK].size();i++)
//		cout<<" "<<v[BLACK][i].life;
//	cout<<endl;
//	
//	
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<string> 
//using namespace std;
//#define PNONENT 1-player
//const int RED=0;
//const int BLACK=1;
//struct status{
//	int life,power;
//	status(int l,int p){
//		life=l;
//		power=p;
//	}
//};
//vector<status> v[2];
//int main(){
////	int n,player;
//	int n,player=RED;
//	cin>>n;
//	string action;
//	int position,attack,health;
//	int attacker,defender;
////	v[RED].insert(status(30,0));
//	v[RED].push_back(status(30,0)); 
//	v[BLACK].push_back(status(30,0));
//	
//	while(n--){
////		cin<<action;
//		cin>>action;
//		if(action=="summon"){
//			cin>>position>>attack>>health;
//			v[player].insert(v[player].begin()+position,status(health,attack)); 
//		}else if(action=="attack "){
//			cin>>attacker>>defender;
////			v[player][attacker]-=v[PNONENT][defender];
//			v[player][attacker].life -= v[PNONENT][defender].power;
//			v[PNONENT][defender].life -= v[player][attacker].power;
//			if(v[player][attacker].life<=0)
//				v[player].erase(v[player].begin()+attacker);
//			if(defender!=0 && v[PNONENT][defender].life<=0)
//				v[PNONENT].erase(v[PNONENT].begin()+defender); 
//		}else if(action=="end"){
//			player=PNONENT;
//		}
//	}
//	
////	if(v[RED].life<=0) cout<<-1<<endl;
//	if(v[RED][0].life<=0) 
//		cout<<-1<<endl;
//	else if(v[BLACK][0].life<=0) 
//		cout<<1<<endl;
//	else 
//		cout<<0<<endl;
//	
////	cout<<v[RED].life<<endl;
//	cout<<v[RED][0].life<<endl;
//	cout<<v[RED].size()-1;
////	for(int i=v[RED].begin();i<v[RED].size()-1;i++)
//	for(int i=1;i<(int)v[RED].size();i++)
//		cout<<" "<<v[RED][i].life;  
//	cout<<endl;
//	
//	cout<<v[BLACK][0].life<<endl;
//	cout<<v[BLACK].size()-1;
//	for(int i=1;i<(int)v[BLACK].size();i++)
//		cout<<" "<<v[BLACK][i].life;  
//	cout<<endl;
//	
//	return 0; 
//} 



//#include<iostream>
//#include<vector>
//#include<string> 
//using namespace std;
//#define OPONENT 1-player
//const int RED=0;
//const int BLACK=1;
//struct status{
//	int life,power;
//	status(int l,int p){
//		life=l;
//		power=p;
//	}
//};
//vector<status> v[2];
//int main(){
//	int n,player=RED;
//	cin>>n;
//	string action;
//	int position,attack,health;
//	int attacker,defender;
//	v[RED].push_back(status(30,0)); 
//	v[BLACK].push_back(status(30,0));
//	
//	while(n--){
//		cin>>action;
//		if(action=="summon"){
//			cin>>position>>attack>>health;
//			v[player].insert(v[player].begin()+position,status(health,attack)); 
//		}else if(action=="attack "){//��Ҫ���ո� 
//			cin>>attacker>>defender;
//			v[player][attacker].life -= v[OPONENT][defender].power;
//			v[OPONENT][defender].life -= v[player][attacker].power;
//			if(v[player][attacker].life<=0)
//				v[player].erase(v[player].begin()+attacker);
//			if(defender!=0 && v[OPONENT][defender].life<=0)
//				v[OPONENT].erase(v[OPONENT].begin()+defender); 
//		}else if(action=="end"){
//			player=OPONENT;
//		}
//	}
//	
//
//	if(v[RED][0].life<=0) 
//		cout<<-1<<endl;
//	else if(v[BLACK][0].life<=0) 
//		cout<<1<<endl;
//	else 
//		cout<<0<<endl;
//	
//	cout<<v[RED][0].life<<endl;
//	cout<<v[RED].size()-1;
//	for(int i=1;i<(int)v[RED].size();i++)
//		cout<<" "<<v[RED][i].life;  
//	cout<<endl;
//	
//	cout<<v[BLACK][0].life<<endl;
//	cout<<v[BLACK].size()-1;
//	for(int i=1;i<(int)v[BLACK].size();i++)
//		cout<<" "<<v[BLACK][i].life;  
//	cout<<endl;
//	
//	return 0; 
//} 


//201609-4 ��ͨ�滮
//#include <iostream>
//#include<cstdio>
//#include<vector>
//#include<cstring>
//#include<queue>
//using namespace std;
//
//const int maxn=10000+10;
//const int maxm=100000+10;
//int n,m;
//struct Edge{
//	int f,t,w;
//	Edge(int f,int t,int w):f(f),t(t),w(w){
//	}
//};
//vector<int> G[maxn];
//vector<Edge> edges;
//int vis[maxn];
//int d[maxn];
//struct Node{
//	int u,d,pre;
//	Node(int u=0,int d=0,int pre=0):u(u),d(d),pre(pre){}
//	bool operator<(const Node a)const{
//		if(d==a.d)
//			return pre>a.pre;
//		return d>a.d;
//	}
//};
// 
//int solve(){
//	memset(vis,0,sizeof(vis));
//	for(int i=1;i<=n;i++) d[i]=1<<30;
//	d[1]=0;
//	priority_queue<Node> pq;
//	pq.push(Node(1,0,0));
//	int ans=0;
//	while(!pq.empty()){
//		Node node=pq.top();pq.pop();
//		int u=node.u;
//		if(vis[u]) continue;
//		vis[u]=1;
//		ans+=node.pre;
//		for(int i=0;i<G[u].size();i++){
//			Edge e=edges[G[u][i]];
//			int v=e.t;
//			if(d[v]>=d[u]+e.w){
//				d[v]=d[u]+e.w;
//				pq.push(Node(v,d[v],e.w));
//			}
//		}	
//	}
//	return ans;
//}
// 
//int main(){
//	cin>>n>>m; 
//    for(int i=0;i<m;i++){
//    	int u,v,w;
//    	cin>>u>>v>>w;
//    	edges.push_back(Edge(u,v,w));
//    	edges.push_back(Edge(v,u,w));
//    	int k=edges.size();
//    	G[u].push_back(k-2);
//    	G[v].push_back(k-1);
//	}
//	cout<<solve();
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N=10010;
//const int M=100010;
//int n,m;
//
//struct Edge{
//	int f,t,w;
//	Edge(int f,int t,int w):f(f),t(t),w(w){
//	}
//};
//vector<Edge> edges;
//vector<int> G[M];
//int visited[N];
//int d[N];
//struct Node{
//	int u,d,pre;
//	Node(int u=0,int d=0,int pre=0):u(u),d(d),pre(pre){}
//	bool operator < (const Node a) const {
//		if(d==a.d) return pre>a.pre;
//		return d>a.d;
//	}
//};
//int solve(){
//	memset(visited,0,sizeof(visited));
//	for(int i=1;i<=n;i++) d[i]=1<<30;
//	d[1]=0;
//	priority_queue<Node> pq;
//	pq.push(Node(1,0,0));
//	int ans=0;
//	while(!pq.empty()){
//		Node node=pq.top();
//		pq.pop();
//		int u=node.u;
//		if(visited[u]) continue;
//		visited[u]=1;
//		ans+=node.pre;
//		for(int i=0;i<G[u].size();i++){
//			Edge e=edges[G[u][i]];
//			int v=e.t;
//			if(d[v]>=d[u]+e.w){
//				d[v]=d[u]+e.w;
//				pq.push(Node(v,d[v],e.w));
//			}
//		}
//	}
//	return ans;
//}
//
//int main(){
//	cin>>n>>m;
//	for(int i=0;i<m;i++){
//		int u,v,w;
//		cin>>u>>v>>w;
//		edges.push_back(Edge(u,v,w));
//		edges.push_back(Edge(v,u,w));
//		int k=edges.size();
//		G[u].push_back(k-2);
//		G[v].push_back(k-1);   
//	}
//	cout<<solve();
//	return 0;
//}
//
//// Kruskal ��С�������㷨
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//const int N=10010;    // ������
//const int M=100010;   // ������
//
//// ����ṹ�� Edge��������㡢�յ㡢�ߵĳ���
//struct Edge{
//  int f,t,w;
//  Edge(int f,int t,int w):f(f),t(t),w(w){
//  }
//};
//
//vector<Edge> edges;     // �洢���еı�
//vector<int> G[M];       // �洢ÿ��������ıߵ��±�
//int visited[N];         // ��¼ÿ�����Ƿ񱻷��ʹ�
//int d[N];               // ��¼Դ�㵽ÿ�������̾���
//
//// ����ṹ�� Node��������ı�š���Դ�����̾��롢�õ㵽ǰ���ıߵĳ���
//struct Node{
//  int u,d,pre;
//  Node(int u=0,int d=0,int pre=0):u(u),d(d),pre(pre){}
//  bool operator < (const Node a) const {
//    if(d==a.d)  // �����Դ��ľ�����ȣ�����ǰ���ߵĳ��ȴ�С��������
//      return pre>a.pre; 
//    return d>a.d;  // �����յ�Դ��ľ����С��������
//  }
//};
//
//// dijkstra �㷨������·������
//int solve(){
//  memset(visited,0,sizeof(visited));  // ��ʼ�����е�δ���ʹ�
//  for(int i=1;i<=n;i++) d[i]=1<<30;  // ��ʼ������Ϊ���ֵ
//  d[1]=0;                           // Դ�㵽Դ�����Ϊ 0
//  priority_queue<Node> pq;          // ����һ�����ȶ��У����ȶ����д�Žṹ�� Node��
//  pq.push(Node(1,0,0));             // ��Դ��������ȶ���
//  int ans=0;                        // ��¼�������������ܳ���
//  while(!pq.empty()){               // ֻҪ���в���
//    Node node=pq.top();              // ȡ����ǰ�����о���Դ������ĵ�
//    pq.pop();
//    int u=node.u;                   // ȡ���õ�ı��
//    if(visited[u]) continue;        // ���������Ѿ������ʹ��ˣ���ô����     
//    visited[u]=1;                   // ��Ǹõ��Ѿ�������
//    ans+=node.pre;                  // �ۼ��������ĳ���
//    for(int i=0;i<G[u].size();i++){  // ������ǰ���ܵ�������е�
//      Edge e=edges[G[u][i]];         // ȡ��������
//      int v=e.t;                     // ȡ���ñߵ��յ�
//      if(d[v]>=d[u]+e.w){            // ���Դ�㵽�յ����̾��� > Դ�㵽 u ��ľ��� + u �㵽 v ��ľ���
//        d[v]=d[u]+e.w;                // ����Դ�㵽 v �����̾���
//        pq.push(Node(v,d[v],e.w));    // �� v ��ѹ�����
//      }
//    }
//  }
//  return ans;                          // ������С�������ĳ���
//}
//
//int main(){
//  cin>>n>>m;                       // ��������ͱ���
//  for(int i=0;i<m;i++){           // ����ÿ����
//    int u,v,w;
//    cin>>u>>v>>w;
//    edges.push_back(Edge(u,v,w));       // �洢 u �㵽 v ��ı�
//    edges.push_back(Edge(v,u,w));       // �洢 v �㵽 u ��ı�
//    int k=edges.size();                 // ��¼��ǰ�ж�������
//    G[u].push_back(k-2);                // ��u������ı�(u,v,w)��λ�ô���G����
//    G[v].push_back(k-1);                // ��v������ı�(v,u,w)��λ�ô���G����  
//  }
//  cout<<solve();                     // �����С�������ĳ���
//  return 0;
//}


//201612-1 �м���
//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N=1000;
//int valcount[N+1];
//int main(){
//	int n,val;
//	memset(valcount,0,sizeof(valcount));
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>val;
//		valcount[val]++;
//	}
//	int ans,mid=(n+1)/2,count=0,left;
//	for(int i=1;i<=N;i++)
//		if(count+valcount[i]>=mid){
//			left=count;
//			count=0;
//			ans=i;
//		}else{
//			count+=valcount[i];
//		}
//	
//	if(left==count)
//		cout<<ans<<endl;
//	
//	else
//		cout<< -1 <<endl;
//	
//	return 0;
//}

//
//#include<iostream>
//#include<cstring>
//using namespace std;
//int valcount[1010];
//int main(){
//    int n;
//    cin>>n;
//    int val;
//    memset(valcount,0,sizeof(valcount));
//    for(int i=0;i<n;i++){
//        cin>>val;
//        valcount[val]++;
//    }
//    int ans,mid=(n+1)/2,count=0,left;
//    for(int i=0;i<=1010;i++){
//        if(count+valcount[i]>=mid){
//           left=count;
//           count=0;
//           ans=i;
////           break; 
//        }else{
//              count+=valcount[i];
//        }
//    }
//    if(left==count){
//       cout<<ans<<endl;
//    }else{
//          cout<<-1<<endl;
//    }
//    
//    return 0;
//}



//201612-2 ���ʼ���
//#include<iostream>
//#include<cstring>
//#include<algorithm>
//using namespace std;
//int caltax(int s){
//	int tax=0;
//	if(s<=3500) return 0;
//	else{
//		int a=s-3500;
//		int c[8]={0,1500,4500,9000,35000,55000,80000,0x3f3f3f};
//		float d[8]={0,0.03,0.1,0.2,0.25,0.3,0.35,0.45};
//		for(int i=1;i<8;i++){
//			if(a>=c[i-1]){
//				tax+=(min(c[i]-c[i-1],a-c[i-1])*d[i]);
//			}
//			else	break;
//		}
//	}
//	return tax;
//} 
//int main(){
//	int t;
//	cin>>t;
//	for(int s=100;s<=200000;s+=100){
//		if(t==s-caltax(s)){
//			cout<<s;
//			break;
//		}
//	}
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int tax(int x){
//	int a[8]={0,1500,4500,9000,35000,55000,80000,0x3f3f3f};
//	float b[8]={0,0.03,0.1,0.2,0.25,0.3,0.35,0.45};
//	int tax=0;
//	if(x<=3500){
//		return 0;
//	}else{
//		int n=x-3500;
//		for(int j=1;j<8;j++){
//			if(n>a[j-1]){
//				tax+=(min(a[j]-a[j-1],n-a[j-1]))*b[j];
//			}
//			else break;
//		}
//	} 
//	return tax;
//}
//int main(){
//	int t;
//	cin>>t; 
//	for(int s=100;s<=200000;s+=100){
//		if(t==s-taxsi)){
//			cout<<s;
//			break;
//		}
//	}
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int caltax(int s){
//	int tax=0;
////	if(<=3500){
//	if(s<=3500){
//		return 0;
//	}else{
//		int a=s-3500;
//		int c[8]={0,1500,4500,9000,35000,55000,80000,0x3f3f3f};
//		float t[8]={0,0.03,0.1,0.2,0.25,0.3,0.35,0.45};
//		for(int i=1;i<8;i++){
//			if(a>=c[i-1]){
//				tax+=(min(c[i]-c[i-1],a-c[i-1])*t[i]);
////				tax+=min(c[i]-c[i-1],a-c[i-1]*t[i]);
//			}
//			else break;
//		}
//	}
//	return tax;
//}
//int main(){
//	int t;
//	cin>>t;
//	for(int s=100;s<=200000;s+=100){
//		if(t==s-caltax(s)){
//			cout<<s;
//			break;
//		}
//	}
//	return 0;
//}

//201612-3 Ȩ�޲�ѯ
//#include<bits/stdc++.h>
//using namespace std;
//
//// Ȩ�޽ṹ��
//struct P{
//    string name;
//    mutable int level; //level == -1����ʾ�޵ȼ�Ȩ��
//    // ���캯��
//    P(string str){
//        int k = str.find(':');
//        // �޵ȼ�
//        if(k == -1) name = str, level = -1;
//        // �еȼ�
//        else{
//            name = str.substr(0, k);
//            level=str[str.find(':')+1]-'0';
////            level = stoi(str.substr(k+1));
//        }
//    }
//    bool operator<(const P& t)const{
//        return name < t.name;
//    }
//};
////��ϣ����ɫ -��Ȩ�޽ṹ��
//// �����ɫʱ��Ȩ�޿����ظ����룬��setȥ�أ��������Ȩ��
//unordered_map<string, set<P>> role, person;
//
//
//int main(){
//    int n;
//    string str;
//    // ����Ȩ��
//    cin >> n;
//    while(n --) cin >> str; // û�ã�����
//    //�����ɫ
//    cin >> n;
//    while(n --){
//        string name;
//        int cnt;
//        cin >> name >> cnt;
//        auto& r = role[name];
//        while(cnt --){
//            cin >> str;
//            P t(str); // ��str����ʼ���ṹ��t
//            // ��Ȩ��
//            if(t.level == -1) r.insert(t);//���뵽set��
//            // ��Ȩ��
//            else{
//                if(!r.count(t)) r.insert(t);//���뵽set��
//                else{
//                    // ��set���ҵ��ṹ��t�����ص�����
//                    auto it = r.find(t); 
//                    //�������Ȩ��
//                    it->level = max(it->level, t.level);
//                }
//            }
//        }
//    }
//    // ����user
//    cin >> n;
//    while(n --){
//        string name;
//        int cnt;
//        cin >> name >> cnt;
//        auto& p = person[name]; // ����ɫȨ�޸����û�p
//        while(cnt --){
//            string str;
//            cin >> str;
//            for(auto& t :role[str]){// ��ȡÿ��Ȩ��
//                if(t.level == -1) p.insert(t); //�޵ȼ�
//                else{//�еȼ�
//                    if(!p.count(t)) p.insert(t);
//                    else{
//                        auto it = p.find(t);
//                        it -> level = max(it->level, t.level);
//                    }
//                }
//            }
//        }
//    }
//    //����ѯ��
//    cin >> n;
//    while(n --){
//        string user, pr;
//        cin >> user >> pr;
//        P t(pr);// ��Ȩ�޳�ʼ���ṹ��t
//        auto& p = person[user];
//        // û��Ȩ��
//        if(!p.count(t)) puts("false");
//        else{// ��Ȩ��
//            auto it = p.find(t);
//            if(t.level != -1){ //�޵ȼ�
//                if(it->level >= t.level) puts("true");
//                else puts("false");
//             }
//             else{ // �еȼ�
//                 if(it->level == -1) puts("true");
//                 else cout << it->level << endl;
//             }
//        }
//    }
//}

/* CCF201612-4 ѹ������ */
 
//#include <iostream>
//#include <cstring>
// 
//using namespace std;
// 
//const int INT_MAX2 = 0x7F7F7F7F;
//const int N = 1000;
// 
//int v[N+1];
//int sum[N+1];
//int dp[N+1][N+1];
//int p[N+1][N+1];
// 
//int main()
//{
//    int n;
// 
//    // ������ʼ������Ϊ���ֵ
//    memset(dp, INT_MAX2, sizeof(dp));
// 
//    // ��������
//    cin >> n;
//    sum[0] = 0;
//    for(int i=1; i<=n; i++) {
//        cin >> v[i];
// 
//        sum[i] = sum[i-1] + v[i];
//        dp[i][i] = 0;
//        p[i][i] = i;
//    }
// 
//    // DP����
//    for(int len=2; len<=n; len++)
//        for(int i=1; i+len-1<=n; i++) {
//            int j = i + len - 1;
// 
//            for(int k=p[i][j-1]; k<=p[i+1][j]; k++) {
//                int val = dp[i][k] + dp[k+1][j] + sum[j] - sum[i-1];
//                if(dp[i][j]>val) {
//                    dp[i][j] = val;
//                    p[i][j] = k;
//                }
//            }
//        }
// 
//    // ������
//    cout << dp[1][n] << endl;
// 
//    return 0;
//}


/* CCF201612-4 ѹ������ */
#include<iostream>
#include<cstring> 
using namespace std;
const int INT_MAX2=0x7F7F7F7F;
const int N=1000;
int dp[N+1][N+1];
int v[N+1];
int sum[N+1];
int p[N+1][N+1];
int main(){
	int n;
	memset(dp,INT_MAX2,sizeof(dp));
	cin>>n;
	sum[0]=0;
	for(int i=1;i<=n;i++){
		cin>>v[i];
		sum[i]=sum[i-1]+v[i];
		dp[i][i]=0;
		p[i][i]=i;
	}
	
	for(int len=2;len<=n;len++){
		for(int i=1;i+len-1<=n;i++){
			int j=i+len-1;
			for(int k=p[i][j-1];k<=p[i+1][j];k++){
				int val=dp[i][k]+dp[k+1][j]+sum[j]-sum[i-1];
				if(dp[i][j]>val){
					dp[i][j]=val;
					p[i][j]=k;
				}
			}
		}
	}
	cout<<dp[1][n]<<endl;
	return 0;
	
}



