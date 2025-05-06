#include <iostream>
#include <string.h>
using namespace std;

// membuat sturct node
class Node
{
    public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

    public:
    LinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\n Masukkan Nomor Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START ->noMhs)
        {
            if ((START != NULL) && (nim == START->noMhs))
            {

            }
        }
    }
};