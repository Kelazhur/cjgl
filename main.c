#include <stdio.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
struct Student arr[1024];
int index=0;
int main()
{
    printf("学生成绩管理系统\n");
    while(1)
    {
        printf("1---添加学生成绩\n");
        printf("2---删除学生成绩\n");
        printf("3---显示所有学生成绩\n");
        printf("4---业务1：所有总分不及格的学生（小于180）\n");
        printf("5---业务2：每一科都不及格的学生\n");
        printf("6---业务3：总分最高的学生\n");
        printf("7---业务4：显示平均分最高，且没有不及格的学生\n");
        printf("8---退出\n");
        printf("请选择：\n");
        int code;
        scanf("%d", &code);
        if(code==1)
        {
            printf("请输入学生姓名：\n");
            scanf("%s",&arr[index].name);
            printf("请输入学生语文成绩：\n");
            scanf("%d",&(arr[index].yuwen));
            printf("请输入学生数学成绩：\n");
            scanf("%d",&(arr[index].shuxue));
            printf("请输入学生英语成绩：\n");
            scanf("%d",&(arr[index].yingyu));
            index++;
            printf("添加完成，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==2)
        {}
        if(code==3)
        {}
        if(code==4)
        {}
        if(code==5)
        {}
        if(code==6)
        {}
        if(code==7)
        {}
        if(code==8)
        {
            printf("正在退出……\n");
            break;
        }
    }
    return 0;
}