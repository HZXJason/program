#ifndef PROGRAM_H
#define PROGRAM_H

#include<QObject>
#include<QString>
#include<QFile>
#include<QJsonObject>
#include<QIODevice>
#include<QDir>
#include<QVector>
#include<iostream>

class mScore
{
public:
    mScore(){}
    ~mScore(){}
    int tnos;
    int opt;
    int class_rank[2000];
    int chinese_score[2000];//1
    int english_score[2000];//2
    int math_score[2000];//3
    int biology_score[2000];//4
    int history_score[2000];//5
    int physics_score[2000];//6
    int chemistry_score[2000];//7
    int politics_score[2000];//8
    int geography_score[2000];//9

    int class_rank1;
    int class_rank2;
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
};
class client:public QObject
{
    Q_OBJECT
    Q_PROPERTY(int mRight READ getmRight WRITE setmRight )
    Q_PROPERTY(int mLeft READ getmLeft WRITE setmLeft )
    Q_PROPERTY(int subject READ getsubject WRITE setsubject )
    Q_PROPERTY(QString mstr READ getmstr WRITE setmstr )
public:
    int ans;
    int mLeft;
    int mRight;
    int subject;
    QString  mstr;
    client(){}
    void setmRight(int x)
    {
        mRight=x;
    }
    void setmLeft(int x){mLeft=x;}
    int getsubject(){return subject;}
    void setsubject(int a){subject=a;}
    int getmLeft(){return mLeft;}
    int getmRight(){return mRight;}
    ~client(){}
    Q_INVOKABLE void mRead();
    QString getmstr(){return mstr;}
    void setmstr (QString x) {mstr=x;}
    //Q_INVOKABLE void mPrint();
};
#endif // PROGRAM_H
