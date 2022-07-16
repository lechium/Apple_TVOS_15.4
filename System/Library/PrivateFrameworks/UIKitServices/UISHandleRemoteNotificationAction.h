//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSAction.h>

@interface UISHandleRemoteNotificationAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;	// IMP=0x000000000000465d
- (void)sendResponse:(id)arg1;	// IMP=0x000000000000456f
- (unsigned long long)UIActionType;	// IMP=0x00000000000044fc
- (id)userResponse;	// IMP=0x00000000000044a7
- (id)action;	// IMP=0x00000000000043c8
- (id)payload;	// IMP=0x0000000000004373
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004343
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 withHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000431e
- (id)initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000042f6
- (id)initWithRemoteNotificationPayload:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000042cc
- (id)_initWithRemoteNotificationPayload:(id)arg1 action:(id)arg2 userResponse:(id)arg3 type:(unsigned long long)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000040d7

@end
