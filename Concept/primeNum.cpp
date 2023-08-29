// // // #include <iostream>
// // // using namespace std;

// // // int main() {

// // //   int low, high, i;
// // //   bool is_prime = true;

// // //   cout << "Enter two numbers (intervals): ";
// // //   cin >> low >> high;

// // //   cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

// // //   while (low < high) {
// // //     is_prime = true;

// // //     // 0 and 1 are not prime numbers
// // //     if (low == 0 || low == 1) {
// // //       is_prime = false;
// // //     }

// // //     for (i = 2; i <= low/2; ++i) {
// // //       if (low % i == 0) {
// // //         is_prime = false;
// // //         break;
// // //       }
// // //     }

// // //     if (is_prime)
// // //       cout << low << ", ";

// // //     ++low;
// // //   }

// // //   return 0;
// // // }
// // #include <iostream>
// // using namespace std;
// // bool check_prime(int);
// // int main()
// // {
// //     bool prime;
// //     int max;
// //     cout << "ENTER THE MAXIMUM NUMBER : ";
// //     cin >> max;
// //     if (max < 2)
// //         cout << "\nNUMBER SHOULD BE GREATER THAN 2";
// //     for (int i = 2; i <= max; ++i)
// //     {
// //         prime = check_prime(i);
// //         if (prime)
// //             cout << i << " ";
// //     }
// //     return 0;
// // }
// // bool check_prime(int num)
// // {
// //     bool prime = true;
// //     for (int i = 2; i <= num / 2; i++)
// //     {
// //         if (num % i == 0)
// //         {
// //             prime = false;
// //             break;
// //         }
// //     }
// //     return prime;
// // }

// #include <iostream>

// bool isPrime(int num)
// {
//     if (num <= 1)
//         return false;

//     for (int i = 2; i < num; ++i)
//     {
//         if (num % i == 0)
//             return false;
//     }

//     return true;
// }

// void printPrimesUpToLimit(int limit)
// {
//     for (int num = 2; num <= limit; ++num)
//     {
//         if (isPrime(num))
//         {
//             std::cout << num << " ";
//         }
//     }
//     std::cout << std::endl;
// }

// int main()
// {
//     int limit;
//     std::cout << "Enter the limit: ";
//     std::cin >> limit;

//     std::cout << "Prime numbers up to " << limit << " are: ";
//     printPrimesUpToLimit(limit);

//     return 0;
// }
#!/ bin / bash

is_prime()
{
    num = $1

        if[$num - le 1];
    then return 1 fi

        for ((i = 2; i < num; i++));
    do
        if
            [$((num % i)) - eq 0];
    then return 1 fi
        done

        return 0
}

print_primes_up_to_limit()
{
    limit = $1

        for ((num = 2; num <= limit; num++));
    do
        if is_prime
            $num;
    then
            echo -
        n "$num " fi
            done

                echo
}

read - p "Enter the limit: " limit

           echo -
    n "Prime numbers up to $limit are: " print_primes_up_to_limit $limit
