//DIVYANSHU SHARMA
//1024030641
//2C45
// 1) Develop a menu driven program to demonstrate the following operations of arrays:

//     1.CREATE
//     2.DISPLAY
//     3.INSERT
//     4.DELETE
//     5.LINEAR SEARCH
//     6.EXIT


//1) 
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// vector<int>v;
// void displayMenu()
// {
//     cout<<"Select one out of below:"<<endl;
//     cout<<"1. CREATE"<<endl<<"2. DISPLAY"<<endl<<"3. INSERT"<<endl<<"4. DELETE"<<endl<<"5. LINEAR SEARCH"<<endl<<"6. EXIT"<<endl<<"Enter your input:";
// }
// int main()
// {
//     int choice;
//     while(true)
//     {
//         displayMenu();
//         cin>>choice;
//     switch (choice)
//     {
//         int size;
//         case 1:         //CREATE
//         {
//             v.clear();
//             cout<<"Enter size of array:";
//             cin>>size;
//             int arr[size];
//             for(int i=0;i<size;i++)
//             {
//                 cout<<"enter the element:";
//                 cin>>arr[i];
//             }
//             for(int i=0;i<size;i++)
//             {
//                 v.push_back(arr[i]);
//             }
//             cout<<"Your array is sucessfully created!!!";
//             break;
//         }
//         case 2:           //DISPLAY
//         {
//             if(v.size()==0)
//             {
//                 cout<<"No array created yet!!!"<<endl<<"Please create an array first."<<endl<<"Nothing to display:"<<endl;
//             }
//             for(int i=0;i<size;i++)
//             {
//                 cout<<v[i]<<endl;
//             }
//             break;
//         }
//         case 3:          //INSERT
//         {
//             int element;
//             cout<<"Enter the element you want to insert:";
//             cin>>element;
//             cout<<"Enter the position where you want to insert above element:";
//             int position;
//             cin>>position;
//             if(position<0 || position>v.size())
//             {
//                 cout<<"Enter valid input!!!"<<endl;
//             }
//             else
//             {
//                 v.insert(v.begin()+position,element);
//             }
//             break;
//         }
//         case 4:          //DELETE
//         {
//             cout<<"Enter the position of element you want to delete:";
//             int position;
//             cin>>position;
//             v.erase(v.begin()+position);
//             break;
//         }
//         case 5:         //LINEAR SEARCH
//         {
//             int ele;
//             cout<<"Enter the element you want to find in the array:";
//             cin>>ele;
//             int count=0;
//             for(int i=0;i<v.size();i++)
//             {
//                 if(v[i]==ele)
//                 {
//                     cout<<"Element found at position:"<<i<<endl;
//                     count=1;
//                     break;
//                 }
//             }
//             if(count==0)
//             {
//                 cout<<"Element is not present in array:"<<endl;
//             }
//             break;
//         }
//         case 6:          //EXIT
//         {
//             cout<<"Exiting the program.Thank you!!!"<<endl;
//             return 0;
//         }
//         default:
//         {
//             cout<<"Invalid choice!!!Try agai!!!"<<endl;
//         }
        
//     }
//     }
//     return 0;
// }





//2)   Design the logic to remove the duplicate elements from an Array and after the deletion the array should contain the unique elements.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size of the array:";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter the element:";
//         cin>>arr[i];   
//     }
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 for(int k=j;k<size-1;k++)
//                 {
//                     arr[k]=arr[k+1];
//                 }
//                 size--;
//                 j--;
//             }
//         }
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }




//3)      Predict the Output of the following program
// #include<iostream>
// using namespace std;
// int main()
// {
// int i;
// int arr[5] = {1};
// for (i = 0; i < 5; i++)
// printf("%d",arr[i]);
// return 0;
// }



// output: 10000





//4)     Implement the logic to
//    a. Reverse the elements of an array
//    b. Find the matrix multiplication
//    c. Find the Transpose of a Matrix


// a. Reverse the elements of an array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int size;
//     cout<<"Enter the size of the array:";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         cout<<"Enter the element:";
//         cin>>arr[i];
//     }
//     int mid=size/2;
//         for(int i=0;i<mid;i++)
//         {
//             int temp=arr[i];
//             arr[i]=arr[size-1-i];
//             arr[size-1-i]=temp;
//         }
//         for(int i=0;i<size;i++)
//         {
//             cout<<arr[i]<<endl;
//         }
// }





// b. Find matrix multiplication
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
//     int result[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             int sum=0;
//             for(int k=0;k<3;k++)
//             {
//                 sum=sum+arr[i][k]*arr2[k][j];
//             }
//             result[i][j]=sum;
//         }
//     }
//     cout<<"The result of matrix multiplication is:"<<endl;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }



// c. Find transpose of a matrix
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++)
//     {
//         for(int j=i;j<3;j++)
//         {
//             if(i!=j)
//             {
//                 int temp=arr[i][j];
//                 arr[i][j]=arr[j][i];
//                 arr[j][i]=temp;
//             }
//         }
//     }
//     cout<<"The transpose of the given matrix is: "<<endl;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }




//Write a program to find sum of every row and every column in a two-dimensional array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int sum=0;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             sum=sum+arr[i][j];
//         }
//         cout<<"Sum of row "<<i+1<<" is:"<<sum<<endl;
//         sum=0;
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             sum=sum+arr[j][i];
//         }
//         cout<<"Sum of column "<<i+1<<" is:"<<sum<<endl;
//         sum=0;
//     }
//     return 0;
// }