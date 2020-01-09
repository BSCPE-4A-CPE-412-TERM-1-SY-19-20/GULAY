#include<iostream>
using namespace std;
 main()
{
        int j=0, state=0;
        int table[9][2]= { {5,1},{2,1},{3,2},{3,4},{4,4},{5,6},{6,7},{8,7},{8,8} };
        int input;
        int flag=0;
        char st[10];
        cin>>st;
        while ( st[j]!='\0')
            {
                switch( st[j])
                    {
                        case 'a' : input = 0; break;  //columun
                        case 'b' : input = 1; break;  //columun
                    }    
                state = table[state][input];
                if(state==4 || state==8)
                    {
                        flag = 1; 
                        break;
                    }
                    j++;
            }
            if ( flag==1)
                {
                    cout<<"Accepted";
                }
            else
                {
                    cout<<"Not Accepted" ;
                }    
            return 0;
    
    
}
