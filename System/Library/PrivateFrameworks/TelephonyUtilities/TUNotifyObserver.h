//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUNotifyObserver-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TUNotifyObserver : NSObject <TUNotifyObserver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    int _token;	// 12 = 0xc
    CDUnknownBlockType _callback;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSString *_notificationName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000046158
@property(nonatomic) int token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (void)_endObserving;	// IMP=0x00000000000460e3
- (void)endObserving;	// IMP=0x000000000004609e
- (void)beginObserving;	// IMP=0x0000000000045eed
@property(readonly, nonatomic) unsigned long long state;
@property(readonly, nonatomic, getter=isObserving) _Bool observing;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)dealloc;	// IMP=0x0000000000045d55
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045c76
- (id)initWithNotificationName:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000045c61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

