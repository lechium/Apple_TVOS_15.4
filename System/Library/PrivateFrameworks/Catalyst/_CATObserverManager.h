//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class CATOperation, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _CATObserverManager : NSObject <CATOperationObserver>
{
    NSMutableSet *mObservers;	// 8 = 0x8
    int mState;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *mQueue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *mProgressSource;	// 32 = 0x20
    CATOperation *mOperation;	// 40 = 0x28
    CATOperation *mStrongOperation;	// 48 = 0x30
    _Bool mIsObserving;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001309c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000012f1c
- (void)operationDidFinish:(id)arg1;	// IMP=0x0000000000012bc8
- (void)notifyObserversOperationDidProgress:(id)arg1;	// IMP=0x0000000000012a40
- (void)operationDidProgress:(id)arg1;	// IMP=0x00000000000128e7
- (void)operationDidStart:(id)arg1;	// IMP=0x00000000000125d3
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000012490
- (void)addObserver:(id)arg1;	// IMP=0x00000000000121f9
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000011ef2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

