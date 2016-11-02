#ifndef progress_h
#define progress_h
class ProgressBar
{
public:
    ProgressBar();
    ProgressBar(int wid, char prSym);

    int getPercentage();
    void incrementProgress();
    void incrementProgress(int per);
    void print();

private:
    int widthInChar;
    char progressSymbol;
    int percentage;
};
#endif