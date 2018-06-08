#include <cstdio>
#define N 2000
using namespace std;
int tnos;
int opt;
int class_rank[N];
int chinese_score[N];//1
int english_score[N];//2
int math_score[N];//3
int biology_score[N];//4
int history_score[N];//5
int physics_score[N];//6
int chemistry_score[N];//7
int politics_score[N];//8
int geography_score[N];//9
int class_rank1;
int class_rank2;
void init()
{
    for(int i=1;i<=tnos;i++)scanf("%d",&chinese_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&english_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&math_score[N][i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&biology_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&history_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&physics_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&chemistry_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&politics_score[i]);
    for(int i=1;i<=tnos;i++)scanf("%d",&geography_score[i]);
}
double calculate(int op)
{
    double sum,cnt;
    if(op==1) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=chinese_score[i],cnt++;}
    if(op==2) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=english_score[i],cnt++;}
    if(op==3) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=math_score[i],cnt++;}
    if(op==4) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=biology_score[i],cnt++;}
    if(op==5) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=history_score[i],cnt++;}
    if(op==6) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=physics_score[i],cnt++;}
    if(op==7) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=chemistry_score[i],cnt++;}
    if(op==8) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=politics_score[i],cnt++;}
    if(op==9) for(int i=1;i<=tnos;i++) {if(class_rank[i]>=class_rank1&&class_rank[i]<=class_rank2) sum+=geography_score[i],cnt++;}
    return sum/cnt;
}
int main()
{
    scanf("%d",&tnos);
    init();
    for(itn i=1;i<=tnos;i++)scanf("%d",&chinese_score[i]);
    scanf("%d%d%d",&opt,&class_rank1,&class_rank2);
    switch (opt)
    {
        case 1:printf("此区间内的语文平均分为： %.3lf\n",calculate(1));break;
        case 2:printf("此区间内的英语平均分为： %.3lf\n",calculate(2));break;
        case 3:printf("此区间内的数学平均分为： %.3lf\n",calculate(3));break;
        case 4:printf("此区间内的生物平均分为： %.3lf\n",calculate(4));break;
        case 5:printf("此区间内的历史平均分为： %.3lf\n",calculate(5));break;
        case 6:printf("此区间内的物理平均分为： %.3lf\n",calculate(6));break;
        case 7:printf("此区间内的化学平均分为： %.3lf\n",calculate(7));break;
        case 8:printf("此区间内的政治平均分为： %.3lf\n",calculate(8));break;
        case 9:printf("此区间内的地理平均分为： %.3lf\n",calculate(9));break;
    }
    return 0;
}
