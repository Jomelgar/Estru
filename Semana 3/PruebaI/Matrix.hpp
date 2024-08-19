#include<string>
#include <stdexcept>
class Matrix
{
public:
    //Constructor
    Matrix(): data(data), Row(0), Columns(0){}
    Matrix(int Row, int Columns);
    Matrix(const Matrix & copied);

    //Operator 
    Matrix & operator= (const Matrix & copied);
    //Destructor
    ~Matrix();

    //Functions
    int rowCount();
    int columnCount();
    int & at(int row, int column);
    std::string toString();
private:
int Row;
int Columns;
int ** data;
};