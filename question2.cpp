                        #include<iostream>
                        #include<string>
                        using namespace std;
    int main()
    {
        string str;
        int i,l,flag=0;
        cout<<"Enter the string"<<endl;
        getline(cin,str);
        l=str.length();
        for(i=0;i<l/2;i++)
        {
            if(str[i]!=str[l-i-1])
            {
                flag=1;
                break;
            }
        }
      if (flag==0)
        cout<<str<<" is a palindrome string"<<endl;
      else
        cout<<str<<" is not palindrome string"<<endl;


    }


