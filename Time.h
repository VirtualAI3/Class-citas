class Time{
public:
    void Set(int hours,int minutes);
    bool Equal(Time otherTime)const;
    bool LessThan(Time otherTime)const;
    int Hours()const;
    int Minutes()const;
    void ReadTime();
    Time(int,int);
    Time();
private:
    int hrs;
    int mins;
};

