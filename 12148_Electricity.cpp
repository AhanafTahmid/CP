#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int d[3000]={},m[10000]={},y[10000]={},c[100500];
    for(int i=1;i<=n;i++){
        cin>>d[i]>>m[i]>>y[i]>>c[i];
    }

    int ct = 1;
    vector<int> days;
    vector<int> consume;
    int v = 0;
    //n-1 naki chinta kora
    for(int i=1;i<=n;i++){
        if(y[i]!=y[i+1]){
            //if last month do something
            if(m[i]==12 && m[i+1]==1 && d[i]==31 && d[i+1]==1) ct++;
            continue;
        }
        else if(m[i]==1){
            if(d[i]==31 && d[i+1]==1){
                ct++;
                //if(ct>=2){ 
                    v+= (c[i+1]-c[i]);
                    //push_back consume also
                    //consume.push_back(c[i+1]-c[i]);
                    //consume.push_back(c[i]+1);
                    days.push_back(ct);
                //}
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                //consume.push_back(c[i+1]-c[i]);
                //consume.push_back(c[i+1]);
                days.push_back(ct);
            }
            else ct = 1;
            cout<<ct<<endl;
        }

        //2nd month
        else if(m[i]==2){
            if(d[i]==29 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            // else if( (y[i]%4==0 && y[i]%100!=0) || y[i]%400==0){
            //     if(d[i]==28 && d[i+1]==29){
            //         ct++;
            //         v+= (c[i+1]-c[i]);
            //         days.push_back(ct);
            //     }

            // }

            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
            //cout<<ct<<endl;
        }







        //3rd month
        else if(m[i]==3){
            if(d[i]==31 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }

        //4th month
        else if(m[i]==4){
            if(d[i]==30 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //5th month
        else if(m[i]==5){
            if(d[i]==31 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //6th month
        else if(m[i]==6){
            if(d[i]==30 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //7th month
        else if(m[i]==7){
            if(d[i]==30 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //8th month
        else if(m[i]==8){
            if(d[i]==31 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //9th month
        else if(m[i]==9){
            if(d[i]==30 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //10th month
        else if(m[i]==10){
            if(d[i]==31 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //11th month
        else if(m[i]==11){
            if(d[i]==30 && d[i+1]==1){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }


        //12th month
        else if(m[i]==12){
            if( (d[i]+1) == d[i+1] ){
                ct++;
                v+= (c[i+1]-c[i]);
                days.push_back(ct);
            }
            else ct = 1;
        }

    }


    sort(days.begin(),days.end(),greater<int>());
    cout<<days[0]<<" "<<v<<endl;
    

 


}


int main(){

    int t=1;
    //cin >> t;
    while(t--)solve(); 
    return 0;
}