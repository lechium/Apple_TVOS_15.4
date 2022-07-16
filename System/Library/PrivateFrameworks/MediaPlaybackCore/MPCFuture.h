//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMapTable, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MPCFuture : NSObject
{
    _Bool _finalized;	// 8 = 0x8
    _Bool _invalid;	// 9 = 0x9
    _Bool _disconnected;	// 10 = 0xa
    id _result;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    NSString *_debugLabel;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_accessQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 48 = 0x30
    NSMutableArray *_successBlocks;	// 56 = 0x38
    NSMutableArray *_failureBlocks;	// 64 = 0x40
    NSMutableArray *_completionBlocks;	// 72 = 0x48
    NSMapTable *_invalidBlocks;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000ebc1f
@property(readonly, nonatomic) NSMapTable *invalidBlocks; // @synthesize invalidBlocks=_invalidBlocks;
@property(readonly, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(readonly, nonatomic) NSMutableArray *failureBlocks; // @synthesize failureBlocks=_failureBlocks;
@property(readonly, nonatomic) NSMutableArray *successBlocks; // @synthesize successBlocks=_successBlocks;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(readonly, nonatomic, getter=isDisconnected) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(readonly, nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id result; // @synthesize result=_result;
- (void)_onQueue_finalize;	// IMP=0x00000000000ebb4a
- (id)description;	// IMP=0x00000000000eba46
- (void)dealloc;	// IMP=0x00000000000eb988
- (void)disconnect;	// IMP=0x00000000000eb93d
- (void)invalidate;	// IMP=0x00000000000eb8f2
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000eb859
- (void)finishWithValue:(id)arg1;	// IMP=0x00000000000eb7c0
- (id)onInvalid:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb6f5
- (id)onCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb667
- (id)onFailure:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb5d9
- (id)onSuccess:(CDUnknownBlockType)arg1;	// IMP=0x00000000000eb54b
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000eb49a

@end

