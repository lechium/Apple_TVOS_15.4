//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MCUserNotificationManager : NSObject
{
}

+ (id)sharedManager;	// IMP=0x0000000000098072
- (id)_invalidTargetMessageForDevice:(unsigned long long)arg1;	// IMP=0x000000000009b83a
- (id)_purgatoryMessageForDevice:(unsigned long long)arg1;	// IMP=0x000000000009b720
- (void)_updateTitle:(id *)arg1 andMessage:(id *)arg2 withUnavailableTargetInfoForDevice:(unsigned long long)arg3;	// IMP=0x000000000009b620
- (void)_updateTitle:(id *)arg1 andMessage:(id *)arg2 withTargetFailureInfoForDevice:(unsigned long long)arg3 fromError:(id)arg4;	// IMP=0x000000000009b4ae
- (void)cancelNotificationEntriesMatchingPredicate:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009af6b
- (void)cancelNotificationsWithIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000009ae2c
- (void)mainQueueDidReceiveAppWhitelistChangedNotification;	// IMP=0x000000000009a88a
- (void)cancelAllNotificationsCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a866
- (void)displayUserNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonText:(id)arg4 alternateButtonText:(id)arg5 otherButtonText:(id)arg6 textfieldPlaceholder:(id)arg7 displayOnLockScreen:(_Bool)arg8 dismissOnLock:(_Bool)arg9 displayInAppWhitelistModes:(_Bool)arg10 dismissAfterTimeInterval:(double)arg11 assertion:(id)arg12 completionBlock:(CDUnknownBlockType)arg13;	// IMP=0x000000000009a46a
- (id)displayQueueProfileError:(id)arg1 targetDevice:(unsigned long long)arg2;	// IMP=0x0000000000099ee4
- (void)inviteUserToVPPWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000099685
- (void)promptUserToLogIntoiTunesWithTitle:(id)arg1 message:(id)arg2 assertion:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000983eb
@property(readonly, nonatomic) _Bool hasOutstandingNotifications;
- (void)dealloc;	// IMP=0x000000000009826e
- (id)init;	// IMP=0x00000000000980c7

@end

