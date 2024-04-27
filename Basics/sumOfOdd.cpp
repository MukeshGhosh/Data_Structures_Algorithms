#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, p, q, r; cin >> n >> p >> q >> r;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int ans = INT_MIN;
  int suff[n];
  suff[n-1] = arr[n-1];
  for(int i = n-2; i >= 0; i--){
    if(r > 0){
      suff[i] = max(suff[i+1], arr[i]);
    }
    else{
      suff[i] = min(suff[i+1], arr[i]);
    }
  }
  int pref = arr[0];
  for(int i = 0; i < n; i++){
    if(p > 0){
      pref = max(pref, arr[i]);
    }
    else{
      pref = min(pref, arr[i]);
    }
    ans = max(ans, (p*pref) + (q*arr[i]) + (r*suff[i])); 
  }
  cout << ans << '\n';
  return 0;
}
