#include <iostream>

using namespace std;

struct Link
{
    int id;
    Link *next;
};

void addLinkBegin(Link **link, int id)
{
    Link *new_link = new Link;
    new_link->id = id;

    if(*link == nullptr)
    {
        new_link->next = nullptr;
        *link = new_link;
    }
    else
    {
        new_link->next = *link;
        *link = new_link;
    }
}

void addLinkEnd(Link **link, int id)
{
    Link *new_link = new Link;
    new_link->id = id;
    new_link->next = nullptr;

    if(*link == nullptr)
    {
        *link = new_link;
    }
    else
    {
        Link *tmp = *link;

        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new_link;
    }
}

void printLinks(Link *link)
{
    while(link)
    {
        cout << link->id << " ";
        link = link->next;
    }
    cout << "\n";
}

void deleteLinks(Link **link)
{
    Link *tmp = *link;

    while(tmp)
    {
        Link *tmp2 = tmp;
        tmp = tmp->next;
        delete tmp2;
    }

    *link = nullptr;
}

void signleLinkedListBeginDemo()
{
    Link *head = nullptr;

    addLinkBegin(&head, 1);
    addLinkBegin(&head, 2);
    addLinkBegin(&head, 3);
    addLinkBegin(&head, 4);

    printLinks(head);
    deleteLinks(&head);
}


void signleLinkedListEndDemo()
{
    Link *head = nullptr;

    addLinkEnd(&head, 1);
    addLinkEnd(&head, 2);
    addLinkEnd(&head, 3);
    addLinkEnd(&head, 4);

    printLinks(head);
    deleteLinks(&head);
}

int main()
{
    signleLinkedListBeginDemo();
    signleLinkedListEndDemo();
    return 0;
}