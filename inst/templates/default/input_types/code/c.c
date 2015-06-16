// This example is from rosettacode.org
// Source: http://rosettacode.org/wiki/Fibonacci_sequence#C

long long int fibb(long long int a, long long int b, int n) {
  return (--n>0)?(fibb(b, a+b, n)):(a);
}