/*
وَأَن لَّيْسَ لِلْإِنسَانِ إِلَّا مَا سَعَىٰ (39) وَأَنَّ سَعْيَهُ سَوْفَ يُرَىٰ (40) ثُمَّ يُجْزَاهُ الْجَزَاءَ الْأَوْفَىٰ
 */
#include <iostream>
#include <algorithm>
#include <cmath>
#include <ranges>
#include <cmath>
#include <bits/stdc++.h>
#include <unordered_set>
#include <cmath>
#include <vector>
#include <set>
#include <unordered_map>
int mn = INT_MAX;
#include <set>
#include<iomanip>
#define MOD 998244353
#define  ll long long
#include <stack>
#include <deque>
#include <cstdint>
#include <queue>
#define el '\n'
using namespace std;
int main() {
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int N;
 cin >> N;

 int A[N];

 for (int i = 0; i < N; ++i) {
  cin >> A[i];
 }

 bool isPalindrome = true;
 for (int i = 0; i < N / 2; ++i) {
  if (A[i] != A[N - 1 - i]) {
   isPalindrome = false;
   break;
  }
 }

 if (isPalindrome) {
  cout << "YES" << endl;
 } else {
  cout << "NO" << endl;
 }

 return 0;
}

