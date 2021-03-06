//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SCRIsolatedActivityScheduler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
    NSMutableDictionary *_lock_timerForTask;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000441e
- (id)succinctDescriptionBuilder;	// IMP=0x000000000000438c
- (id)succinctDescription;	// IMP=0x000000000000433c
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000004292
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000004242
- (id)description;	// IMP=0x00000000000041a1
- (void)_timerFiredForActivity:(id)arg1;	// IMP=0x0000000000003ec4
- (void)completeActivityWithIdentifier:(id)arg1;	// IMP=0x0000000000003cf2
- (void)cancelActivityWithIdentifier:(id)arg1;	// IMP=0x0000000000003bfe
- (void)submitActivity:(id)arg1;	// IMP=0x0000000000003782
- (void)dealloc;	// IMP=0x00000000000034b7
- (id)initWithTargetQueue:(id)arg1;	// IMP=0x0000000000003417

@end

