//201604-1 折点计数
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



//201604-2 俄罗斯方块
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


//201604-3 路径解析
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
////		清除.. 
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
////		清除. 
//		num=str.find("/./");
//		while(num!=-1){
//			str.erase(num+1,2);
//			num=str.find("/./");
//		}
////		清除// 
//		num=str.find("//");
//		while(num!=-1){
//			int count=2;
//			while(str[num+count]=='/')
//				count++;
//			
//			str.erase(num,count-1);
//			num=str.find("//");
//		}
////		检查末尾是否是/ 
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
//	getchar();//非常重要！！！ 
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


//201604-4 游戏
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

//201604-4 游戏
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

//201609-1 最大波动
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

//201609-2火车购票
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
//201609-2火车购票
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
//  int n, i, num;  //定义变量
//  cin >> n; //接收输入的正整数n，表示有n组测试数据
//  for(int i=1;i<=20;i++) a[i]=5;
//  while (n--) { //循环n组测试数据
//    int flag=0; //flag表示当前是否有足够的数字序列满足需求
//    cin >> num; //接收输入的正整数num，表示当前需要输出的数字序列长度
//
//    //查找第一个足够长的数字序列
//    for (i = 1; i <= 20; i++) {
//      if (a[i] >= num) { //如果当前数字序列长度大于或等于要求的长度
//        flag = 1; //标记为找到
//        int k = i * 5 - a[i] + 1; //计算数字序列的第一个数字
//        for (int j = 0; j < num; j++) { //循环要求的长度，输出数字序列
//          cout << k++ << ' ';
//        }
//        cout << endl; //一组数字序列输出完毕，换行
//        a[i] -= num; //更新数组中对应的数字序列长度
//        break; //跳出查找最长数字序列的循环
//      }
//    }
//
//    if (flag == 1) continue; //如果找到了足够长的数字序列，则继续下一轮测试
//
//    //如果没有找到足够长的数字序列，则输出所有正在生成的数字序列
//    for (i = 1; i <= 20; i++) {
//      int count=num; //定义变量count表示当前还需输出的数字数量
//      if (a[i] > 0){ //如果当前数字序列长度大于1
//        int k;
//        while (a[i] && count){ //循环当前数字序列，直到数字序列结束或者输出数量到达所需输出长度
//          k = i * 5 - a[i] + 1; //计算数字序列的第一个数字
//          cout << k << ' '; //输出数字
//          a[i]--; //当前数字序列的长度减去1
//          count--; //当前还需输出的数字数量减去1
//        }
//      }
//      if (!count){ //如果输出数量到达要求，跳出循环
//        cout << endl; //一组数字序列输出完毕，换行
//        break; 
//      }
//    }
//  }
//
//  return 0; //结束程序
//}


