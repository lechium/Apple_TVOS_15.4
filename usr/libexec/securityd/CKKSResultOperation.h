//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSBlockOperation.h>

@class CKKSCondition, NSDate, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSResultOperation : NSBlockOperation
{
    _Bool _timeoutCanOccur;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_finishDate;	// 24 = 0x18
    CKKSCondition *_completionHandlerDidRunCondition;	// 32 = 0x20
    long long _descriptionErrorCode;	// 40 = 0x28
    NSMutableArray *_successDependencies;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_timeoutQueue;	// 56 = 0x38
    CDUnknownBlockType _finishingBlock;	// 64 = 0x40
}

+ (id)named:(id)arg1 withBlockTakingSelf:(CDUnknownBlockType)arg2;	// IMP=0x004000000011e41f
+ (id)named:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000011e3ab
+ (id)operationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011e359
- (void).cxx_destruct;	// IMP=0x002000000011df62
@property(copy) CDUnknownBlockType finishingBlock; // @synthesize finishingBlock=_finishingBlock;
@property(retain) NSObject<OS_dispatch_queue> *timeoutQueue; // @synthesize timeoutQueue=_timeoutQueue;
@property _Bool timeoutCanOccur; // @synthesize timeoutCanOccur=_timeoutCanOccur;
@property(retain) NSMutableArray *successDependencies; // @synthesize successDependencies=_successDependencies;
@property long long descriptionErrorCode; // @synthesize descriptionErrorCode=_descriptionErrorCode;
@property(retain) CKKSCondition *completionHandlerDidRunCondition; // @synthesize completionHandlerDidRunCondition=_completionHandlerDidRunCondition;
@property(retain) NSDate *finishDate; // @synthesize finishDate=_finishDate;
@property(retain) NSError *error; // @synthesize error=_error;
- (_Bool)allSuccessful:(id)arg1;	// IMP=0x001000000011d825
- (_Bool)allDependentsSuccessful;	// IMP=0x001000000011d7d2
- (void)addNullableSuccessDependency:(id)arg1;	// IMP=0x001000000011d71f
- (void)addSuccessDependency:(id)arg1;	// IMP=0x001000000011d70d
- (id)timeout:(unsigned long long)arg1;	// IMP=0x001000000011d62a
- (id)_onqueueTimeoutError;	// IMP=0x001000000011d4fd
- (id)descriptionError;	// IMP=0x001000000011d41a
- (id)dependenciesDescriptionError;	// IMP=0x001000000011d1c9
- (void)invalidateTimeout;	// IMP=0x001000000011d158
- (void)start;	// IMP=0x001000000011d0f5
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000011cffc
- (id)debugDescription;	// IMP=0x001000000011cfea
- (id)description;	// IMP=0x001000000011ce58
- (id)operationStateString;	// IMP=0x001000000011cd6d
- (id)init;	// IMP=0x001000000011cbc9

@end

