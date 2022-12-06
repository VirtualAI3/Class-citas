class Time{
public:
    void Set(int hours,int minutes,int seconds);
    void Increment();
    void Write()const;
    bool Equal(Time otherTime)const;
    bool LessThan(Time otherTime)const;
    int Hours()const;//
    int Minutes()const;//
    int Seconds()const;
    void ReadTime();
    Time(int,int,int);
    Time();
private:
    int hrs;
    int mins;
    int secs;
};

