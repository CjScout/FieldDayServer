#include "Headers.h"

sf::TcpListener listener;
sf::Packet packet;

sf::TcpSocket link;

advisory advisory1;
advisory advisory2;
advisory advisory3;
advisory advisory4;
advisory advisory5;
advisory advisory6;
advisory advisory7;
advisory advisory8;
advisory advisory9;
advisory advisory10;
advisory advisory11;
advisory advisory12;
advisory advisory13;
advisory advisory14;
advisory advisory15;
advisory advisory16;
advisory advisory17;
advisory advisory18;
advisory advisory19;
advisory advisory20;
advisory advisory21;
advisory advisory22;
advisory advisory23;
advisory advisory24;
advisory advisory25;
advisory advisory26;
advisory advisory27;
advisory advisory28;
advisory advisory29;
advisory advisory30;

string id;
string action;
int inValue;
int value;
string output;
string task;

sf::Uint32 grade5Score = 0;
sf::Uint32 grade6Score = 0;
sf::Uint32 grade7Score = 0;
sf::Uint32 grade8Score = 0;

int main()
{
    advisory1.id = "Griffin";

    while (true)
    {
        if (listener.listen(53000) != sf::Socket::Done)
        {
            // error...
        }

        if (listener.accept(link) != sf::Socket::Done)
        {
            cout << "Error completing connection";
        }

        link.receive(packet);
        packet >> id >> action >> value;

        if (action == "task")
        {
            if (id == advisory1.id)
            {
                advisory1.getTask();
                task = advisory1.nextTask;
                packet << task;
                link.send(packet);
            }
            
            if (id == advisory2.id)
            {
                advisory2.getTask();
                task = advisory2.nextTask;
                packet << task;
                link.send(packet);
            }
            
            if (id == advisory3.id)
            {
                advisory3.getTask();
                task = advisory3.nextTask;
                packet << task;
                link.send(packet);
            }
            
            packet << task;
            link.send(packet);
            link.disconnect();
        }
    }
}
