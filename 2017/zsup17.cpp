//201703-4 �����޽�
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=4e6+10;
//int p[N];
//struct Edge{
//	int a,b,c;
//	bool operator < (const Edge x)const{
//	return c<x.c;
//	}
//}edges[N];
//int find(int x){
//	if(x!=p[x]){
//		p[x]=find(p[x]);
//	}
//	return p[x];
//}
//int main(){
//	int n,m;
//	cin>>n>>m;
//	for(int i=1;i<=n;i++) p[i]=i;
//	for(int i=1;i<=m;i++){
//		int a,b,c;
//		cin>>a>>b>>c;
//		edges[i]={a,b,c};
//	}
//	sort(edges+1,edges+m+1);
//	for(int i=1;i<=m;i++){
//		int a=edges[i].a;
//		int b=edges[i].b;
//		int c=edges[i].c;
//		a=find(a);
//		b=find(b);
//		if(a!=b){
//			p[a]=b;
//			if(find(1)==find(n)){
//				cout<<c<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}

////���� 201709-1
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int ans=0;
//	if(n/50){
//		ans+=((n/50)*7);
//		n%=50;
//	}
//	if(n/30){
//		ans+=((n/30)*4);
//		n%=30;
//	}
//	ans+=(n/10);
//	cout<<ans;
//	return 0;
//}
//#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//struct Node {
//	int key;  //����ĸ�Կ�� 
//	int time;
//	int sign;  //����ǽ�(0)���ǻ�(1) 
//}node[20005];
//int num[1005];
//
//bool cmp(Node a, Node b) 
//{
//	if(a.time != b.time)  //����ͬһʱ�䣬��ʱ���� 
//		return a.time < b.time;
//	else
//	{
//		if(a.sign != b.sign)  //ͬһʱ�䣬�Ȼ�Կ�� 
//			return a.sign > b.sign;
//		else  //ͬһʱ�䣬���ǻ�Կ�ף���ԽС���Ȼ� 
//			return a.key < b.key;		 
//	}
//}
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	for(int i=1; i<=N; i++)
//		num[i] = i;
//	int n = 0;
//	while(K--)
//	{
//		int w, s, c;
//		cin >> w >> s >>c;
//		node[n].key = w;
//		node[n].time = s;
//		node[n++].sign = 0;  //�� 
//		node[n].key = w;
//		node[n].time = s+c;
//		node[n++].sign = 1;  //�� 
//	}
//	sort(node, node+n, cmp);
//	for(int i=0; i<n; i++)
//	{
//		if(node[i].sign)  //��Կ�� 
//		{
//			for(int j=1; j<=N; j++)
//				if(!num[j])
//				{
//					num[j] = node[i].key;
//					break;	
//				}
//		} 
//		else  //��Կ��
//		{
//			for(int j=1; j<=N; j++)
//			{
//				if(num[j] == node[i].key)
//					num[j] = 0;
//			}	
//		} 
//	}
//	for(int i=1; i<=N; i++)	
//		cout << num[i] << " ";
//	return 0;
//}


//����Կ�׺�	201709-2
//#include<bits/stdc++.h>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int num[1005];
//struct Node{
//	int key;
//	int time;
//	int sign;//��0 
//}node[20002];
//bool cmp(Node a,Node b){
//	if(a.time !=b.time )
//		return a.time <b.time;//ʱ��������� 
//	else{
//		if(a.sign !=b.sign)	return a.sign >b.sign;//������ 
//		else return a.key<b.key;//���С���� 
//	}
//}
//int main(){
//	int N,K;
//	cin>>N>>K;
//	for(int i=1;i<=N;i++) num[i]=i;
//	int n=0;
//	while(K--){
//		int w,s,c;
//		cin>>w>>s>>c;//!!!!!��Ҫ©д 
//		node[n].key =w;
//		node[n].time =s;
//		node[n++].sign=0;
//		
//		node[n].key =w;
//		node[n].time =s+c;
//		node[n++].sign =1;		
//	}
//	sort(node,node+n,cmp);
//
//	for(int i=0;i<n;i++){
//		if(node[i].sign){//�� 
//			for(int j=1;j<=N;j++)
//				if(!num[j]){
//					num[j]=node[i].key;
//					break;
//				}	
//		}
//		else{
//			for(int j=1;j<=N;j++){
//				if(num[j]==node[i].key)
//					num[j]=0;
//				
//			}
//		} 
//	}
//	
//	for(int i=1;i<=N;i++)
//		cout<<num[i]<<" ";
//	return 0;
//} 
//	


