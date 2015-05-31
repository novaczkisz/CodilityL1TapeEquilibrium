// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


#include <cmath>

int solution(vector<int> &A) {
    int N = A.size();

    int lower_sum = A[0];

    int higher_sum = 0;
    for( int i = 1; i < N; i++){
        higher_sum += A[i];
    }

    int diff = abs( lower_sum - higher_sum );
    int min_diff = diff;

    for( int p = 1; p < (N-1); p++ ) {
      lower_sum += A[p];
      higher_sum -= A[p];
      diff = abs( lower_sum - higher_sum );

        if( diff < min_diff ) {
             min_diff = diff;
        }
    }


    return min_diff;

}
