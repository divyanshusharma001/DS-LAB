//Divyanshu Sharma
//1024030641

//1. Implement the Binary search algorithm regarded as a fast search algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search.
// #include<iostream>
// using namespace std;
// int linear(int arr[],int value,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==value)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int binnary(int arr[],int value,int size)
// {
//     int low=0;
//     int high=size-1;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]==value)
//         {
//             return mid;
//         }
//         else if(arr[mid]<value)
//         {
//             low=mid+1;
//         }
//         else
//         {
//             high=mid-1;
//         }
//     }
//     return -1;
// }
// int main()
// {
    // int value;
    // cout<<"Enter the number which you want to search for:";
    // cin>>value;
    // int arr[10];
    // for(int i=0;i<10;i++)
    // {
    //     cout<<"Enter the element at index "<<i+1<<": ";
    //     cin>>arr[i];
    // }
    // int result1=binnary(arr,value,10);
    // int result2=linear(arr,value,10);
    // if(result1==-1)
    // {
    //     cout<<"Element not found in the array"<<endl;
    // }
    // else
    // {
    //     cout<<"Element found at index : "<<result1<<" using binnary search"<<endl;
    // }
    // if(result2==-1)
    // {
    //     cout<<"Element not found in the array"<<endl;
    // }
    // else
    // {
    //     cout<<"Element found at index : "<<result2<<" using linear search"<<endl;
    // }
    // return 0;
// }





//2. Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. Code the Bubble sort with the following elements: 64,34,25,12,22,11,90
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={64,34,25,12,22,11,90};
//     int n=7;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }





//3. Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
//(a) Linear time
//(b) Using binary search


//Linear Time[O(n)]
// #include<iostream>
// using namespace std;
// int linear(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]!=i+1)
//         {
//             return i;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[10];
//     for(int i=0;i<10;i++)
//     {
//         cout<<"Enter the element at position "<<i+1<<": ";
//         cin>>arr[i];
//     }
//     int result=linear(arr,10);
//     if(result==-1)
//     {
//         cout<<"None of the element is missing in sequence.";
//     }
//     else
//     {
//         cout<<"The missing element is "<<result+1<<endl;
//     }
//     return 0;
// }



//Binnary Search[O(log n)]
// #include<iostream>
// using namespace std;
// int binnary(int arr[],int size)
// {
//     int high=size-1;
//     int low=0;
//     while(low<=high)
//     {
//         int mid=(low+high)/2;
//         if(arr[mid]==mid+1)
//         {
//             low=mid+1;
//         }
//         else
//         {
//             high=mid-1;
//         }
//     }
//     return low;
// }
// int main()
// {
    // int arr[10];
    // for(int i=0;i<10;i++)
    // {
    //     cout<<"Enter the element at position "<<i+1<<": ";
    //     cin>>arr[i];
    // }
    // int result=binnary(arr,10);
    // if(result==-1)
    // {
    //     cout<<"None of the element is missing in sequence.";
    // }
    // else
    // {
    //     cout<<"The missing element is "<<result+1<<endl;
    // }
    // return 0;
// }









//4. String Related Programs
// (a) Write a program to concatenate one string to another string.
// (b) Write a program to reverse a string.
// (c) Write a program to delete all the vowels from the string.
// (d) Write a program to sort the strings in alphabetical order.
// (e) Write a program to convert a character from uppercase to lowercase.



//(a)
// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string str1="Divyanshu";
//     string str2=" Sharma";
//     string str3=str1+str2;
//     cout<<"String after concatination is : "<<str3<<endl;
//     return 0;
// }



//(b)
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str = "Divyanshu";
//     int size = str.length();
//     for (int i = 0, j = size - 1; i < j; i++, j--) {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }

//     cout << "Reversed string: " << str << endl;
//     return 0;
// }



//(c)
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str="Divyanshu";
//     int size=str.length();
//     for(int i=0;i<size;i++)
//     {
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//         {
//             str.erase(i,1);
//         }
//     }
//     cout<<"The string after removal of vovels is : "<<str<<endl;
//     return 0;
// }



//(d)
// #include<iostream>
// using namespace std;
// int main()
// {
//     string str="divyanshu";
//     int size=str.length();
//     int arr[size];
//     for(int i=0;i<size;i++)
//     {
//         arr[i]=int(str[i]);
//     }
//     sort(arr,arr+size);
//     for(int i=0;i<size;i++)
//     {
//         str[i]=char(arr[i]);
//     }
//     cout<<"The sorted string is : "<<str<<endl;
//     return 0;
// }

