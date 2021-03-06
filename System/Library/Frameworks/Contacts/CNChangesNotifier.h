//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangesNotifierProxy;

@interface CNChangesNotifier : NSObject
{
    CNChangesNotifierProxy *_notifierProxy;	// 8 = 0x8
}

+ (void)flushSharedNotifier;	// IMP=0x0000000000098f05
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;	// IMP=0x0000000000098a3c
+ (id)sharedNotifier;	// IMP=0x00000000000989a4
- (void).cxx_destruct;	// IMP=0x0000000000098f8c
@property(retain, nonatomic) CNChangesNotifierProxy *notifierProxy; // @synthesize notifierProxy=_notifierProxy;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;	// IMP=0x0000000000098f5b
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(_Bool)arg1;	// IMP=0x0000000000098f45
- (_Bool)forwardsSelfGeneratedDistributedSaveNotifications;	// IMP=0x0000000000098f2f
- (void)waitForCurrentTasksToFinish;	// IMP=0x0000000000098ec8
- (void)didChangeMeContactSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x0000000000098ea8
- (void)didSaveChangesSuccessfully:(_Bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x0000000000098e65
- (void)willSaveChanges;	// IMP=0x0000000000098e4d
- (void)dealloc;	// IMP=0x0000000000098e13
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2 loggerProvider:(id)arg3;	// IMP=0x0000000000098bad

@end

