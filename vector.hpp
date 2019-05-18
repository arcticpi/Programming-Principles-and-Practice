template <typename T>
class Vector
{
    size_t size;
    T *data;

public:
    Vector(size_t size = 0);
    ~Vector();
    size_t size();
};

template <typename T>
Vector::Vector(size_t size = 0)
{
    this->size = size;
    data = size ? new T[size] : nullptr;
}

template <typename T>
Vector::~Vector()
{
    delete[] data;
}

template <typename T>
size_t Vector::size()
{
    return size;
}