//#include <stdio.h>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct Action {
//    int room;
//    int time;
//    int type; // 0:put, 1:get
//    Action(int room_, int time_, int type_) : room(room_), time(time_), type(type_) {}
//    bool operator<(const Action &other) const {
//        if(time<other.time) return true;
//        else if(time==other.time && type<other.type) return true;
//        else if(time==other.time && type==other.type && room<other.room) return true;
//        return false;
//    }
//};
//
//int main() {
//    int N, K;
//    scanf("%d%d", &N, &K);
//    vector<Action> actions;
//    vector<int> states(N+1);
//    for(int n=1; n<=N; n++) states[n] = n;
//    
//    for(int k=0; k<K; k++) {
//        int room, begin, length;
//        scanf("%d%d%d", &room, &begin, &length);
//        actions.push_back(Action(room, begin, 1));
//        actions.push_back(Action(room, begin+length, 0));
//    }
//    sort(actions.begin(), actions.end());
//    for(int i=0; i<actions.size(); i++) {
//        Action &act = actions[i];
//        if(act.type == 0) { // put
//            for(int n=1; n<=N; n++) {
//                if(states[n] == -1) {
//                    states[n] = act.room;
//                    break;
//                }
//            }
//        }
//        else { // get
//            for(int n=1; n<=N; n++) {
//                if(states[n] == act.room) {
//                    states[n] = -1;
//                    break;
//                }
//            }
//        }
//    }
//    for(int n=1; n<=N; n++) {
//        printf("%d ", states[n]);
//    }
//}

//JSON��ѯ 201709-3 
//#include <iostream>
//#include <cassert>
//#include <map>
//using namespace std;
//

//string parseString(string &str, int &i) {
//    string tmp;
//    if(str[i] == '"') i++;
//    else assert(0);
//    
//    while(i < str.size()) {
//        if(str[i] == '\\') {
//            i++;
//            tmp += str[i];
//            i++;
//        }
//        else if(str[i] == '"') {
//            break;
//        }
//        else {
//            tmp += str[i];
//            i++;
//        }
//    }
//    
//    if(str[i] == '"') i++;
//    else assert(0);
//    
//    return tmp;
//}

//

//void parseObject(string &str, string prefix, map<string, string> &dict, int &i) {
//    if(str[i] == '{') i++;
//    else assert(0);
//    
//    string key, value;
//    bool strType = false; // false:key, true:value
//    while(i < str.size()) {
//        if(str[i] == '"') {
//            string tmp = parseString(str, i);
//            if(strType) { // value
//                value = tmp;
//                //cout << key << " " << value << "\n";
//                dict[key] = value;
//            }
//            else { // key
//                key = prefix + (prefix==""?"":".") + tmp;
//            }
//        }
//        else if(str[i] == ':') {
//            strType = true;
//            i++;
//        }
//        else if(str[i] == ',') {
//            strType = false;
//            i++;
//        }
//        else if(str[i] == '{') {
//            dict[key] = ""; 
//            parseObject(str, key, dict, i);
//        }
//        else if(str[i] == '}') {
//            break;
//        }
//        else {
//            i++;
//        }
//    }
//    
//    if(str[i] == '}') i++;
//    else assert(0);
//}

