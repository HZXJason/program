#include"program.h"
#include<QString>
#include<QDir>
#include<QJsonDocument>
#include<QJsonArray>
#include<QDebug>
#include<iostream>

void client::mRead()
{
    QDir dir(mPath);
    QFile file(dir.filePath("cc.json"));
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString val=file.readAll();
    file.close();
    std::cout<<1;
    QJsonDocument d=QJsonDocument::fromJson(val.toUtf8());
    QJsonArray array=d.array();
    mScore x;
    for(int i=mLeft-1;i<mRight;i++)
    {
        QJsonObject json=array.at(i).toObject();
        x.chinese_score[i]=json.value("Column2").toDouble(); std::cerr<<x.chinese_score[i]<<" ";
        x.math_score[i]=json.value("Column3").toDouble(); std::cerr<<x.math_score[i]<<" ";
        x.english_score[i]=json.value("Column4").toDouble(); std::cerr<<x.english_score[i]<<" ";
        x.physics_score[i]=json.value("Column5").toDouble(); std::cerr<<x.physics_score[i]<<" ";
        x.chemistry_score[i]=json.value("Column6").toDouble(); std::cerr<<x.chemistry_score[i]<<" ";
        x.biology_score[i]=json.value("Column7").toDouble(); std::cerr<<x.biology_score[i]<<" ";
        x.politics_score[i]=json.value("Column8").toDouble(); std::cerr<<x.politics_score[i]<<" ";
        x.history_score[i]=json.value("Column9").toDouble(); std::cerr<<x.history_score[i]<<" ";
        x.geography_score[i]=json.value("Column10").toDouble(); std::cerr<<x.geography_score[i]<<" ";
        x.class_rank[i]=json.value("Column12").toDouble(); std::cerr<<x.class_rank[i]<<" ";

    }
    x.class_rank1=mLeft;
    x.class_rank2=mRight;
    ans=x.calculate(subject);
    std::string str;
    std::cerr<<mLeft<<" ";
    std::cerr<<mRight<<" ";
    switch(subject)
    {
          case 1:str=" "+std::to_string(ans);break;
          case 2:str=" "+std::to_string(ans);break;
          case 3:str=" "+std::to_string(ans);break;
          case 4:str=" "+std::to_string(ans);break;
          case 5:str=" "+std::to_string(ans);break;
          case 6:str=" "+std::to_string(ans);break;
          case 7:str=" "+std::to_string(ans);break;
          case 8:str=" "+std::to_string(ans);break;
          case 9:str=" "+std::to_string(ans);break;

    }
    mstr=QString(QString::fromLocal8Bit(str.c_str()));
    std::cerr<<str;
    //qDebug(mstr);
}
