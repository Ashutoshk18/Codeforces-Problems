// Next Round "https://codeforces.com/contest/158/problem/A"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int contestants, kth_place_finisher;
    cin >> contestants >> kth_place_finisher;
    // cout<<endl;
    vector<int> a_score;   //Score of contestants in non-increasing order.
    for (int i = 0; i < contestants; i++)  // Inputting the scores of contestants.
    {
        int value;
        cin >> value;
        a_score.emplace_back(value);
        // cout<<score[i];
    }
    int nextRound_contestants = 0;
    int k = kth_place_finisher - 1;  // Making a index value of vector to search.
    int scoreChecker=a_score[k];  //Checks the score if it is 0 or not.
    if(scoreChecker==0)
    {
        for (int i = 0; i < contestants; i++)
        {
            if (a_score[i] > scoreChecker)
            {
                nextRound_contestants++;
            }
        }
        cout << nextRound_contestants;
    }
    else
    {
        for (int i = 0; i < contestants; i++)
        {
            if (a_score[i] >= scoreChecker)
            {
                nextRound_contestants++;
            }
        }
        cout << nextRound_contestants;
    }

    return 0;
}