//
//int main() {
//    int N, M;
//    cin >> N >> M;
//    string json;
//    if(cin.peek()=='\n') cin.ignore();
//    for(int n=0; n<N; n++) {
//        string tmp;
//        getline(cin, tmp);
//        json += tmp;
//    }
//    map<string, string> dict;
//    int i = 0;
//    parseObject(json, "", dict, i);
//    string query;
//    for(int m=0; m<M; m++) {
//        getline(cin, query);
//        if(dict.find(query) == dict.end()) {
//            cout << "NOTEXIST\n";
//        }
//        else {
//            if(dict[query] == "") {
//                cout << "OBJECT\n";
//            }
//            else {
//                cout << "STRING " << dict[query] << "\n";
//            }
//        }
//    }
//}

//#include<iostream>
//#include<map>
//#include<cassert>
//using namespace std;


//string parseString(string &str,int &idx){
//	string tmp;
//	if(str[idx]=='"') idx++;
//	else assert(0);
//	
//	while(idx<str.size()){
//		if(str[idx]=='\\' ){
//			idx++;
//			tmp+=str[idx];
//			idx++;
//		}
//		else if(str[idx]=='"'){
//			break;
//		}
//		else{
//			tmp+=str[idx];
//			idx++;
//		}
//	}
//	if(str[idx]=='"') idx++;
//	else assert(0);
//	return tmp;
//}
//
//
//
//void  parseObject(string &str,string prefix, map<string,string> &dict,int &idx){
//	if(str[idx]=='{') idx++;
//	else assert(0);
//	
//	string key,value;
//	bool strType=false;//false��Ӧkey��true��Ӧvalue 
//	while(idx<str.size()){
//		if(str[idx]=='"'){//������������key-value 
//			string tmp=parseString(str,idx);
//			if(strType){
//				value=tmp;
//				dict[key]=value;
//			}
//			else{
//				key=prefix+(prefix==""?"":".") + tmp;
//			}
//		}else if(str[idx]==':'){//��������˵�����ڿ�ʼ����value 
//			strType=true;
//			idx++;
//		}else if(str[idx]==','){//��������˵��value������ɣ���ʼ������һ��key 
//			strType=false;
//			idx++;
//		}else if(str[idx]=='{'){//����{�����ǽ����Ӷ������������Ӷ����key����Ϊ���ַ��� 
//			dict[key]="";
//			parseObject(str,key,dict,idx);//�ݹ���� 
//		}else if(str[idx]=='}'){
//			break;
//		}else{
//			idx++;
//		} 
//	}
//	if(str[idx]=='}') idx++;
//	else assert(0);
//	
//}
//
//
//
//int main(){
//	int N,M;
//	cin>>N>>M;
//	string json;
//	if(cin.peek()=='\n') cin.ignore();//����س� 
//	for(int n=0;n<N;n++){
//		string tmp;
//		getline(cin,tmp);
//		json+=tmp;
//	}
//	map<string,string> dict;
//	int idx=0;
//	parseObject(json,"",dict,idx);
//	string query;
//	for(int m=0;m<M;m++){
//		getline(cin,query);
//		if(dict.find(query)==dict.end()){//��ѯ���� 
//			cout<<"NOTEXIST"<<endl;
//		}else{
//			if(dict[query]==""){
//				cout<<"OBJECT"<<endl;
//			}else {
//				cout<<"STRING "<<dict[query]<<endl;
//			}
//		}
//	}
//	
//}

