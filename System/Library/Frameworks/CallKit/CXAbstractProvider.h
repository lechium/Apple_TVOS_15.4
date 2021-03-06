//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXAbstractProviderVendorProtocol-Protocol.h>
#import <CallKit/CXActionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol CXAbstractProviderDelegate, CXAbstractProviderHostProtocol, OS_dispatch_queue;

@interface CXAbstractProvider : NSObject <CXActionDelegate, CXAbstractProviderVendorProtocol>
{
    NSMutableArray *_mutablePendingTransactions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <CXAbstractProviderDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000e6aa
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXAbstractProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x000000000000e35d
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x000000000000dd91
- (void)actionCompleted:(id)arg1;	// IMP=0x000000000000da8d
- (void)_handleConnectionInterruption;	// IMP=0x000000000000da16
- (void)handleConnectionInterruption;	// IMP=0x000000000000d9b4
- (void)sendProviderDidBegin;	// IMP=0x000000000000d906
- (void)_performAction:(id)arg1;	// IMP=0x000000000000d8a6
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d7c1
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d6f3
- (id)_pendingActionWithUUID:(id)arg1;	// IMP=0x000000000000d398
- (void)_updatePendingTransactions;	// IMP=0x000000000000d110
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
- (void)invalidate;	// IMP=0x000000000000ce93
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000cd5b
@property(readonly, nonatomic) id <CXAbstractProviderHostProtocol> hostProtocolDelegate;
- (id)init;	// IMP=0x000000000000cccc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