//201609-3 炉石传说
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
//#define OPONENT 1-player  // 定义常量常常取全大写字母，表示对手是当前玩家的对手（用于表示另一个玩家）
//using namespace std;
//const int RED=0; // 定义常量，0 表示红方
//const int BLACK=1; // 定义常量，1 表示黑方
//struct status{ // 定义牌的状态结构体
//  int life, power; // 生命值和攻击力
//  status(int l,int a){  // 构造函数，接收两个参数分别表示生命值和攻击力
//    life=l;
//    power=a;
//  }
//};
//vector<status> v[2]; // 定义两个 vector 对象，每个元素为一个 status 结构体，表示棋盘上的精灵或英雄牌
//
//int main(){
//  int n, player=RED; // 初始化玩家顺序，从红方开始
//  string action; // 定义一个字符串，表示玩家的操作
//  int position, attack, health; // 定义三个整型变量，表示玩家所召唤精灵牌的位置、生命值和攻击力
//  int attacker, defender; // 定义两个整型变量，表示攻击者和被攻击者的位置
//  v[RED].push_back(status(30,0)); // 初始化红方场上第一张牌（即英雄牌）的状态：30点生命值，0点攻击力
//  v[BLACK].push_back(status(30,0)); // 初始化黑方场上第一张牌（即英雄牌）的状态：30点生命值，0点攻击力
//  cin>>n; // 输入游戏步数 n
//
//  while(n--){ // 处理每一步操作
//    cin>>action; // 输入操作命令
//    if(action=="summon"){ // 如果是召唤牌，需要输入该牌的位置、攻击力和生命值
//      cin>>position>>attack>>health; // 输入牌的位置、攻击力和生命值
//      v[player].insert(v[player].begin()+position, status(health,attack)); // 插入新卡牌到该玩家的 vector 数组中的相应位置
//    }else if(action=="attack"){ // 如果是攻击操作，需要输入攻击者和被攻击者的位置
//      cin>>attacker>>defender; // 输入攻击者和被攻击者的位置
//      v[player][attacker].life-=v[OPONENT][defender].power; // 攻击牌减去被攻击牌的攻击力
//      v[OPONENT][defender].life-=v[player][attacker].power; // 被攻击牌减去攻击牌的攻击力
//      if(v[player][attacker].life<=0) // 如果攻击者死亡了（生命值不大于0）
//        v[player].erase(v[player].begin()+attacker); // 从该玩家的 vector 中移除该卡牌
//      if(defender!=0 && v[OPONENT][defender].life<=0) // 如果被攻击者不是英雄牌，并且生命值少于0
//        v[OPONENT].erase(v[OPONENT].begin()+defender); // 从被攻击方的 vector 中移除该卡牌
//    }else if(action=="end"){ // 如果是回合结束操作
//      player=OPONENT; // 将玩家变更为另一个玩家
//    }
//  }
//
//  if(v[RED][0].life<=0) // 如果红方英雄牌的生命值少于等于0，说明已失败
//    cout<<-1<<endl; // 输出-1表示黑方胜利
//  else if(v[BLACK][0].life<=0) // 如果黑方英雄牌的生命值少于等于0，说明已失败
//    cout<<1<<endl; // 输出1表示红方胜利
//  else 
//    cout<<0<<endl; // 其他情况，输出0表示游戏平局
//
//  cout<<v[RED][0].life<<endl; // 输出红方英雄牌的生命值
//  cout<<v[RED].size()-1; // 输出系统当前红方场上的卡牌数量
//  for(int i=1; i<(int)v[RED].size(); i++)
//    cout<<" "<<v[RED][i].life; // 循环输出红方场上每张牌的生命值
//
//  cout<<endl;
//  cout<<v[BLACK][0].life<<endl; // 输出黑方英雄牌的生命值
//  cout<<v[BLACK].size()-1; // 输出系统当前黑方场上的卡牌数量
//  for(int i=1; i<(int)v[BLACK].size(); i++)
//    cout<<" "<<v[BLACK][i].life; // 循环输出黑方场上每张牌的生命值
//
//  cout<<endl;
//  return 0; // 完成
//}

