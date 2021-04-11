    #include <iostream>
    using namespace std;

    class Line{
        double Width;  
        /*类中默认的，未定义的都是私有的
        等同于 
        private:
            double width;
        */
        public:
            double Lenth;
            void setWidth(double wid);
            void setLenth(double len);
            double getWidth(void);
            double getLenth(void);
        
        protected:
            double Hight;
    };

    class SmallLine:Line //SmallLine是派生类
    {
        public:
            void setHight(double Hig);
            double getHight(void);
    };
    //成员函数定义
    void SmallLine::setHight(double Hig)
    {
        Hight = Hig;
    }
    void Line::setWidth(double wid)
    {
        Width = wid;
    }
    void Line::setLenth(double len)
    {
        Lenth = len;
    }

    double SmallLine::getHight(void)
    {
        return Hight;
    }
    double Line::getWidth(void)
    {
        return Width;
    }
    double Line::getLenth(void)
    {
        return Lenth;
    }
    //主函数
    int main()
    {
        //声明line，类型为Line
        //声明smale，类型为SmallLine
        Line line;
        SmallLine small;
        //使用成员函数设置lengh和width变量
        line.setLenth(20);
        cout <<"使用成员函数设置lengh变量" << line.getLenth() << endl ;
        line.setWidth(99);
        cout << "使用成员函数设置width变量" << line.getWidth() << endl ;
        small.setHight(23.3);
        cout << "使用成员函数设置Hight变量" << small.getHight() << endl ;
        //不使用成员函数变量设置lengh和width变量
        line.Lenth = 30 ;
        cout << "不使用成员函数设置lengh变量"<< line.Lenth << endl;
        //line.Hight = 4.33; error Hight 变量属于protected变量，只能通过派生(子类)中国呢可访问
        //cout << "不使用成员函数设置Hight变量" << line.Hight << endl;
        // line.Width = 77 ; error Width 变量属于private变量  
        //cout << "不使用成员函数设置width变量"<< line.Width << endl;
        return 0;
    }

