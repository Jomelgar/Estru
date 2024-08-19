
template<typename T>
class DynamicArray
{
private:
    int size;
    int capacity;
    T * data; 
public:
    //Constructor
    DynamicArray() : size(0), capacity(16), data(new T[16]) {}
    DynamicArray(int capacity) : size(0), capacity(capacity), data(new T[capacity]){}
    ~DynamicArray(){ delete [] data;}
    //Functions
    void add(T value);
    void reserve(int _capacity);
};

template <typename T>
void DynamicArray<T>::add(T value)
{
    if(capacity == size)
    {
        this->reserve(16); 
    }

    data[size] = value;
    size++;

}

template<typename T>
void DynamicArray<T>::reserve(int _capacity)
{
    capacity += _capacity;
        T * newdata = new T[capacity];
        for(int i = 0; i < size; i++)
        {
            newdata[i] = data[i];
        }

        delete [] data;
        data = newdata;
}
