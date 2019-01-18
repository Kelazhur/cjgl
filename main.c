#include <stdio.h>
#include <string.h>
struct Student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
    int zong;
    int average;
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
            arr[index].zong=arr[index].yuwen+arr[index].shuxue+arr[index].yingyu;
            arr[index].average=(arr[index].yuwen+arr[index].shuxue+arr[index].yingyu)/3;
            index++;
            printf("添加完成，点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==2)
        {
            if(index>0)
            {
                printf("正在删除最后一名学生成绩……\n");
                index--;
                printf("删除完成，点击回车继续\n");
            }
            else
            {
                printf("删除失败，无学生成绩信息，点击回车继续\n");
            }
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==3)
        {
            if(index>0)
            {
                for(int i=0;i<index;i++)
                {
                    printf("第%d个学生%s的语文成绩为：%d分，数学成绩为：%d分，英语成绩为：%d分\n",i+1,arr[i].name,arr[i].yuwen,arr[i].shuxue,arr[i].yingyu);
                }
            }
            else
            {
                printf("查询失败，无学生成绩信息\n");
            }
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==4)
        {
            if(index>0)
            {
                for(int i=0;i<index;i++)
                {
                    if(arr[i].zong<180)
                    {
                    printf("不及格学生有%s\n",arr[i].name);
                    }
                }
            }
            else
            {
                printf("查询失败，无学生成绩信息\n");
            }
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==5)
        {
            if(index>0)
            {
                for(int i=0;i<index;i++)
                {
                    if(arr[i].yuwen<60&&arr[i].shuxue<60&&arr[i].yingyu<60)
                    {
                    printf("所有科目都不及格的学生有%s\n",arr[i].name);
                    }
                }
            }
            else
            {
                printf("查询失败，无学生成绩信息\n");
            }
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==6)
        {
            int high=0;
            char high_name[100];
            for(int i=0;i<index;i++)
            {
                if(arr[i].zong>high)
                {
                    high=arr[i].zong;
                    strcpy(high_name,arr[i].name);
                }
            }
            printf("总分最高的学生为%s,分数为%d\n",high_name,high);
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==7)
        {
            int average=0;
            char average_name[100];
            if(index>0)
            {
                for(int i=0;i<index;i++)
                {
                    if(arr[i].yuwen>60&&arr[i].shuxue>60&&arr[i].yingyu>60)
                    {
                        for(int i=0;i<index;i++)
                        {
                            if(arr[i].average>average)
                            {
                                average=arr[i].average;
                                strcpy(average_name,arr[i].name);
                            }
                        }
                    }
                }
            }
            else
            {
                printf("查询失败，无学生成绩信息\n");
            }
            printf("平均分最高，且没有不及格的学生是%s\n",average_name);
            printf("点击回车继续\n");
            char enter;
            scanf("%c",&enter);
            scanf("%c",&enter);
        }
        if(code==8)
        {
            printf("正在退出……\n");
            break;
        }
    }
    return 0;
}