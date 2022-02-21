#include <iostream>

using namespace std;

int volume(int height, int width, int length);

//1. Define a structure called Box
struct box
{
  int height;
  int length;
  int width;

}boxBox1,boxBox2;
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> boxBox1.height;
    cout << "Enter Box 1 Width : ";
    cin >> boxBox1.width;
    cout << "Enter Box 1 Length : ";
    cin >> boxBox1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> boxBox2.height;
    cout << "Enter Box 2 Width : ";
    cin >> boxBox2.width;
    cout << "Enter Box 2 Length : ";
    cin >> boxBox2.length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(boxBox1.height ,boxBox1.length , boxBox1.width )
             + volume(boxBox2.height ,boxBox2.length ,boxBox2.width );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
int volume(int height , int width , int length)
{
  return height * width * length ;
}

// Implement the functions here
