//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//void stringIteration()
//{
//    string s = "Hello there";
//    for(int i = s.length() -1; i >=0 ;i--)
//    {
//        cout << s[i] << endl;
//    }
//
//}
//
//int main()
//{
//    stringIteration();
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//// Complete the implementation of the following class specification for
//// a rectangle class, that behaves as rectangles do.
////
//// Thou shalt use neither cin, nor cout, nor any other I/O related function.
//
//class Rectangle{
//public:
//    Rectangle(); //create a rectangle of h=3, w=4
//    //with the upper left corner at (1,1)
//    float getHeight(); //returns h
//    float getWidth(); //returns w
//    float getXpos(); //returns x position of upper left corner
//    float getYpos(); //returns y position of upper left corner
//    float getPerimeter(); //returns length of perimeter
//    float getArea(); //returns area
//    void setHeight(float newHeight); //new width must be positive;
//    //else width remains unchanged;
//    void setWidth(float newWidth); //new width must be positive;
//    //else width remains unchanged;
//    void setXpos(float newX); //can be set to any float
//    void setYpos(float newY); //can be set to any float
//
//private:
//    float x;
//    float y;
//    float h;
//    float w;
//};
//
////TODO: make no changes above this line
////TODO: write your code below this line
//Rectangle::Rectangle()
//{
//    h=3;
//    w=4;
//}
//
//float Rectangle::getHeight()
//{
//    return h;
//}
//
//float Rectangle::getWidth()
//{
//    return w;
//}
//
//float Rectangle::getXpos()
//{
//    return x;
//}
//
//float Rectangle::getYpos()
//{
//    return y;
//}
//
//float Rectangle::getPerimeter()
//{
//    return 2*h+2*w;
//}
//
//float Rectangle::getArea()
//{
//    return h*w;
//}
//
//void Rectangle::setHeight(float newHeight)
//{
////    if(newHeight < 0)
////    {
////        cout << "Hey that's not a valid height";
////        h = 1;
////    }
//    h = newHeight;
//}
//
//void Rectangle::setWidth(float newWidth)
//{
//    w = newWidth;
//}
//
//void Rectangle::setXpos(float newX)
//{
//    x = newX;
//}
//
//void Rectangle::setYpos(float newY)
//{
//    y = newY;
//}
//
//
////TODO: write your code above this line
////TODO: make no changes below this line
//
//
//void printRectangle(Rectangle r){
//    cout << r.getHeight() << "\t";
//    cout << r.getWidth() << "\t";
//    cout << r.getXpos() << "\t";
//    cout << r.getYpos() << endl;
//}
//
//int main(){
//    Rectangle r1,r2;
//    printRectangle(r1);
//    printRectangle(r2);
//    r1.setHeight(5);
//    r1.setWidth(10);
//    r2.setXpos(30);
//    r2.setYpos(20);
//    printRectangle(r1);
//    printRectangle(r2);
//    cout << r1.getPerimeter() << endl;
//    cout << r2.getPerimeter() << endl;
//    cout << r1.getArea() << endl;
//    cout << r2.getArea() << endl;
//
//    return 0;
//}


//
//#include <iostream>
//using namespace std;
//
//// A simple grade calculator keeps track of the total
//// number of points possible, and the number of points
//// earned.  The current grade can be requested at any
//// time.
////
//// A number of GradeCalculator class functions are
//// given below.  Use the information in this program to
//// infer a valid specification for the GradeCalculator
//
////
//// Thou shalt use neither cin, nor cout, nor any other I/O related
//// function.
//
////TODO: make no changes above this line
////TODO: write your code below this line
//class GradeCalculator
//{
//public:
//    GradeCalculator();
//    GradeCalculator(int initialPointsEarned, int initialPointsPossible);
//    ~GradeCalculator();
//    float getAvg();
//    void addGrade(int pointsEarned, int pointsPossible);
//    void reset();
//
//private:
//    int earned;
//    int possible;
//};
////TODO: write your code above this line
////TODO: make no changes below this line
//
//GradeCalculator::GradeCalculator(){
//    earned = 0;
//    possible = 0;
//}
//
//GradeCalculator::GradeCalculator(int initialPointsEarned, int initialPointsPossible){
//    earned = initialPointsEarned;
//    possible = initialPointsPossible;
//}
//
//GradeCalculator::~GradeCalculator(){
//    cout << "Your semester has ended.\n";
//}
//
//float GradeCalculator::getAvg(){
//    if(possible == 0)return 0;
//    return earned/static_cast<float>(possible);
//}
//
//void GradeCalculator::addGrade(int pointsEarned, int pointsPossible){
//    earned += pointsEarned;
//    possible += pointsPossible;
//}
//
//void GradeCalculator::reset(){
//    earned = 0;
//    possible = 0;
//}
//
//int main(){
//    GradeCalculator pat;
//    GradeCalculator sam(90,100);
//
//    cout << pat.getAvg() << endl;
//    cout << sam.getAvg() << endl;
//    pat.addGrade(10,10);
//    sam.addGrade(10,10);
//    cout << pat.getAvg() << endl;
//    cout << sam.getAvg() << endl;
//    sam.reset();
//    cout << pat.getAvg() << endl;
//    cout << sam.getAvg() << endl;
//
//    return 0;
//}

#include <iostream>
#include <string>
using namespace std;

// Write a function to return a string composed of the most
// frequent lowercase letter found in each row of a 10 x 10
// array of lowercase alphabetic chars in the range a through z.
//
// If there is more than one most frequent character, use the
// one that come first alphabetically.
//
// Also, for no apparent reason associated with this problem,
// review the definition of a latin square.

//use neither cin nor cout

//TODO: write all your below this line
string mostFrequent(char c[10][10]){
    string toReturn = "";
    for(int lineNo = 0; lineNo < 10; lineNo++)
    {
        int occ[26];

        for(int i = 0; i < 26; i++)
        {
            occ[i] = 0;
        }

        for(int i = 0; i < 10; i++)
        {
            //go through each character on line
            int letterIndex = c[lineNo][i]-'a';
            occ[letterIndex]++;
        }

        int maxIndex = -1;
        int maxValue = -1;
        for(int i = 0;i < 26;i++)
        {
            if(occ[i] > maxValue)
            {
                maxValue = occ[i];
                maxIndex = i;
            }
        }
        char mostOccuring = maxIndex + 'a';
        toReturn += mostOccuring;
    }
    return toReturn;
}

//TODO: write all your above this line

int main(){
    char c[10][10] = {
            'a','b','f','d','e','f','g','h','i','j',
            'a','b','c','r','c','r','g','h','r','j',
            'a','b','c','d','e','f','g','h','o','o',
            'z','w','p','d','e','f','g','h','i','j',
            'o','d','o','d','o','b','o','d','o','d',
            'a','l','l','d','e','f','f','h','l','j',
            'a','b','c','d','i','f','g','h','i','j',
            'a','b','z','v','z','v','g','g','v','z',
            'a','b','c','d','e','f','g','h','i','e',
            'a','b','s','d','e','f','g','h','s','j',
    };

    cout << mostFrequent(c) << endl;
    return 0;
}
