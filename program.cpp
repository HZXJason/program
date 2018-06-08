#include"program.h"
#include<QString>
#include<QDir>
#include<QJsonDocument>
#include<QJsonArray>
#include<QDebug>
#include<iostream>

void client::mRead()
{
    QDir dir("C:/Users/THINK/Documents/program/program-master");
    QFile file(dir.filePath("cc.json"));
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val=file.readAll();
    file.close();
    QJsonDocument d=QJsonDocument::fromJson(val.toUtf8());
    QJsonArray array=d.array();
    mScore x;
    for(int i=mLeft-1;i<mRight;i++)
    {
        QJsonObject json=array.at(i).toObject();
        x.chinese_score[i]=json.value("Column1").toInt();
        x.math_score[i]=json.value("Column2").toInt();
        x.english_score[i]=json.value("Column3").toInt();
        x.physics_score[i]=json.value("Column4").toInt();
        x.chemistry_score[i]=json.value("Column5").toInt();
        x.biology_score[i]=json.value("Column6").toInt();
        x.politics_score[i]=json.value("Column7").toInt();
        x.history_score[i]=json.value("Column8").toInt();
        x.geography_score[i]=json.value("Column9").toInt();

    }
    ans=x.calculate(subject);
    std::string str;
    switch(subject)
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
    mstr=QString(QString::fromLocal8Bit(str.c_str()));
    std::cout<<str;
    //qDebug(mstr);
}
