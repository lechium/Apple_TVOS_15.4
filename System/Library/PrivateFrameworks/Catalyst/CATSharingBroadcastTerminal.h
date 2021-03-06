//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue;
@protocol CATSharingBroadcastPrimitives, CATSharingBroadcastTerminalDelegate;

@interface CATSharingBroadcastTerminal : NSObject
{
    id <CATSharingBroadcastPrimitives> mBroadcastPrimitive;	// 8 = 0x8
    id <CATSharingBroadcastTerminalDelegate> mDelegate;	// 16 = 0x10
    CATOperationQueue *mDelegationQueue;	// 24 = 0x18
    _Bool mInvalidated;	// 32 = 0x20
    _Bool mIsDisplayingPIN;	// 33 = 0x21
    _Bool _broadcasting;	// 34 = 0x22
    CATOperationQueue *_delegationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000047b77
@property(readonly, nonatomic) CATOperationQueue *delegationQueue; // @synthesize delegationQueue=_delegationQueue;
@property(nonatomic, getter=isBroadcasting) _Bool broadcasting; // @synthesize broadcasting=_broadcasting;
- (void)sessionHasPaired;	// IMP=0x0000000000047909
- (void)sessionNeedsToDisplayPin:(id)arg1;	// IMP=0x0000000000047734
- (void)removePrimitiveHandlers;	// IMP=0x00000000000476dd
- (void)addPrimitiveHandlers;	// IMP=0x00000000000470d0
- (void)_invalidateWithError:(id)arg1 removePrimitiveHandlers:(_Bool)arg2 deactivatePrimitives:(_Bool)arg3;	// IMP=0x0000000000046d45
- (void)_activate;	// IMP=0x0000000000046a03
- (void)invalidate;	// IMP=0x000000000004689d
- (void)activate;	// IMP=0x0000000000046770
- (id)initWithBroadcastPrimitives:(id)arg1 delegate:(id)arg2 delegationQueue:(id)arg3;	// IMP=0x00000000000466b7

@end

