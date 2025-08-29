#include <iostream>
using namespace std;

class BaseShape {
public:
    virtual void printWidth() = 0;
    
    int printMembers() {
        cout << "aCommonMember: " << aCommonMember << endl;
        cout << "color: " <<color << endl;
        return 0;
    }
    
protected:
    int aCommonMember;
    int color;
};

class CircleShape : public BaseShape {
public:
    CircleShape (int width) {
        halfRadius = width / 2;
    }
    CircleShape () {
        halfRadius = 0;
    }
    virtual void printWidth () {
        cout << "width: " << 2 * halfRadius << endl;
    }
    
    int printMembers () {
        BaseShape::printMembers();
        
        //cout << "aCommonMember: " << aCommonMember << endl;
        //cout << "color: " <<color << endl;
        cout << "half radius: " << halfRadius << endl;
        return 0;
    }
    
private:
    float halfRadius;
};

int main()
{
    cout << "1 " << endl;
    CircleShape cs;
    cs.printMembers();
    cs.printWidth();
    
    cout << "2 " << endl;
    CircleShape cs2(333);
    cs2.printMembers();
    cs2.printWidth();
    
    return 0;
}
