//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, PKFieldProperties;
@protocol OS_dispatch_queue, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    unsigned long long _enablePersistentFieldDetectionReasons;	// 24 = 0x18
    PKFieldProperties *_fieldProperties;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_replyQueue;	// 48 = 0x30
    id <PKFieldDetectorDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003182a2
- (void)_setPersistentFieldDetectionEnabled:(_Bool)arg1;	// IMP=0x000000000031829c
- (void)_evaulatePersistentFieldDetectionEnablementReasons;	// IMP=0x00000000003181a2
@property(nonatomic) __weak id <PKFieldDetectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PKFieldProperties *fieldProperties;
- (void)unregisterObserver:(id)arg1;	// IMP=0x000000000031808a
- (void)registerObserver:(id)arg1;	// IMP=0x0000000000317f37
- (void)setPersistentFieldDetectionEnabled:(_Bool)arg1;	// IMP=0x0000000000317ecc
- (void)requestPersistentFieldDetectionEnabled:(_Bool)arg1 withReason:(unsigned long long)arg2;	// IMP=0x0000000000317c69
- (void)updateRadioState;	// IMP=0x0000000000317c4e
- (void)dealloc;	// IMP=0x0000000000317c1f
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000317ac2
- (id)init;	// IMP=0x0000000000317aae

@end

