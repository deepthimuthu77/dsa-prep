#include<iostream>
#include<string>
using namespace std;

void pattern1(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< "*  ";
            j++;
        }
        cout << endl;
        i++;
    }

}
void pattern2(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< i << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }

}
void pattern3(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< j<< "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern4(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< n-j+1 << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern5(){
    int n, i = 1, val = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< val++ << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern6(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< "*  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern7(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< i << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern8(){
    int n, i = 1, val = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< val++ << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern9(){
    int n, i = 1, val;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        val = i;
        while(j<=i){
            cout<< val++ << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern10(){
    int n, i = 1, val;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j=1;
        val = i;
        while(j<=i){
            cout<< val-- << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern11(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + i - 1;
            cout<< ch << "  ";
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern12(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + j - 1;
            cout<< ch << "  ";
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern13(){
    int n, i = 1, val = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=n){
            char ch = 'A' + (val++) - 1;
            cout<< ch << "  ";
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern14(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        char ch = 'A' + i - 1; // 'A' + i + j - 2
        while(j<=n){
            cout<< ch << "  ";
            ch++;
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern15(){
    int n, i = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + i - 1;
            cout<< ch << "  ";
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern16(){
    int n, i = 1,val=1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        while(j<=i){
            char ch = 'A' + (val++) - 1;
            cout<< ch << "  ";
            j++; 
        }
        cout << endl;
        i++;
    }
}
void pattern17(){
    int n, i = 1, val = 1;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        val = i;
        while(j<=i){
            char ch = 'A' + (val++) - 1;
            cout<<ch << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern18(){
    int n, i = 1, val;
    cout << "Enter number of rows: ";
    cin >> n;

    while(i<=n){
        int j = 1;
        char ch = 'A' + n - i;
        while(j<=i){
            cout << ch << "  ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
void pattern19(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        // space print
        int space = n-i;
        while(space){
            cout<<"   ";
            space--;
        }

        // stars print
        int j = 1;
        while(j<=i){
            cout << "*  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern20(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int j = 1;
        while(j<= (n-i+1)){
            cout << "*  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern21(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = i-1;
        while(space){
            cout<<"   ";
            space--;
        }
        int j=1;
        while(j <= n-i+1){
            cout<<"*  ";
            j++;
        }
        cout<<endl;
        i++;
    }
} 
void pattern22(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = i-1;
        while(space){
            cout<<"   ";
            space--;
        }
        int j = 1;
        while(j<=n-i+1){
            cout<< i << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern23(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = n-i;
        while(space){
            cout<< "   ";
            space--;
        }
        int j =1;
        while(j<=i){
            cout << i << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern24(){
    int n, i=1, val = 1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = i-1;
        int j =1;
        val = i;
        while(space){
            cout<<"   ";
            space--;
        }
        while(j<=n-i+1){
            cout<<val++<<"  ";
            j++;
        }
        cout<< endl;
        i++;
    }
}
void pattern25(){
    int n, i=1, val=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = n-i;
        while(space){
            cout<<"   ";
            space--;
        }
        int j = 1;
        while(j<=i){
            cout << val++ << "  ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void pattern26(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){
        int space = n-i;
        while(space){
            cout<<"   ";
            space--;
        }

        //tri 1
        int j =1;
        while(j<=i){
            cout<<j++<<"  ";
        }

        //tri 2
        j = i - 1;
        while (j) {
            cout << j-- << "  ";
        }
        cout<<endl;
        i++;

    }
}
void pattern27(){
    int n, i=1;
    cout<<"Enter number of rows: ";
    cin>>n;

    while(i<=n){

        int j=1, s=1;
        // left num
        while(j<=n-i+1){
            cout<<j++<<"  ";
        }
        // stars
        while(s<=2*(i-1)){
            cout << "*  ";
            s++;
        }
        // right num
        j = (n - i + 1);
        while (j >= 1) {
            cout << j-- << "  ";
        }
        cout<<endl;
        i++;
    }
}

int main(){
    string run = "y";
    int choice;
    while(run == "y" || run=="Y"){
        cout<< "Enter pattern no.: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            pattern1(); break;
        case 2:
            pattern2(); break;
        case 3:
            pattern3(); break;
        case 4:
            pattern4(); break;
        case 5:
            pattern5(); break;
        case 6:
            pattern6(); break;
        case 7:
            pattern7(); break;
        case 8:
            pattern8(); break;
        case 9:
            pattern9(); break;
        case 10:
            pattern10(); break;
        case 11:
            pattern11(); break;
        case 12:
            pattern12(); break;
        case 13:
            pattern13(); break;
        case 14:
            pattern14(); break;
        case 15:
            pattern15(); break;
        case 16:
            pattern16(); break;
        case 17:
            pattern17(); break;
        case 18:
            pattern18(); break;
        case 19:
            pattern19(); break;
        case 20:
            pattern20(); break;
        case 21:
            pattern21(); break;
        case 22:
            pattern22(); break;
        case 23:
            pattern23(); break;
        case 24:
            pattern24(); break; 
        case 25:
            pattern25(); break;  
        case 26:
            pattern26(); break;
        case 27:
            pattern27(); break;    
        default:
            cout<< "Invalid choice!" << endl;
            break;
        }
        cout << endl;
        cout << "Continue? (y/n): ";
        cin >> run;
        cout << endl; 
    }
    return 0;
}