//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AXUIAlertContext, NSDictionary;

@interface AXUIAlert : UIView
{
    AXUIAlertContext *_context;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
}

+ (id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5 userInfo:(id)arg6;	// IMP=0x00000000000024d0
- (void).cxx_destruct;	// IMP=0x0000000000002619
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak AXUIAlertContext *context; // @synthesize context=_context;
- (void)addToContainerView:(id)arg1;	// IMP=0x00000000000025c1

@end
