//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HMFFuture : NSObject
{
}

+ (id)inContext:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x000000000000526e
+ (id)futureWithPromise:(id *)arg1;	// IMP=0x00000000000051c2
+ (id)futureWithError:(id)arg1;	// IMP=0x0000000000004fab
+ (id)futureWithValue:(id)arg1;	// IMP=0x0000000000004eb5
+ (id)futureWithDelay:(double)arg1;	// IMP=0x00000000000091ca
+ (id)futureWithNoValue;	// IMP=0x0000000000014503
+ (id)anySettled:(id)arg1;	// IMP=0x0000000000035ae6
+ (id)any:(id)arg1;	// IMP=0x0000000000035575
+ (id)allSettled:(id)arg1;	// IMP=0x000000000003502b
+ (id)all:(id)arg1;	// IMP=0x0000000000034a40
+ (id)futureForOperation:(id)arg1;	// IMP=0x000000000003e6ed
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2 orRecover:(CDUnknownBlockType)arg3;	// IMP=0x0000000000005d45
- (id)inContext:(id)arg1 recover:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005c84
- (id)inContext:(id)arg1 then:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005bc3
- (id)then:(CDUnknownBlockType)arg1 orRecover:(CDUnknownBlockType)arg2;	// IMP=0x0000000000005b02
- (id)recover:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005a4c
- (id)then:(CDUnknownBlockType)arg1;	// IMP=0x0000000000005996
- (void)getResultWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000058e0
@property(readonly) struct _HMFFutureBlockOutcome outcomeIfSettled;
@property(readonly, getter=isPending) _Bool pending;
- (id)description;	// IMP=0x0000000000005731
- (id)timeout:(double)arg1;	// IMP=0x000000000000933a
- (id)ignoreOutcome;	// IMP=0x00000000000147fe
- (id)ignoreResult;	// IMP=0x00000000000147aa
- (id)ignoreErrors;	// IMP=0x0000000000014756
- (id)inContext:(id)arg1 finally:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014622
- (id)finally:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014514
- (_Bool)waitForResult:(id *)arg1 orError:(id *)arg2 withTimeout:(double)arg3;	// IMP=0x0000000000016d8a

@end

