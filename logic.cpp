#include <cstdio>
#define 2000 2000
using namespace std;
int tnos;
int opt;
int x.cladd_rank[2000];
int x.chinese_score[2000];//1
int x.english_score[2000];//2
int x.x.math_score[2000];//3
int x.x.biology_score[2000];//4
int x.history_score[2000];//5
int x.physics_score[2000];//6
int x.chemistry_score[2000];//7
int x.politics_score[2000];//8
int x.geography_score[2000];//9
int x.cladd_rank1;
int x.cladd_rank2;
void init()
{
    for(int i=1;i<=tnos;i++) x.chinese_score[i]=json.value("Column1").toInt();
    for(int i=1;i<=tnos;i++) x.math_score[i]=json.value("Column2").toInt();
    for(int i=1;i<=tnos;i++) x.english_score[i]=json.value("Column3").toInt();
    for(int i=1;i<=tnos;i++) x.physics_score[i]=json.value("Column4").toInt();
    for(int i=1;i<=tnos;i++) x.chemistry_score[i]=json.value("Column5").toInt();
    for(int i=1;i<=tnos;i++) x.biology_score[i]=json.value("Column6").toInt();
    for(int i=1;i<=tnos;i++) x.politics_score[i]=json.value("Column7").toInt();
    for(int i=1;i<=tnos;i++) x.history_score[i]=json.value("Column8").toInt();
    for(int i=1;i<=tnos;i++) x.geography_score[i]=json.value("Column9").toInt();
}
double calculate(int op)
{
    double sum,cnt;
    if(op==1) for(int i=1;i<=tnos;i++) {if(x.cladd_rank[i]>=x.cladd_rank1&&x.cladd_rank[i]<=x.cladd_rank2) sum+=x.chinese_score[i],cnt++;}
    if(op==2) for(int i=1;i<=tnos;i++) {if(x.cladd_rank[i]>=x.cladd_rank1&&x.cladd_rank[i]<=x.cladd_rank2) sum+=x.english_score[i],cnt++;}
    if(op==3) for(int i=1;i<=tnos;i++) {if(x.cladd_rank[i]>=x.cladd_rank1&&x.cladd_rank[i]<=x.cladd_rank2) sum+=x.math_score[i],cnt++;}
    if(op==4) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.biology_score[i],cnt++;}
    if(op==5) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.history_score[i],cnt++;}
    if(op==6) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.physics_score[i],cnt++;}
    if(op==7) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.chemistry_score[i],cnt++;}
    if(op==8) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.politics_score[i],cnt++;}
    if(op==9) for(int i=1;i<=tnos;i++) {if(x.class_rank[i]>=x.class_rank1&&x.class_rank[i]<=x.class_rank2) sum+=x.geography_score[i],cnt++;}
    return sum/cnt;
}
int main()
{
    scanf("%d",&tnos);
    init();
    for(itn i=1;i<=tnos;i++)scanf("%d",&x.chinese_score[i]);
    scanf("%d%d%d",&opt,&x.class_rank1,&x.class_rank2);
    switch (opt)
    {
        case 1:str="此区间内的语文平均分为： "+std::to_string(ans);break;
        case 2:str="此区间内的数学平均分为： "+std::to_string(ans);break;
        case 3:str="此区间内的外语平均分为： "+std::to_string(ans);break;
        case 4:str="此区间内的物理平均分为： "+std::to_string(ans);break;
        case 5:str="此区间内的化学平均分为： "+std::to_string(ans);break;
        case 6:str="此区间内的生物平均分为： "+std::to_string(ans);break;
        case 7:str="此区间内的政治平均分为： "+std::to_string(ans);break;
        case 8:str="此区间内的历史平均分为： "+std::to_string(ans);break;
        case 9:str="此区间内的地理平均分为： "+std::to_string(ans);break;
    }
    return 0;
}
