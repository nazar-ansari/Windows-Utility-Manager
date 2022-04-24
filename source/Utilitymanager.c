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
/*                                                                             Declared Void Function For System Accessiblity                           */
void sysaccess()
{
    int options;
    pattern(6, 49);
    printf("\t\t\t%c\t CHOOSE The Service To Start\t\t%c\n", PATTERN3, PATTERN3);
    pattern(6, 49);
    printf("\t\t\t 1 :  Open System Accessiblity Section .\n");
    printf("\t\t\t 2 :  User Account Management .\n");
    printf("\t\t\t 3 :  Backup & Restore Utility .\n");
    printf("\t\t\t 4 :  System Display Color Management .\n");
    printf("\t\t\t 5 :  Edit Environment Variable .\n");
    printf("\t\t\t 6 :  Go To Previous Restore Point .\n");
    printf("\t\t\t 7 :  Start On-Screen Keyboard .\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        sleep(1);
        system("utilman");
        sysmain();
        break;
    case 2:
        sleep(0.5);
        system("netplwiz");
        sysmain();
        break;
    case 3:
        sleep(0.5);
        system(" start sdclt");
        sysmain();
        break;
    case 4:
        sleep(0.5);
        system("control color");
        sysmain();
        break;
    case 5:
        sleep(0.5);
        system("rundll32.exe sysdm.cpl,EditEnvironmentVariables");
        sysmain();
        break;
    case 6:
        sleep(0.5);
        system("rstrui");
        sysmain();
        break;
    case 7:
        sleep(0.5);
        system("osk");
        sysmain();
        break;
    default:
        sysmain();
    }
}
/*                                                                 Declared Function For Disk Utilities                                     */
void diskuti()
{
    int options;
    pattern(3, 49);
    printf("\t\t\t%c\t CHOOSE The Service To Start\t\t%c\n", PATTERN3, PATTERN3);
    pattern(3, 49);
    printf("\t\t\t 1 :  Disk Cleanup Utility .\n");
    printf("\t\t\t 2 :  Defrag The Disk .\n");
    printf("\t\t\t 3 :  Open Disk Management .\n");
    scanf("%d", &options);
    switch (options)
    {
    case 1:
        sleep(1);
        system("cleanmgr");
        sysmain();
        break;
    case 2:
        system("dfrgui");
        sysmain();
        break;
    case 3:
        sleep(0.5);
        system("diskmgmt.msc");
        sysmain();
        break;
    default:
        sysmain();
    }
}