//#include<iostream>
//#include<vector>
//using namespace std;
//#define OPONENT 1-player//表示对手是当前玩家（用于表示另一玩家） 
//const int RED=0;
//const int BLACK=1;
////牌的状态 
//struct status{
//	int life,power;
//	status(int l,int a){
//		life=l;
//		power=a;
//	}
//};
//定义2个vector对象，每个元素为一个status结构体，表示棋盘上的精灵或英雄牌 
//vector<status> v[2];
//int main(){
//	int n,player=RED;//初始化玩家顺序，从红方开始 
//	string action;
//	
//	int position,attack,health;//精灵数值 
//	int attacker,defender;//攻击者与被攻击者
//	 
//	v[RED].push_back(status(30,0)); //红方英雄 
//	v[BLACK].push_back(status(30,0));
//	
//	cin>>n;
//	while(n--){
//		cin>>action;
//		if(action=="summon"){//召唤牌 
//			cin>>position>>attack>>health;
//			v[player].insert(v[player].begin()+position,status(health,attack)); 
//			
//		}else if(action=="attack"){//攻击操作 
//			cin>>attacker>>defender;//输入位置 
//			v[player][attacker].life-=v[OPONENT][defender].power;
//			v[OPONENT][defender].life-=v[player][attacker].power;
//			if(v[player][attacker].life<=0)//如果攻击者死亡 
//				v[player].erase(v[player].begin()+attacker);
//			if(defender!=0&&v[OPONENT][defender].life<=0)//被攻击的不是英雄，并且生命值少于0 
//				v[OPONENT].erase(v[OPONENT].begin()+defender);  
//		}else if(action=="end"){//回合结束 
//			player=OPONENT;//更换玩家 
//		}
//	}
//	
//	//红方英雄生命值少于0，说明失败 
//	if(v[RED][0].life<=0) cout<<-1<<endl;
//	else if(v[BLACK][0].life<=0) cout<<1<<endl;
//	else cout<<0<<endl;
//	
//	cout<<v[RED][0].life<<endl;
//	cout<<v[RED].size()-1;//红方卡牌数量 
//	for(int i=1;i<(int)v[RED].size();i++)//红方每张牌的生命值 
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
//		}else if(action=="attack "){//不要多打空格 
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


//201609-4 交通规划
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
//// Kruskal 最小生成树算法
//#include<iostream>
//#include<vector>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//const int N=10010;    // 最大点数
//const int M=100010;   // 最大边数
//
//// 定义结构体 Edge：包含起点、终点、边的长度
//struct Edge{
//  int f,t,w;
//  Edge(int f,int t,int w):f(f),t(t),w(w){
//  }
//};
//
//vector<Edge> edges;     // 存储所有的边
//vector<int> G[M];       // 存储每个点出发的边的下标
//int visited[N];         // 记录每个点是否被访问过
//int d[N];               // 记录源点到每个点的最短距离
//
//// 定义结构体 Node：包含点的编号、到源点的最短距离、该点到前驱的边的长度
//struct Node{
//  int u,d,pre;
//  Node(int u=0,int d=0,int pre=0):u(u),d(d),pre(pre){}
//  bool operator < (const Node a) const {
//    if(d==a.d)  // 如果到源点的距离相等，则按照前驱边的长度从小到大排序
//      return pre>a.pre; 
//    return d>a.d;  // 否则按照到源点的距离从小到大排序
//  }
//};
//
//// dijkstra 算法求解最短路径问题
//int solve(){
//  memset(visited,0,sizeof(visited));  // 初始化所有点未访问过
//  for(int i=1;i<=n;i++) d[i]=1<<30;  // 初始化距离为最大值
//  d[1]=0;                           // 源点到源点距离为 0
//  priority_queue<Node> pq;          // 定义一个优先队列（优先队列中存放结构体 Node）
//  pq.push(Node(1,0,0));             // 将源点加入优先队列
//  int ans=0;                        // 记录最终生成树的总长度
//  while(!pq.empty()){               // 只要队列不空
//    Node node=pq.top();              // 取出当前队列中距离源点最近的点
//    pq.pop();
//    int u=node.u;                   // 取出该点的编号
//    if(visited[u]) continue;        // 如果这个点已经被访问过了，那么跳过     
//    visited[u]=1;                   // 标记该点已经被访问
//    ans+=node.pre;                  // 累计生成树的长度
//    for(int i=0;i<G[u].size();i++){  // 遍历当前点能到达的所有点
//      Edge e=edges[G[u][i]];         // 取出这条边
//      int v=e.t;                     // 取出该边的终点
//      if(d[v]>=d[u]+e.w){            // 如果源点到终点的最短距离 > 源点到 u 点的距离 + u 点到 v 点的距离
//        d[v]=d[u]+e.w;                // 更新源点到 v 点的最短距离
//        pq.push(Node(v,d[v],e.w));    // 将 v 点压入队列
//      }
//    }
//  }
//  return ans;                          // 返回最小生成树的长度
//}
//
//int main(){
//  cin>>n>>m;                       // 输入点数和边数
//  for(int i=0;i<m;i++){           // 输入每条边
//    int u,v,w;
//    cin>>u>>v>>w;
//    edges.push_back(Edge(u,v,w));       // 存储 u 点到 v 点的边
//    edges.push_back(Edge(v,u,w));       // 存储 v 点到 u 点的边
//    int k=edges.size();                 // 记录当前有多少条边
//    G[u].push_back(k-2);                // 将u点出发的边(u,v,w)的位置存入G数组
//    G[v].push_back(k-1);                // 将v点出发的边(v,u,w)的位置存入G数组  
//  }
//  cout<<solve();                     // 输出最小生成树的长度
//  return 0;
//}