//#include<iostream>
//#include<map>
//#include<cassert>
//using namespace std;
//
//string parseString(string &str, int &idx){
//	string temp;
//	if(str[idx]=='"') idx++;
//	else assert(0);
//	
//	while(idx<str.size()){
// 
//	if(str[idx]=='\\'){
//		idx++;
//		temp+=str[idx];
//		idx++;
//	}else if(str[idx]=='"'){
//		break;
//	}else{
//		temp+=str[idx];
//		idx++;
//	}
//	if(str[idx]=='"') idx++;
//	else assert(0);
//	return temp;
//}
//
//	if(str[idx]=='{') idx++;              ;
//	else assert(0);
//	
//	string key,value;
//	string strType=false;//false-key,true-value;
//	while(idx<str.size()){
//		if(str[idx]=='"') idx++;
////		else assert(0);
////		string tmp=parseString(str,string);
//		string temp=parseString(str,idx)
//		
//		if(strType){
//			value=temp;
//			dict[key]=value;
//		}else{
//			key=pre+(pre==""?"":".")+temp;
//		}
//		else if(str[idx]==':'){
//			strType=true;
//			idx++;
//		}
//		else if(str[idx]==','){
//			strType=false;
//			idx++;
//			
//		}else if(str[idx]=='{'){
//			dict[key]="";
//			parseObject(str,"",dict,idx);
//		}
//		else if(str[idx]=='}'){
//			break;
//		}
//		else{
//			idx++;
//		}
//	}
//	if(str[idx]=='}') idx++;
//	else asseret(0);
//}
//int main(){
//	int N,M,idx=0;
//	cin>>b>>m;
//	if(cin.peek()=="\n") cin.ignore();
//	string json;
//	for(int i=0;i<N;i++){
//		string temp;
//		cin>>temp;
//		json+=temp;
//	}
//	map<string,string> dict;
//	parseObject(json,"",dict,idx);
//	string query;
//	for(int j=0;j<m;j++){
//		getline(cin,query);
//		if(dict.find(query)==dict.end()){
//			cout<<"NOTEXIST"<<endl;
//		}else{
//			if(dict[query]==""){
//				cout<<"OBJECT"<<endl;
//			}else{
//				cout<<"STRING "<<dict[query]<<endl;
//			}
//		}
//	}
//	return 0;
//}

//201709-4 ͨ������
//#include<iostream>
//#include<cstring> 
//#include<vector>
//#define MAXN 1005
//using namespace std;
//vector<int> G[MAXN];
//int reach[MAXN][MAXN];
//int vis[MAXN];
//int N,M;
//int cnt;
//void dfs(int cur,int sta){//sta����� 
//	vis[cur]=1;
//	reach[sta][cur]=reach[cur][sta]=1;
//	for(vector<int>::iterator i=G[cur].begin();i!=G[cur].end();i++){
//		if(vis[*i]==0){
//			dfs(*i,sta);
//		}
//	}
//}
//
//int main(){
//	cin>>N>>M; 
//	int u,v;
//	for(int i=0;i<M;i++){
//		cin>>u>>v;
//		G[u].push_back(v);
//	}
//	for(int i=1;i<=N;i++){
//		memset(vis,0,sizeof(vis));
//		dfs(i,i);
//	}
//	int ans=0;
//	for(int i=1;i<=N;i++){
//		int j;
//		for(j=1;j<=N;j++){
//			if(reach[i][j]==0) break;
//		}
//		if(j==N+1) ans++;
//	}
//	cout<<ans<<endl;
//	return 0;
//}

//��һ������������� 
//#include<bits/stdc++.h>
//using namespace std;
//const int N=100010,M=200010;
//int n,m,tot,ans;
//int head[N],ver[M],nxt[M];
//int dfn[N],low[N],num,c[N],siz[N],cnt;
//int stk[N],top;
//bool ins[N];
//void add(int x,int y){
//    ver[++tot]=y,nxt[tot]=head[x],head[x]=tot;
//}
//void tarjan(int x){
//    dfn[x]=low[x]=++num;
//    stk[++top]=x,ins[x]=1;
//    for(int i=head[x];i;i=nxt[i]){
//        int y=ver[i];
//        if(!dfn[y]){
//            tarjan(y);
//            low[x]=min(low[x],low[y]);
//        }
//        else if(ins[y]) low[x]=min(low[x],dfn[y]);
//    }
//    if(dfn[x]==low[x]){
//        cnt++;
//        int y;
//        do{
//            y=stk[top--];
//            ins[y]=0,c[y]=cnt,siz[cnt]++;
//        }while(x!=y);
//    }
//}
//int main(){
//    scanf("%d%d",&n,&m);
//    for(int i=1;i<=m;i++){
//        int x,y;
//        scanf("%d%d",&x,&y);
//        add(x,y);
//    }
//    for(int i=1;i<=n;i++)
//        if(!dfn[i]) tarjan(i);
//    for(int i=1;i<=n;i++)
//        if(siz[c[i]]>1) ans++;
//    printf("%d\n",ans);
//    return 0;
//}

