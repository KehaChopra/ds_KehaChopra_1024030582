Q1. //Implement the Binary search algorithm regarded as a fast search algorithm with run-time
//complexity of Ο(log n) in comparison to the Linear Search.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements in sorted order:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "Enter array element to be found: ";
    int target;
    cin >> target;

    int start = 0;
    int end = SIZE - 1;
    int mid;
    bool flag = false;
    int index = -1;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == target) {
            flag = true;
            index = mid;
            break; 
        }
        else if (arr[mid] > target) {
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    if (flag) {
        cout << "Element found at index " << index << endl;
    }
    else {
        cout << "Element not found" ;
    }

    return 0;
}

Q2.//Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent
//elements if they are in wrong order. Code the Bubble sort with the following elements:

  #include <iostream>
using namespace std;
int main(){
	int arr[7];
	cout<<"enter array to be sorted";
	for(int i=0;i<7;i++){
		cin>>arr[i];
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<7-i-1;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		
		}
	}
	cout<<"array in sorted order ";
	for(int i=0;i<7;i++){
		cout<<arr[i];
	}
	return 0;
}

Q3.//Design the Logic to Find a Missing Number in a Sorted Array.

#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int arr[7];
    int arrsum = 0;

    cout << "Enter 7 elements from 0 to 7 with one missing:\n";
    for(int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    int sum = (n * (n - 1)) / 2; 

    for(int i = 0; i < 7; i++) {
        arrsum += arr[i];
    }

    int missing = sum - arrsum;

    cout << "The element that is missing is: " << missing ;

    return 0;
}

Q4.//String Related Programs
//(a) Write a program to concatenate one string to another string.
//(b) Write a program to reverse a string.
//(c) Write a program to delete all the vowels from the string.
//(d) Write a program to sort the strings in alphabetical order.
//(e) Write a program to convert a character from uppercase to lowercase.

  #include <iostream>
using namespace std;

int main() {
    char s1[100] = "hello";
    char s2[7] = "world";
    
    int i = 0;
    int len1 = 0;
    
    while (s1[len1] != '\0') {
        len1++;
    }
    
    int len2 = 0;
    while (s2[len2] != '\0') {
        len2++;
    }
    
   
    for (int j = 0; j < len2; j++) {
        s1[len1 + j] = s2[j];
    }
    
   
    s1[len1 + len2] = '\0';
    
  
    cout << s1;
    
  return 0;
}
//reverse
#include <iostream>
using namespace std;

int main() {
    char s1[] = "keha";  
    
    int length = 0;
    
    while (s1[length] != '\0') {
        length++;
    }
    
    int first = 0;
    int last = length - 1;
    
    while (first < last) {
        char temp = s1[first];
        s1[first] = s1[last];
        s1[last] = temp;
        first++;
        last--;
    }
    
   
    cout << s1 << endl;
    
    return 0;
}
//delete vowels
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int j = 0; 
    int i = 0;

    while (str[i] != '\0') {  
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j++] = ch; 
        }
        i++;
    }

    str[j] = '\0'; 

    cout << "String without vowels: " << str.c_str() ;

    return 0;
}
//sort strings
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); 

    string arr[100]; 
    cout << "Enter " << n << " strings:" ;
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) { 
                string temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nStrings in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
//uppercase to lowercase
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32; 
        cout << "Lowercase: " << ch << endl;
    } else {
        cout << "Not an uppercase letter!";
    }

    return 0;
}

Q5.//Space required to store any two-dimensional array is number oƒ rows × number oƒ
//columns. Assuming array is used to store elements of the following matrices, implement an
//efficient way that reduces the space requirement.
//(a) Diagonal Matrix.
//(b) Tri-diagonal Matrix.
//(c) Lower triangular Matrix.
//(d) Upper triangular Matrix.
//(e) Symmetric Matrix

  #include <iostream>
using namespace std;

