#include <iostream>

using namespace std;

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(vector<int> ar) {
    int sum = 0;
    for(int x : ar) {
        sum += x;
    }
    return sum;
}

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    int result = simpleArraySum(numbers);

    cout << result << "\n";

    return 0;
}
