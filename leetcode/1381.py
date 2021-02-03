class CustomStack:

    def __init__(self, maxSize: int):
        self.my_stack = []
        self.max_size = maxSize

    def push(self, x: int) -> None:
        if len(self.my_stack) < self.max_size:
            return self.my_stack.append(x)

    def pop(self) -> int:
        if not self.my_stack:
            return -1
        
        return self.my_stack.pop()
        

    def increment(self, k: int, val: int) -> None:
        if k > len(self.my_stack):
            self.my_stack = [i + val for i in self.my_stack]
        else:
            for i in range(k):
                self.my_stack[i] += val

# Your CustomStack object will be instantiated and called as such:
# obj = CustomStack(maxSize)
# obj.push(x)
# param_2 = obj.pop()
# obj.increment(k,val)