//201612-1 中间数
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



//201612-2 工资计算
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

//201612-3 权限查询
//#include<bits/stdc++.h>
//using namespace std;
//
//// 权限结构体
//struct P{
//    string name;
//    mutable int level; //level == -1，表示无等级权限
//    // 构造函数
//    P(string str){
//        int k = str.find(':');
//        // 无等级
//        if(k == -1) name = str, level = -1;
//        // 有等级
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
////哈希表：角色 -》权限结构体
//// 读入角色时，权限可能重复读入，用set去重，保留最高权限
//unordered_map<string, set<P>> role, person;
//
//
//int main(){
//    int n;
//    string str;
//    // 读入权限
//    cin >> n;
//    while(n --) cin >> str; // 没用，读掉
//    //读入角色
//    cin >> n;
//    while(n --){
//        string name;
//        int cnt;
//        cin >> name >> cnt;
//        auto& r = role[name];
//        while(cnt --){
//            cin >> str;
//            P t(str); // 用str来初始化结构体t
//            // 无权限
//            if(t.level == -1) r.insert(t);//插入到set中
//            // 有权限
//            else{
//                if(!r.count(t)) r.insert(t);//插入到set中
//                else{
//                    // 在set中找到结构体t，返回迭代器
//                    auto it = r.find(t); 
//                    //更新最大权限
//                    it->level = max(it->level, t.level);
//                }
//            }
//        }
//    }
//    // 读入user
//    cin >> n;
//    while(n --){
//        string name;
//        int cnt;
//        cin >> name >> cnt;
//        auto& p = person[name]; // 将角色权限赋给用户p
//        while(cnt --){
//            string str;
//            cin >> str;
//            for(auto& t :role[str]){// 读取每种权限
//                if(t.level == -1) p.insert(t); //无等级
//                else{//有等级
//                    if(!p.count(t)) p.insert(t);
//                    else{
//                        auto it = p.find(t);
//                        it -> level = max(it->level, t.level);
//                    }
//                }
//            }
//        }
//    }
//    //读入询问
//    cin >> n;
//    while(n --){
//        string user, pr;
//        cin >> user >> pr;
//        P t(pr);// 用权限初始化结构体t
//        auto& p = person[user];
//        // 没有权限
//        if(!p.count(t)) puts("false");
//        else{// 有权限
//            auto it = p.find(t);
//            if(t.level != -1){ //无等级
//                if(it->level >= t.level) puts("true");
//                else puts("false");
//             }
//             else{ // 有等级
//                 if(it->level == -1) puts("true");
//                 else cout << it->level << endl;
//             }
//        }
//    }
//}

/* CCF201612-4 压缩编码 */
 
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
//    // 变量初始化：置为最大值
//    memset(dp, INT_MAX2, sizeof(dp));
// 
//    // 输入数据
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
//    // DP计算
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
//    // 输出结果
//    cout << dp[1][n] << endl;
// 
//    return 0;
//}


/* CCF201612-4 压缩编码 */
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



