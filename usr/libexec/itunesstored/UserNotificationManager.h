//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface UserNotificationManager : NSObject
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00200000001d6f4d
- (void).cxx_destruct;	// IMP=0x00200000001d784a
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) UNUserNotificationCenter *center; // @synthesize center=_center;
- (id)_bag;	// IMP=0x00100000001d75bd
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x00100000001d72ff
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d6fa2
- (id)init;	// IMP=0x00100000001d6dac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
