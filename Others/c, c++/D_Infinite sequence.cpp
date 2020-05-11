/*Vasya likes everything infinite. Now he is studying the properties of a sequence s, such that its first element is equal to a (s1 = a), and the difference between any two neighbouring elements is equal to c (si - si - 1 = c). In particular, Vasya wonders if his favourite integer b appears in this sequence, that is, there exists a positive integer i, such that si = b. Of course, you are the person he asks for a help.

Input
The first line of the input contain three integers a, b and c ( - 109 ≤ a, b, c ≤ 109) — the first element of the sequence, Vasya's favorite number and the difference between any two neighbouring elements of the sequence, respectively.

Output
If b appears in the sequence s print "YES" (without quotes), otherwise print "NO" (without quotes).

Example
Input
1 7 3
Output
YES
Input
10 10 0
Output
YES
Input
1 -4 5
Output
NO
Input
0 60 50
Output
NO
Note
In the first sample, the sequence starts from integers 1, 4, 7, so 7 is its element.

In the second sample, the favorite integer of Vasya is equal to the first element of the sequence.

In the third sample all elements of the sequence are greater than Vasya's favorite integer.

In the fourth sample, the sequence starts from 0, 50, 100, and all the following elements are greater than Vasya's favorite integer.*/



#include<bits/stdc++.h>
using namespace std;

int main()
{
//s=first eliment    f=favorit number    d=difference
    long long int s,f,d,i,j;

    scanf("%lld %lld %lld",&s,&f,&d);

    for(i=s;i<=f;){
        if(i==f){
            cout<<"YES";
             break;
        }
        if(i<f){
            i=i+d;
            if(i>f){cout<<"NO";}
        }
        else{
            cout<<"NO";
        }
    }
    if(s>f){
            for(j=s;j>f;){
                if(j==f){
                    cout<<"YES";
                }
                else{
                   j=j-d;
                }

            cout<<"NO";
            }
    }

    return 0;
}












