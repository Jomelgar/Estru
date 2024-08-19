#include "Matrix.hpp"

Matrix::Matrix(int Row, int Columns) : Row(Row),Columns(Columns)
{
    data = new int*[Row];

    for(int i = 0; i < Row; i++)
    {
        data[i] = new int[Columns];
    }
}

Matrix::Matrix(const Matrix & copied)
{
    
    Row = copied.Row;
    Columns = copied.Columns;
    data = new int * [Row];
    for(int i = 0; i < Row; i++)
    {
        data[i] = new int [Columns];
        for(int j = 0; j < Columns; j++)
        {
            data[i][j] = copied.data[i][j];
        }
    }
}

int Matrix::rowCount()
{
    return Row;
}

Matrix & Matrix::operator=(const Matrix &copied)
{
    Row = copied.Row;
    Columns = copied.Columns;
    data = new int * [Row];
    for(int i = 0; i < Row; i++)
    {
        data[i] = new int [Columns];
        for(int j = 0; j < Columns; j++)
        {
            data[i][j] = copied.data[i][j];
        }
    }
}

Matrix::~Matrix()
{
    for(int i = 0; i < Row; i++)
    {
        delete [] data[i];
    }

    delete[] data;
}

int Matrix::columnCount()
{
    return Columns;
}

int &Matrix::at(int row, int column)
{
    // TODO: Insertar una instrucción "return" aquí
    if(row >= 0 && column >= 0 && row < Row && column < Columns)
    {
        return data[row][column];
    }else
    {
        throw std::runtime_error("Index out of bounds.");
    }

    
}

std::string Matrix::toString()
{
    std::string result = "[";

    for(int i = 0; i < Row; i++)
    {
        if(i > 0){ result += ", "; }
        result += "[";
        for(int j = 0; j < Columns;j++)
        {
           if(j > 0){ result += ", "; }
           result += std::to_string(data[i][j]); 
        }
        result += "]";
    }

    return result + "]";
}
