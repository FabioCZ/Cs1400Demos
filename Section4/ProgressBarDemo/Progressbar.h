class ProgressBar
{
public:
    ProgressBar();
    ProgressBar(int w, char ps);

    int getPercentage();
    void increment();
    void increment(int incr);
    void print();
    bool hasFinished();

private:
    int percentage;
    int width;
    char progressSymbol;
};