#include<bits/stdc++.h>
using namespace std;
//longest substring without repeating characters
int main()
{
    int maxl=0,l=0;
    string str,temp="",maxstr="";
    str="dvdf";
    int len=str.length();
    cout<<len<<" this is length"<<endl;
//algo
    for(int i=0;i<len;i++) {       //outer loop 0 to length
        char ch=str[i];
        l=temp.length();
        if(l==0) {  temp=ch;        //initializing with first character 
        } 
        else {
            for(size_t j=0;j<l;j++) {  //inner loop 0 to length of temp
                // cout<<ch;
                if(ch==temp[j]) {           //if ch is a repeatable character 
                    if(l>maxl) { 
                        maxl=l;  
                        maxstr=temp; }
                    temp="";                //reset the temp string
                    break;
                }    
            }
            temp+=ch;                   //adding the ch to the temp string or to a new temp if it is a repeatable 
            maxl=(maxstr.length()>temp.length())?maxstr.length():temp.length();
            // maxl=max(maxl,l);
            maxstr=(maxstr.length()>temp.length())?maxstr:temp;
        }
        cout<<"\n"<<temp;
    }
    cout<<"\n"<<maxl<<" as the max length";
    cout<<"\n"<<maxstr<<" as the max string";
    return 0;
}
//calculating Time Complexity
//