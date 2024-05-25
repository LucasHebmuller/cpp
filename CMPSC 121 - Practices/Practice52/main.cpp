#include <iostream>
#include <list>
using namespace std;


class YoutubeChannel
{
    public:
        string Name;
        string OwnerName;
        int SubscribersCount;
        list<string> PublishedVideoTitles;
    public:
        YoutubeChannel( string name, string ownerName )
        {
            Name = name;
            OwnerName = ownerName;
            SubscribersCount = 0;
        }
};


int main()
{
    YoutubeChannel ytChannel( "PracticingC++", "Lucas");

    cout << "Name: " << ytChannel.Name << endl;
    cout << "Owner Name: " << ytChannel.OwnerName << endl;
    cout << "Subscribers Count: " << ytChannel.SubscribersCount << endl;
    cout << "Videos: " << endl;
    for ( string videoTitle : ytChannel.PublishedVideoTitles )
    {
        cout << videoTitle << endl;
    }


    return 0;
}