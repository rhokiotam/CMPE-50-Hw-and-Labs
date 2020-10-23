#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void exercise2()
{
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("LabExamInput2.txt"); 
    if (in_stream.fail()) 
    {
        cout << "The file failed to open";
        exit(1);
    }
    out_stream.open("LabExamOutput2.txt"); 
    if (out_stream.fail())
    {
        cout << "The file failed to open";
        exit(1);
    }
    string input, file;
    string num[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    while (getline(in_stream, input)) 
    {       
        
        file += input;
        file.push_back('\n');
        int index;
        for (int i = 0; i <= 9; i++)
        {
            while ((index = file.find(to_string(i))) != string::npos)  
            {
                file.replace(index, 1, num[i]);
            }
                    
        }
    } 
    cout << file;
    out_stream << file; 
    in_stream.close();
    out_stream.close();
  
}
class Diner
{
private:
    string dinername;
    string category;
    int rating[5];
    double average;
public:
    Diner(string a, string b)
    {
        dinername = a;
        category = b;
        rating[0] = 0;
        rating[1] = 0;
        rating[2] = 0;
        rating[3] = 0;
        rating[4] = 0;
        average = 0;
    }
    string getdinername()
    {
        return dinername;
    }
    string getcategory()
    {
        return category;
    }
    int* getrating()
    {
        return rating; 
    }
    void setdinername(string a)
    {
        dinername = a;
    }
    void setcategory(string b)
    {
        category = b;
    }
    void addRating(int c)
    {
        if (c > 5 || c < 1)
        {
            cout << "You have entered an invalid rating\n";
            exit(1);
        }
        if (c == 1)
        {
            rating[0]++;
        } 
        else if (c == 2)
        {
            rating[1]++;
        }
        else if (c == 3)
        {
            rating[2]++;
        }
        else if (c == 4)
        {
            rating[3]++;
        }
        else if (c == 5)
        {
            rating[4]++;
        }
    }
    double getaverage() 
    {
        average = 0;
        int totalratings = 0;
        for (int i = 0; i <= 4; i++)
        {
            totalratings += rating[i];
            average += rating[i] * (i+1);
        }
        average /= (double) totalratings;
        return average;
    }
    friend bool compare(Diner& d, Diner& e)
    {
        if (d.getaverage() == e.getaverage()) 
        {
            cout << "The averages are the same for both restaurants\n";
            return true;
        }
        cout << "The averages are not the same for both restaurants\n";
        return false;
    }
};
void exercise3()
{
    Diner one("Dennys", "American"), two("PandaExpress", "Chinese");
    int input;
    cout << "Enter 5 ratings for the first retaurant: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        one.addRating(input);
    }
    cout << "Enter 5 ratings for the second retaurant: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        two.addRating(input);
    }
    cout << "The name of the first restaurant is: " << one.getdinername() << " and the category is: " << one.getcategory() << endl;
    cout << "The average rating of " << one.getdinername() << " is: " << one.getaverage() << endl;
    cout << "The name of the second restaurant is: " << two.getdinername() << " and the category is: " << two.getcategory() << endl;
    cout << "The average rating of " << two.getdinername() << " is: " << two.getaverage() << endl;
    compare(one, two);
   
} 

int main()
{
    int choice;
    do {
        cout << "What would you like to do?\n";
        cout << "1) Exercise 2\n" << "2) Exercise 3\n" << "3) stop the program\n";
        cin >> choice;
        if (choice == 1) 
        {
            exercise2();
        }
        else if (choice == 2)
        {
            exercise3();
        }
        else if (choice == 3)
        {
            exit(0);
        }
    } while (choice != 4);
    
}


/* Console Output 
What would you like to do?
1) Exercise 2
2) Exercise 3
3) stop the program
1
The price of the cup is four dollars. But it's on sale today at two for six dollars.

If you buy more, you can get three for eight dollars.
What would you like to do?
1) Exercise 2
2) Exercise 3
3) stop the program
2
Enter 5 ratings for the first retaurant:
4
3
4
5
3
Enter 5 ratings for the second retaurant:
3
4
5
3
1
The name of the first restaurant is: Dennys and the category is: American
The average rating of Dennys is: 3.8
The name of the second restaurant is: PandaExpress and the category is: Chinese
The average rating of PandaExpress is: 3.2
The averages are not the same for both restaurants
What would you like to do?
1) Exercise 2
2) Exercise 3
3) stop the program
3

output file:
The price of the cup is four dollars. But it's on sale today at two for six dollars.

If you buy more, you can get three for eight dollars.

*/