// stacktp.h -- stackģ��
#ifndef STACKTP_H
#define STACKTP_H

template <class T>
class Stack 
{
private :
	enum{MAX=10};
	T items[MAX];
	int top;
public :
	Stack();
	bool isempty();
	bool isfull();
	bool push(const T& item);
	bool pop(T& item);

};


template<class T>
Stack<T>::Stack() {
	top = 0;
}

template<class T>
bool Stack<T>::isempty()
{
	return top == 0;
}

template <class T>
bool Stack<T>::isfull() {

	return top == MAX;
}

template<class T>
bool Stack<T>::push(const T& item) {

}

template<class T>


#endif // !STACKTP_H
