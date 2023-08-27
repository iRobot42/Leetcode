class MyQueue {
  deque< int > container;
public:
  MyQueue() = default;
  void push( int x ) { container.push_back( x ); }
  bool empty() const { return container.empty(); }
  int peek() const { return container.front(); }
  int pop() {
    const int element{ container.front() };
    container.pop_front();
    return element;
  }
};