void diagonalMatrix() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int A[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "\nDiagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << A[i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void triDiagonalMatrix() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << 3*n - 2 << " elements:\n";
    for (int i = 0; i < 3*n - 2; i++) {
        cin >> arr[i];
    }

    cout << "\nTri-diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i-j == 1 || j-i == 1)
                cout << arr[k++] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

void lowerTriangularMatrix() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int total = n * (n + 1) / 2;
    int arr[100];
    cout << "Enter " << total << " elements:\n";
    for (int i = 0; i < total; i++) {
        cin >> arr[i];
    }

    cout << "\nLower Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j <= i) cout << arr[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void upperTriangularMatrix() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int total = n * (n + 1) / 2;
    int arr[100];
    cout << "Enter " << total << " elements:\n";
    for (int i = 0; i < total; i++) {
        cin >> arr[i];
    }

    cout << "\nUpper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j >= i) cout << arr[k++] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

void symmetricMatrix() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << (n*(n+1))/2 << " elements:\n";
    for (int i = 0; i < n*(n+1)/2; i++) {
        cin >> arr[i];
    }

    int mat[20][20];
    int k = 0;

    // Fill upper triangle
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            mat[i][j] = arr[k++];
        }
    }

    // Copy to lower triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            mat[i][j] = mat[j][i];
        }
    }

    cout << "\nSymmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    cout << "\nMatrix Representations:\n";
    cout << "1. Diagonal\n2. Tri-diagonal\n3. Lower Triangular\n4. Upper Triangular\n5. Symmetric\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: diagonalMatrix(); break;
        case 2: triDiagonalMatrix(); break;
        case 3: lowerTriangularMatrix(); break;
        case 4: upperTriangularMatrix(); break;
        case 5: symmetricMatrix(); break;
        default: cout << "Invalid choice!";
    }
    return 0;
}

Q6.//Write a program to implement the following operations on a Sparse Matrix, assuming the
//matrix is represented using a triplet.
//(a) Transpose of a matrix.
//(b) Addition of two matrices.
//(c) Multiplication of two matrices.

  #include <iostream>
using namespace std;

#define MAX 50   // define maximum size

// ---------- Transpose ----------
void transpose(int mat[MAX][3], int trans[MAX][3]) {
    int k = mat[0][2]; 
    trans[0][0] = mat[0][1];
    trans[0][1] = mat[0][0];
    trans[0][2] = k;

    int q = 1;
    for (int col = 0; col < mat[0][1]; col++) {
        for (int p = 1; p <= k; p++) {
            if (mat[p][1] == col) {
                trans[q][0] = mat[p][1];
                trans[q][1] = mat[p][0];
                trans[q][2] = mat[p][2];
                q++;
            }
        }
    }
}

// ---------- Addition ----------
void addSparse(int a[MAX][3], int b[MAX][3], int c[MAX][3]) {
    if (a[0][0] != b[0][0] || a[0][1] != b[0][1]) {
        cout << "Addition not possible\n";
        return;
    }

    int i = 1, j = 1, k = 1;
    while (i <= a[0][2] && j <= b[0][2]) {
        if (a[i][0] < b[j][0] || (a[i][0] == b[j][0] && a[i][1] < b[j][1])) {
            c[k][0] = a[i][0]; c[k][1] = a[i][1]; c[k][2] = a[i][2];
            i++; k++;
        }
        else if (b[j][0] < a[i][0] || (a[i][0] == b[j][0] && b[j][1] < a[i][1])) {
            c[k][0] = b[j][0]; c[k][1] = b[j][1]; c[k][2] = b[j][2];
            j++; k++;
        }
        else {
            int sum = a[i][2] + b[j][2];
            if (sum != 0) {
                c[k][0] = a[i][0]; c[k][1] = a[i][1]; c[k][2] = sum;
                k++;
            }
            i++; j++;
        }
    }
    while (i <= a[0][2]) {
        c[k][0] = a[i][0]; c[k][1] = a[i][1]; c[k][2] = a[i][2];
        i++; k++;
    }
    while (j <= b[0][2]) {
        c[k][0] = b[j][0]; c[k][1] = b[j][1]; c[k][2] = b[j][2];
        j++; k++;
    }

    c[0][0] = a[0][0];
    c[0][1] = a[0][1];
    c[0][2] = k - 1;
}

