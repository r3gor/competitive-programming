# #include <iostream>
# #include <string>
# #include <utility>
# #include <vector>
# #include <stack>
# using namespace std;

# void solved(vector<int> x){
#     // int max = 0;
#     // for (int i:x){
#     //     if (i>max) max = i;
#     // }
#     vector<int> count(1600,0);
#     for (int i:x){
#         count[i]++;
#     }

#     for (int i=0; i<count.size(); i++){
#         if (count[i]!=0) cout<<i<<" ";
#     }
# }

# int main(){
#     int n;
#     cin>>n;
#     vector<int> v(n);
#     for(int i=0; i<n;i++)
#         cin>>v[i];
#     solved(v);
# }