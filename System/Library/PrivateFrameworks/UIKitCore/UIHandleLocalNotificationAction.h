//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSString, UILocalNotification;

@interface UIHandleLocalNotificationAction : BSAction
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;	// IMP=0x00000000006453e7
- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x00000000006453df
- (id)initWithXPCDictionary:(id)arg1;	// IMP=0x00000000006453d1
- (long long)UIActionType;	// IMP=0x00000000006453c9
@property(readonly, copy, nonatomic) NSDictionary *userResponse;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, copy, nonatomic) UILocalNotification *notification;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000645322
- (id)initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000645314
- (id)initWithNotification:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000645306
- (id)initWithNotification:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000006452f8
- (id)initWithNotification:(id)arg1;	// IMP=0x00000000006452ea
- (id)_initWithNotification:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(long long)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006452dc

@end
