function separateOddEven(numbers)
    oddNumbers = filter(x -> x % 2 != 0, numbers)
    evenNumbers = filter(x -> x % 2 == 0, numbers)
    return oddNumbers, evenNumbers
end

println("Provide a list of numbers separated by spaces: ")
input = readline()
numbers = parse.(Int, split(input))
oddNumbers, evenNumbers = separateOddEven(numbers)

println("Odd numbers: ", join(oddNumbers, " "))
println("Even numbers: ", join(evenNumbers, " "))
