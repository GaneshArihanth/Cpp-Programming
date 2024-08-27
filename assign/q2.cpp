#include <iostream>

using  namespace std;

int main(){
    int hr1, min1, sec1;
    cin>>hr1>>min1>>sec1;
    int hr2, min2, sec2;
    cin>>hr2>>min2>>sec2;
    int tot_hr, tot_min, tot_sec;
    tot_hr = hr1 + hr2;
    tot_min = min1 + min2;
    tot_sec = sec1 + sec2;
    
    if (tot_sec > 60){
        tot_sec = 60 - tot_sec;
        tot_min = tot_min + 1;
    }
    if (tot_min > 60){
        tot_min = 60 - tot_min;
        tot_hr = tot_hr + 1;
    }
    if (tot_hr > 23){
        tot_hr = 24 - tot_hr;
    }
    cout<<tot_hr<<" "<<tot_min<<" "<<tot_sec;
    return 0;
}






#include <iostream>

using namespace std;

int main() {
    int hr1, min1, sec1;
    cin >> hr1 >> min1 >> sec1;
    
    int hr2, min2, sec2;
    cin >> hr2 >> min2 >> sec2;

    int tot_hr, tot_min, tot_sec;

    tot_sec = (sec1 + sec2) % 60;
    tot_min = (min1 + min2 + (sec1 + sec2) / 60) % 60;
    tot_hr = (hr1 + hr2 + (min1 + min2 + (sec1 + sec2) / 60) / 60) % 24;

    cout << tot_hr << " " << tot_min << " " << tot_sec;

    return 0;
}