//#include<iostream>
//#include<vector>
//#include<cstring>
//using namespace std;
//const int MAX=1005;
//int vis[MAX];
//int reach[MAX][MAX];
//vector<int> G[MAX+1];
//
//
//void dfs(int cur,int sta){
//	vis[cur]=1;
//	reach[sta][cur]=reach[cur][sta]=1;
//	for(vector<int>::iterator i=G[cur].begin();i!=G[cur].end();i++){
//		if(vis[*i]==0){
//			dfs(*i,sta);
//		} 
//			
//	}
//}
//
//int main(){
//	int N,M;
//	cin>>N>>M;
//	int a,b;
//	for(int i=1;i<=M;i++){
//		cin>>a>>b;
//		G[a].push_back(b);
//	}
//	for(int i=1;i<=N;i++){
//		memset(vis,0,sizeof(vis));
//		dfs(i,i);
//	}
//	int ans=0;
//	for(int i=1;i<=N;i++){
//		int j;
//		for(j=1;j<=N;j++){
//			if(reach[i][j]==0) break;
//		}
//		if(j==N+1) ans++;
//	}
//	cout<<ans;
//	return 0;
//}


//��С��ֵ 201712-1
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N=1005;
//int a[N];
//int main(){
//	int min=N;
//	int n;
//	cin>>n;
//	for(int i=0;i<n;i++) cin>>a[i];
//	sort(a,a+n);
//	for(int i=1;i<n;i++){
//		int d=a[i]-a[i-1];
//		min=min<d?min:d;
//	}
//	cout<<min;
//	return 0;
//}

#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>

//using namespace std;
//
//const int N = 1010;
//queue <int> q;
//int n, k;
//
//int main()
//{
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i ++) q.push(i); //��С���ѷ������
//
//    int num = 1;
//    while (q.size() > 1)
//    {
//        int t = q.front();
//        q.pop(); //������С���ѵ���
//        if(num % k && num % 10 != k) q.push(t); //���С����û�б���̭��������β
//        num ++;
//    }
//    cout << q.front();
//    return 0;
//}

//#include<iostream>
//#include<queue>
//using namespace std;
//queue<int> q;
//int main(){
//	int n,k;
//	cin>>n>>k;
//	for(int i=1;i<=n;i++) q.push(i);
//	int num=1;
//	while(q.size()>1){
//		int temp=q.front();
//		q.pop();
////		temp=q.pop();
//		if(num%k && num%10!=k) q.push(temp);
//		num++;
//	}
////	cout<<num;
//	cout<<q.front();
//	return 0;
//	
//}
//
//
//#include <iostream>
//#include <queue>
//using namespace std;
//queue <int> q;
//int n, k;
//
//int main()
//{
//    cin >> n >> k;
//
//    for (int i = 1; i <= n; i ++) q.push(i); //��С���ѷ������
//
//    int num = 1;
//    while (q.size() > 1)
//    {
//        int t = q.front();
//        q.pop(); //������С���ѵ���
//        if(num % k && num % 10 != k) q.push(t); //���С����û�б���̭��������β
//        num ++;
//    }
//    cout << q.front();
//    return 0;
//}

//Crontab 201712-3