//OR

// #include<iostream>
// using namespace std;
// int main()
// {
//     string str="divyanshu";
//     sort(str.begin(),str.end());
//     cout<<"The sorted string is : "<<str<<endl;
//     return 0;
// }



//(e)
// #include<iostream>
// using namespace std;
// int main()
// {
//     char x;
//     cout<<"Enter a character : ";
//     cin>>x;
//     int y=int(x);
//     if(y>=97 && y<=122)
//     {
//         x=char(y-32);
//     }
//     else if(y>=65 && y<=90)
//     {
//         x=char(y+32);
//     }
//     else
//     {
//         cout<<"Enter valid input i.e. any english alphabet";
//     }
//     cout<<x;
// }






//5.  Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ
// 𝑐𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices,
// implement an efficient way that reduces the space requirement.
// (a) Diagonal Matrix.
// (b) Tri-diagonal Matrix.
// (c) Lower triangular Matrix.
// (d) Upper triangular Matrix.
// (e) Symmetric Matrix

//5.(a) Efficient way to reduce space requirement is to store all diagonal elements in 1D array rather than storing it diagonally in 2D array.
// #include<iostream>
// using namespace std;
// int main()
// {
    // int x;
    // cout<<"Enter the size of diagonal matrix in format : 3 for 3x3 , 4 for 4x4 , 5 for 5x5 and so on : "<<endl;
    // cin>>x;
    // int arr[x];
    // for(int i=0;i<x;i++)
    // {
    //     cout<<"Enter value of diagonal element:";
    //     cin>>[i];
    // }
    // return 0;
// }

//5. (b) Efficient way to reduce space requirement is to store it in a 1D array following a pattern such as first printing elements in upper diagonal of main diagonal elements then elements of main diagonal elements and then the elements in lower diagonal of main diagonal.
// #include<iostream>
// using namespace std;
// int main()
// {
    // int x;
    // cout<<"Enter the size of diagonal matrix in format : 3 for 3x3 , 4 for 4x4 , 5 for 5x5 and so on : "<<endl;
    // cin>>x;
    // int arr[(x+(2*(x-1)))];
    // cout<<"Format : upper diagonal,main diagonal,lower diagonal";
    // for(int i=0;i<(x+(2*(x-1)));i++)
    // {
    //     cout<<"Enter value of element:";
    //     cin>>arr[i];
    // }
    // return 0;
// }


//5. (c) Efficient way to reduce space requirement is to store it in a 1D array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter the size of diagonal matrix in format : 3 for 3x3 , 4 for 4x4 , 5 for 5x5 and so on : "<<endl;
//     cin>>x;
//     int count=0;
//     for(int i=x;i>0;i--)
//     {
//         count=count+i;
//     }
//      int arr[count];
//     cout<<"Format : main diagonal,lower diagonal,...";
//     for(int i=0;i<count;i++)
//     {
//             cout<<"Enter value of element:";
//             cin>>arr[i];
//     }
//     return 0;
   
// }




//5. (d)Efficient way to reduce space requirement is to store it in a 1D array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter the size of diagonal matrix in format : 3 for 3x3 , 4 for 4x4 , 5 for 5x5 and so on : "<<endl;
//     cin>>x;
//     int count=0;
//     for(int i=x;i>0;i--)
//     {
//         count=count+i;
//     }
//      int arr[count];
//     cout<<"Format : main diagonal,upper diagonal,...";
//     for(int i=0;i<count;i++)
//     {
//             cout<<"Enter value of element:";
//             cin>>arr[i];
//     }
//     return 0;
   
// }



//5. (e)Efficient way to reduce space requirement is to store it in a 1D array and that to just upper or lower half
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter the size of diagonal matrix in format : 3 for 3x3 , 4 for 4x4 , 5 for 5x5 and so on : "<<endl;
//     cin>>x;
//     int count=0;
//     for(int i=x;i>0;i--)
//     {
//         count=count+i;
//     }
//      int arr[count];
//     cout<<"Format : main diagonal,upper diagonal,...";
//     for(int i=0;i<count;i++)
//     {
//             cout<<"Enter value of element:";
//             cin>>arr[i];
//     }
//     return 0;
   