// ---------- Multiplication ----------
void multiply(int a[MAX][3], int b[MAX][3], int c[MAX][3]) {
    if (a[0][1] != b[0][0]) {
        cout << "Multiplication not possible\n";
        return;
    }

    int r = a[0][0], ccols = b[0][1];
    int temp[MAX][MAX] = {0};

    for (int i = 1; i <= a[0][2]; i++) {
        for (int j = 1; j <= b[0][2]; j++) {
            if (a[i][1] == b[j][0]) {
                temp[a[i][0]][b[j][1]] += a[i][2] * b[j][2];
            }
        }
    }

    c[0][0] = r;
    c[0][1] = ccols;
    int k = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < ccols; j++) {
            if (temp[i][j] != 0) {
                c[k][0] = i;
                c[k][1] = j;
                c[k][2] = temp[i][j];
                k++;
            }
        }
    }
    c[0][2] = k - 1;
}

// ---------- Utility to print matrix ----------
void printMatrix(int mat[MAX][3]) {
    for (int i = 0; i <= mat[0][2]; i++)
        cout << mat[i][0] << " " << mat[i][1] << " " << mat[i][2] << endl;
}

// ---------- Main Menu ----------
int main() {
    int choice;
    cout << "Choose operation:\n1. Transpose\n2. Addition\n3. Multiplication\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        int mat[MAX][3], trans[MAX][3];
        int rows, cols, num;
        cout << "Enter rows, cols and non-zero elements: ";
        cin >> rows >> cols >> num;
        mat[0][0] = rows; mat[0][1] = cols; mat[0][2] = num;
        cout << "Enter triplets:\n";
        for (int i = 1; i <= num; i++) cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
        transpose(mat, trans);
        cout << "Transpose:\n";
        printMatrix(trans);
    }
    else if (choice == 2) {
        int a[MAX][3], b[MAX][3], c[MAX][3];
        int num1, num2;
        cout << "Enter rows cols and non-zero for A: ";
        cin >> a[0][0] >> a[0][1] >> num1;
        a[0][2] = num1;
        cout << "Enter triplets for A:\n";
        for (int i = 1; i <= num1; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];

        cout << "Enter rows cols and non-zero for B: ";
        cin >> b[0][0] >> b[0][1] >> num2;
        b[0][2] = num2;
        cout << "Enter triplets for B:\n";
        for (int i = 1; i <= num2; i++) cin >> b[i][0] >> b[i][1] >> b[i][2];

        addSparse(a, b, c);
        cout << "Result of addition:\n";
        printMatrix(c);
    }
    else if (choice == 3) {
        int a[MAX][3], b[MAX][3], c[MAX][3];
        int num1, num2;
        cout << "Enter rows cols and non-zero for A: ";
        cin >> a[0][0] >> a[0][1] >> num1;
        a[0][2] = num1;
        cout << "Enter triplets for A:\n";
        for (int i = 1; i <= num1; i++) cin >> a[i][0] >> a[i][1] >> a[i][2];

        cout << "Enter rows cols and non-zero for B: ";
        cin >> b[0][0] >> b[0][1] >> num2;
        b[0][2] = num2;
        cout << "Enter triplets for B:\n";
        for (int i = 1; i <= num2; i++) cin >> b[i][0] >> b[i][1] >> b[i][2];

        multiply(a, b, c);
        cout << "Result of multiplication:\n";
        printMatrix(c);
    }
    else {
        cout << "Invalid choice!";
    }

    return 0;
}

Q7.//Let A[1 .... n] be an array of n real numbers. A pair (A[i], A[j ]) is said to be an inversion
//if these numbers are out of order, i.e., i < j but A[i]>A[j ]. Write a program to count the number
//of inversions in an array.

  #include<iostream>

using namespace std;
int main(){
int n;
cout<<"enter number of elements in the array";
cin>>n;
int arr[n];
int count=0;
cout<<"enter array elemnts";
for(int i=0;i<n;i++){
     cin>>arr[i];
}
for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			count++;
		}
	}
}
cout<<"number of inversions in the array are:"<<count;
return 0;
}

Q8.//Write a program to count the total number of distinct elements in an array of length n.

  #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int distinct = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

       
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if (!isDuplicate) {
            distinct++;
        }
    }

    cout << "Total distinct elements = " << distinct ;

    return 0;
}
