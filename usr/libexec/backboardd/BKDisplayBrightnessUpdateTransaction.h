//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayBrightnessUpdateTransactionManager, BSAbsoluteMachTimer, NSString;
@protocol OS_dispatch_queue;

@interface BKDisplayBrightnessUpdateTransaction : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    BKDisplayBrightnessUpdateTransactionManager *_transactionManager;	// 24 = 0x18
    BSAbsoluteMachTimer *_timer;	// 32 = 0x20
    double _expirationTime;	// 40 = 0x28
    _Bool _invalidated;	// 48 = 0x30
}

+ (id)_sharedQueue;	// IMP=0x0020000000043364
+ (void)beginImplicitTransaction;	// IMP=0x0010000000043321
- (void).cxx_destruct;	// IMP=0x0020000000043278
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000043266
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000043216
- (id)succinctDescriptionBuilder;	// IMP=0x00100000000431b1
- (id)succinctDescription;	// IMP=0x0010000000043161
@property(readonly, copy) NSString *description;
- (void)_queue_updateExpirationTimeWithIntervalSinceNow:(double)arg1;	// IMP=0x00100000000430fb
- (void)_queue_invalidate;	// IMP=0x001000000004307e
- (void)_queue_setTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x0010000000042f93
- (void)invalidate;	// IMP=0x0010000000042f48
- (void)dealloc;	// IMP=0x0010000000042dbd
- (id)initWithIdentifier:(id)arg1 transactionManager:(id)arg2;	// IMP=0x0010000000042cce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
