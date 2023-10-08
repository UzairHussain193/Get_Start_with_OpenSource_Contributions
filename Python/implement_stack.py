'''
@Author: hariom09090
'''


class Stack:
    def __init__(self):
        # Initialize an empty list to represent the stack
        self.items = []

    def push(self, item):
        # Add an item to the top of the stack
        self.items.append(item)

    def pop(self):
        # Remove and return the top item from the stack
        if not self.is_empty():
            return self.items.pop()

    def peek(self):
        # Return the top item without removing it
        if not self.is_empty():
            return self.items[-1]

    def is_empty(self):
        # Check if the stack is empty
        return len(self.items) == 0

    def size(self):
        # Return the number of items in the stack
        return len(self.items)


if __name__ == "__main__":
    # Create a stack
    my_stack = Stack()

    # Input loop
    while True:
        print("\nStack Operations:")
        print("1. Push")
        print("2. Pop")
        print("3. Peek")
        print("4. Is Empty?")
        print("5. Size")
        print("6. Quit")

        choice = input("Enter your choice: ")

        if choice == '1':
            item = input("Enter item to push onto the stack: ")
            my_stack.push(item)
            print(f"{item} pushed onto the stack.")

        elif choice == '2':
            item = my_stack.pop()
            if item is not None:
                print(f"Popped: {item}")
            else:
                print("Stack is empty.")

        elif choice == '3':
            item = my_stack.peek()
            if item is not None:
                print(f"Top element: {item}")
            else:
                print("Stack is empty.")

        elif choice == '4':
            if my_stack.is_empty():
                print("Stack is empty.")
            else:
                print("Stack is not empty.")

        elif choice == '5':
            print(f"Stack size: {my_stack.size()}")

        elif choice == '6':
            print("Exiting the program.")
            break

        else:
            print("Invalid choice. Please select a valid option.")
