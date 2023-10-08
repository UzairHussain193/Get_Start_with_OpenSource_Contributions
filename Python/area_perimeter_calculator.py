import math

def main():
    print("Welcome to the Area and Perimeter Calculator!")

    while True:
        print("\nChoose a shape:")
        print("1. Rectangle")
        print("2. Square")
        print("3. Circle")
        print("4. Exit")
        
        choice = input("Enter your choice (1/2/3/4): ")
        
        if choice == '1':
            calculate_rectangle()
        elif choice == '2':
            calculate_square()
        elif choice == '3':
            calculate_circle()
        elif choice == '4':
            print("Thank you for using the calculator. Goodbye!")
            break
        else:
            print("Invalid choice. Please enter a valid option.")

def calculate_rectangle():
    length = float(input("Enter the length of the rectangle: "))
    width = float(input("Enter the width of the rectangle: "))
    
    area = length * width
    perimeter = 2 * (length + width)
    
    print(f"Area of the rectangle: {area}")
    print(f"Perimeter of the rectangle: {perimeter}")

def calculate_square():
    side = float(input("Enter the side length of the square: "))
    
    area = side * side
    perimeter = 4 * side
    
    print(f"Area of the square: {area}")
    print(f"Perimeter of the square: {perimeter}")

def calculate_circle():
    radius = float(input("Enter the radius of the circle: "))
    
    area = math.pi * radius**2
    circumference = 2 * math.pi * radius
    
    print(f"Area of the circle: {area}")
    print(f"Circumference of the circle: {circumference}")

if __name__ == "__main__":
    main()
