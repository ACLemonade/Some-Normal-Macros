//
//  Contants.h
//  CarNews
//
//  Created by Lemonade on 16/8/3.
//  Copyright © 2016年 Lemonade. All rights reserved.
//

#ifndef Contants_h
#define Contants_h


//屏幕宽度
#define kScreenW [UIScreen mainScreen].bounds.size.width
//屏幕高度
#define kScreenH [UIScreen mainScreen].bounds.size.height
//三原色设置
#define kRGBAlpha(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
//Documents文件夹路径
#define kDocPath NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).firstObject
//AppDelegate的实例对象
#define kAppDelegate ((AppDelegate *)[UIApplication sharedApplication].delegate)
//把self转化为__weak__block的方式,方便地在block中使用而不导致内存循环引用的问题
#define WK(weakSelf) \
__block __weak __typeof(&*self)weakSelf = self

#endif /* Contants_h */
