// Recurrence Relation -- A recurrence relation is an equation that recursively defines a sequence. Eg- Fibonacci Series

// Master Theorem -- he master method is a formula for solving recurrence relations of the form: 
// See the video lc 16.5 
//  T(n) = aT(n/b) + f(n),
//  where,
//  n = size of input
//  a = number of subproblems in the recursion
//  n/b = size of each subproblem. All subproblems are assumed 
//       to have the same size.
//  f(n) = cost of the work done outside the recursive call, 
//        which includes the cost of dividing the problem and
//        cost of merging the solutions

//  Here, a ≥ 1 and b > 1 are constants, and f(n) is an asymptotically positive function.



// T(n) = aT(n/b) + f(n)

// where, T(n) has the following asymptotic bounds:

//     1. If f(n) = O(nlogb a-ϵ), then T(n) = Θ(nlogb a).

//     2. If f(n) = Θ(nlogb a), then T(n) = Θ(nlogb a * log n).

//     3. If f(n) = Ω(nlogb a+ϵ), then T(n) = Θ(f(n)).

// ϵ > 0 is a constant.


// Each of the above conditions can be interpreted as:

// 1. If the cost of solving the sub-problems at each level increases by a certain factor, the value of 
//    f(n) will become polynomially smaller than nlogb a. Thus, the time complexity is oppressed by the cost
//    of the last level ie. nlogb a

// 2. If the cost of solving the sub-problem at each level is nearly equal, then the value of f(n) will
//    be nlogb a. Thus, the time complexity will be f(n) times the total number of levels ie. nlogb a * log n

// 3. If the cost of solving the subproblems at each level decreases by a certain factor, the value of
//    f(n) will become polynomially larger than nlogb a. Thus, the time complexity is oppressed by the 
//    cost of f(n).