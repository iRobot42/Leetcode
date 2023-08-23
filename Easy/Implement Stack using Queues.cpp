class MyStack {
  deque< int > container;
public:
  MyStack() = default;
  bool empty() const { return container.empty(); }
  void push( int x ) { container.push_back( x ); }
  int top() const { return container.back(); }
  int pop() {
    const int element{ container.back() };
    container.pop_back();
    return element;
  }
};
