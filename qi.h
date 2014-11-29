#include<QString>

class Qipan;

class Qizi{
public:
    QString  name;
    QString color;
    Qizi(QString name, QString color);
	//返回1代表移动合法；返回0代表移动不合法。
    virtual int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y)=0; 
};
class Che:public Qizi{
public:
    Che(QString color);
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Ma:public Qizi{
public:
    Ma(QString color);
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Pao:public Qizi{
public:
    Pao(QString color);
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Xiang:public Qizi{
public:
    Xiang(QString color);
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Shi:public Qizi{
public:
    Shi(QString color);
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Shuai:public Qizi{
public:
    Shuai(QString color="B");
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Jiang:public Qizi{
public:
    Jiang(QString color="B");
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Bing:public Qizi{
public:
    Bing(QString color="B");
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Zu:public Qizi{
public:
    Zu(QString color="B");
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Space:public Qizi{
public:
    Space(QString color="  ");
	int move(Qipan &qp, int start_x,int start_y, int end_x,int end_y);
};
class Qipan{
public:
	//定义棋盘
	Qizi *q[11][10];
	//定义棋子
    Che che_red;Ma ma_red;Pao pao_red;Xiang xiang_red;Shi shi_red; Shuai shuai_red;Bing bing_red;
    Che che_black; Ma ma_black;Pao pao_black;Xiang xiang_black;Shi shi_black; Jiang jiang_black;Zu zu_black;
	Space space;
	Qipan();
    bool exist(int x,int y,QString color);//坐标x、y上color颜色棋子

};