// }




// 6. Write a program to implement the following operations on a Sparse Matrix,
// assuming the matrix is represented using a triplet.
// (a) Transpose of a matrix.
// (b) Addition of two matrices.
// (c) Multiplication of two matrices.

//6. (a)Transpose of the matrix
//ASSUMPTION:WE ALREADY HAVE INPUT IN FORM OF TRIPLET
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[3][3]={{0,2,3},{2,0,4},{2,3,5}};
//     int transpose[3][3];

  
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             transpose[j][i] = arr[i][j];
//         }
//     }

   
//     cout << "Transpose Matrix:" << endl;
//     for(int i=0;i<3;i++) {
//         for(int j=0;j<3;j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



//6. (b)Addition of two matrices
// #include<iostream>
// using namespace std;

// int main() {
    
//     int arr1[3][3] = { {0,2,3}, {1,0,5}, {2,1,7} };
//     int arr2[3][3] = { {0,2,4}, {1,0,6}, {2,2,8} };

//     int result[6][3];  
//     int k = 0;         
//     for(int i=0;i<3;i++) {
//         result[k][0] = arr1[i][0]; 
//         result[k][1] = arr1[i][1]; 
//         result[k][2] = arr1[i][2]; 
//         k++;
//     }

    
//     for(int i=0;i<3;i++) {
//         bool found = false;
//         for(int j=0;j<k;j++) {
//             if(result[j][0] == arr2[i][0] && result[j][1] == arr2[i][1]) {
//                 result[j][2] += arr2[i][2]; 
//                 break;
//             }
//         }
//         if(!found) { 
//             result[k][0] = arr2[i][0];
//             result[k][1] = arr2[i][1];
//             result[k][2] = arr2[i][2];
//             k++;
//         }
//     }
//     return 0;
// }



//6. (c)Multiplication of two matrices
// #include<iostream>
// using namespace std;

// int main() {
    
//     int A[3][3] = { {0,2,3}, {1,0,5}, {2,1,7} };  
//     int B[3][3] = { {0,1,2}, {2,0,4}, {1,2,6} };  

//     int C[20][3]; 
//     int k = 0;    

   
//     for(int i=0;i<3;i++) {          
//         for(int j=0;j<3;j++) {      
//             if(A[i][1] == B[j][0]) {   
//                 int row = A[i][0];
//                 int col = B[j][1];
//                 int val = A[i][2] * B[j][2];

                
//                 bool found = false;
//                 for(int t=0;t<k;t++) {
//                     if(C[t][0]==row && C[t][1]==col) {
//                         C[t][2] += val;
//                         found = true;
//                         break;
//                     }
//                 }
//                 if(!found) { 
//                     C[k][0] = row;
//                     C[k][1] = col;
//                     C[k][2] = val;
//                     k++;
//                 }
//             }
//         }
//     }


//     cout << "Resultant Matrix in Triplet Form (row col val):\n";
//     for(int i=0;i<k;i++) {
//         cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << endl;
//     }

//     return 0;
// }


//7. Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an inversion if these numbers are out of order, i.e., i < j but A[i]>A[j]. Write a program to count the number of inversions in an array.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cout<<"Enter size of an array:";
//     cin>>x;
//     int arr[x];
//     for(int i=0;i<x;i++)
//     {
//         cout<<"Enter the element : ";
//         cin>>arr[i];
//     }
//     int count=0;
//     for(int i=0;i<x;i++)
//     {
//         for(int j=i+1;j<x;j++)
//         {
//             if(i<j && arr[i]>arr[j])
//             {
//                 count++;
//             }
//         }
//     }
//     cout<<"The total number of inversions are : "<<count<<endl;
//     return 0;
// }







//8.  Write a program to count the total number of distinct elements in an array of length n.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9,9,8,7,6,5,4,3,2,1,6,4,7,2,8,9,5,1,7,0,7,3,6};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     bool visited[size];
//     for(int i=0;i<size;i++)
//     {
//         visited[i]=false;
//     }
//     for(int i=0;i<size;i++)
//     {
//         if(visited[i]==true)
//         {
//             continue;
//         }
//         int count=0;
//         for(int j=i;j<size;j++)
//         {
            
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 visited[j]=true;
//             }
//         }
//         cout<<"The element "<<arr[i]<<" is present "<<count<<" number of times in given array."<<endl;

//     }
// }


