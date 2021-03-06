//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject
{
    NSMutableDictionary *_delayedActionTimersByIdentifier;	// 8 = 0x8
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002751f
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;	// IMP=0x00000000000270e0
- (id)_commandHandler;	// IMP=0x00000000000270c7
- (void)performDismissalCommands;	// IMP=0x0000000000026eac
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000026c32
- (void)invalidatePendingCommands;	// IMP=0x0000000000026a46
- (void)_performDelayedActionCommandTimerAction:(id)arg1;	// IMP=0x000000000002680f
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026627
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026182
- (void)dealloc;	// IMP=0x0000000000026144
- (id)init;	// IMP=0x00000000000260cf

@end

