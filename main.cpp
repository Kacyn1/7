#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int scal(vector <int> a, vector <int> b){
    int k = a.size()*2;
    vector <int> scalona

    sort(a.begin(), a.end());

    sort(b.begin(), b.end());

    for(int i = 0; i<a.size();i++){
        if(a[i]>b[i]){
            scalona.push_back(b[i]);
            scalona.push_back(a[i]);
        } else {
            scalona.push_back(a[i]);
            scalona.push_back(b[i]);
        }
    }
    return scalona;
}

int uporzadkuj(vector <int> arr){
    if(arr.size() == 1){
        return arr;
    }
    int k = arr.size()/2;
    vector <int> a;
    for(int i = 0;i<k;i++){
        a.push_back(arr[i]);
    }
    vector <int> b;
    for(int i = k+1;i<arr.size();i++){
        b.push_back(arr[i]);
    }
    return scal(a, b);
}

int main(int argc, char** argv) {
    vector <int> tablica = {5,1,2,4};
    cout<<uporzadkuj(tablica);
    return 0;
}
