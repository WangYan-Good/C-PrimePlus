struct customer {

  std::string fullname;
  double payment;
};

class Stack
{
  static const int LENGTH = 10;
  private:
    customer cst[LENGTH];
    int top;
  public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(customer & cust);
    bool pop(customer & cust);
};