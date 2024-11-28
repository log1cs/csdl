#include<iostream>

//using namespace std;

template<typename T>
class Stack
{
    public:
    Stack (int Capacity = 100)
    {
        theArray = new T[Capacity];
        TopOfStack = -1;
    }

    ~Stack()
    {
        delete[] theArray;
    }

    int getSize()
    {
        return TopOfStack + 1;
    }

    bool empty()
    {
        return (TopOfStack == -1);
    }

    void push(T e)
    {
        TopOfStack++;
        theArray[TopOfStack] = e;
    }

    void pop()
    {
        TopOfStack--;
    }

    T top()
    {
        return theArray[TopOfStack];
    }

    void print() 
    {
        for (int i = TopOfStack; i >= 0; i--) 
        {
            std::cout << theArray[i] << " ";
        }
        std::cout << std::endl;        
    }

    bool check(T x) 
    {
        for (int i = TopOfStack; i >= 0; i--)
        {
            if (x == theArray[i])
            {
                std::cout << "1" << std::endl;
                return true;
            }
        }
        std::cout << "0" << std::endl;
        return false;
    }

    private:
    T *theArray;
    int TopOfStack;
};

int main()
{	
	Stack<char> s;
	
	if (s.empty()) 
    {
		std::cout << "Stack empty!" << std::endl;
    }

	s.push('B'); 
	s.push('E');
	s.push('K');
	s.push('A');
	s.push('C');
	
	std::cout << "Stack size after inserting:  " << s.getSize() << std::endl; // Se in ra 5
	
    s.check('K');
    s.check('O');

	std::cout << "Stack: ";
    s.print();

	std::cout << "Size: " << s.getSize() << std::endl; // Se in ra 0
	
    // c) extra questions
    char x;
    std::cout << "Enter X: ";
    std::cin >> x;
    
    while (!s.empty())
    {
        if (s.top() == x)
        {
            std::cout << x << " exist!" << std::endl;
            return 0;
        }
        s.pop();            
    }
    std::cout << x << " doesn't exist!" << std::endl;
    
    return 0;
}
