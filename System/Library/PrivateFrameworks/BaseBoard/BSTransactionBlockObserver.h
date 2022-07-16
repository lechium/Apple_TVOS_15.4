//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSTransactionObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface BSTransactionBlockObserver : NSObject <BSTransactionObserver>
{
    NSMutableArray *_willBeginBlocks;	// 8 = 0x8
    NSMutableArray *_didBeginBlocks;	// 16 = 0x10
    NSMutableArray *_didFinishWorkBlocks;	// 24 = 0x18
    NSMutableArray *_didCompleteBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000d4cf
- (void)transactionDidComplete:(id)arg1;	// IMP=0x000000000000d355
- (void)transactionDidFinishWork:(id)arg1;	// IMP=0x000000000000d1db
- (void)transactionDidBegin:(id)arg1;	// IMP=0x000000000000d061
- (void)transactionWillBegin:(id)arg1;	// IMP=0x000000000000cee7
- (void)addTransactionDidCompleteBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ce1d
- (void)addTransactionDidFinishWorkBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cd53
- (void)addTransactionDidBeginBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cc89
- (void)addTransactionWillBeginBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cbbf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

