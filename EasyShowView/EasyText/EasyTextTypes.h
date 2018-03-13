//
//  EasyTextTypes.h
//  EasyShowViewDemo
//
//  Created by nf on 2018/3/13.
//  Copyright © 2018年 chenliangloveyou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


typedef NS_ENUM(NSInteger, ShowTextEvent) {
    ShowTextEventUndefine = 0 ,
    ShowTextEventNo = 1,
    ShowTextEventYes ,
};

typedef NS_ENUM(NSInteger, ShowTextStatus) {
    
    ShowTextStatusPureText ,/** 纯文字 */
    ShowTextStatusSuccess,  /** 成功 */
    ShowTextStatusError,    /** 失败 */
    ShowTextStatusInfo,     /** 提示 */
    ShowTextStatusImage,    /** 自定义图片 */
};

/**
 * 设置文字的位置
 */
typedef NS_ENUM(NSInteger , ShowTextStatusType) {
    ShowTextStatusTypeUndefine = 0 ,  /** 未定义 */
    ShowTextStatusTypeTop = 1 ,
    ShowTextStatusTypeMidden ,
    ShowTextStatusTypeBottom,
    ShowTextStatusTypeStatusBar ,//在statusbar上显示
    ShowTextStatusTypeNavigation ,//在navigation上显示
};

/**
 * 文字展示时的动画类型
 */
typedef NS_ENUM(NSInteger , TextAnimationType) {
    TextAnimationTypeUndefine = 0 ,  /** 未定义 */
    TextAnimationTypeNone ,//无动画
    TextAnimationTypeFade,//alpha改变
    TextAnimationTypeBounce ,//抖动
};



@interface EasyTextTypes : NSObject

@end