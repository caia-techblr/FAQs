class MyStack
{
    int *m_arr;
    int m_capacity;
    int m_top;
    public:
    MyStack(int capacity):m_capacity(capacity) { 
        m_arr = new int[m_capacity];
    }
    ~MyStack() {
        delete[] m_arr;
    }
    //push
    //pop
    //isEmpty
    //isFull
};
