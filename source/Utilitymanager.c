/*                                                                 Initiated Header File                                                    */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/*                                              Defined Custom Pattern For In-Between Program                             */
#define PATTERN1 1
#define PATTERN2 2
#define PATTERN3 3
/*                                                  Initiated Pattern Prototype Function                                            */
int pattern(int variable, int limit);
/*                                                     Declared  System Prototype                                                   */
int sysmain()
{
    system("cls");
    main();
}
/*                                                      Declared Function For System-Utilites                                   */
void sysreu()
{
    int options;
    pattern(4, 49);
    printf("\t\t\t%c\t CHOOSE The Service To Start\t\t%c\n", PATTERN3, PATTERN3);
    pattern(4, 49);
    printf("\t\t\t 1 : To Open Calculator .\n");
    printf("\t\t\t 2 : To Get Installed Windows Information .\n");
    printf("\t\t\t 3 : To Get System HARDWARE Information .\n");
    printf("\t\t\t 4 : To Open Device & Computer Manager .\n");
    printf("\t\t\t 5 : To Open System Settings .\n");
    printf("\t\t\t 6 : To Edit \"Network\" Connections .\n");
    printf("\t\t\t 7 : To View Recent Log's of Administrative Events\n\t\t\t   & List Of Running Applications or Memory Comsumption.\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        sleep(1);
        system("calc");
        sysmain();
        break;
    case 2:
        sleep(0.5);
        system("winver");
        sysmain();
        break;
    case 3:
        sleep(0.5);
        system("msinfo32");
        sysmain();
        break;
    case 4:
        sleep(0.5);
        system("devmgmt.msc");
        sleep(3);
        system("compmgmt.msc");
        sysmain();
        break;
    case 5:
        sleep(0.5);
        system("explorer ms-settings:");
        sysmain();
        break;
    case 6:
        sleep(0.5);
        system("ncpa.cpl");
        sysmain();
        break;
    case 7:
        sleep(0.5);
        system("eventvwr.msc");
        sleep(2);
        system("taskmgr");
        sysmain();
        break;
    default:
        sysmain();
    }
}
/*                                                                     Declared Function For Editor Related Utilites                            */
void edituti()
{
    int options;
    pattern(5, 49);
    printf("\t\t\t%c\t CHOOSE The Service To Start\t\t%c\n", PATTERN3, PATTERN3);
    pattern(5, 49);
    printf("\t\t\t 1 :  Open Microsoft WordPad .\n");
    printf("\t\t\t 2 :  Open Microsoft Excel .\n");
    printf("\t\t\t 3 :  Open Microsoft PowerPoint .\n");
    printf("\t\t\t 4 :  Open Notepad In Current Location .\n");
    printf("\t\t\t 5 :  Open Microsoft Paint .\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        sleep(1);
        system("write");
        sysmain();
        break;
    case 2:
        sleep(0.5);
        system("start Excel");
        sysmain();
        break;
    case 3:
        sleep(0.5);
        system("start powerpnt");
        sysmain();
        break;
    case 4:
        sleep(0.5);
        system("notepad");
        sysmain();
        break;
    case 5:
        sleep(0.5);
        system("mspaint");
        sysmain();
        break;
    default:
        sysmain();
    }
}
