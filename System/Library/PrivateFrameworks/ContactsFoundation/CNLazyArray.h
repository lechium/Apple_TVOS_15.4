//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSMutableArray;
@protocol _CNLazyArrayOperation;

@interface CNLazyArray : NSObject <NSFastEnumeration>
{
    id <_CNLazyArrayOperation> _operationChain;	// 8 = 0x8
    NSMutableArray *_output;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000042adc
@property(readonly) NSMutableArray *output; // @synthesize output=_output;
@property(retain) id <_CNLazyArrayOperation> operationChain; // @synthesize operationChain=_operationChain;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000429f4
- (_Bool)consumeNextObject;	// IMP=0x0000000000042975
- (void)consumeAllObjects;	// IMP=0x0000000000042942
- (void)consumeToIndex:(unsigned long long)arg1;	// IMP=0x00000000000428ee
- (CDUnknownBlockType)doOnNext;	// IMP=0x00000000000427f9
- (CDUnknownBlockType)takeLast;	// IMP=0x00000000000426bb
- (CDUnknownBlockType)take;	// IMP=0x000000000004257d
- (CDUnknownBlockType)skipLast;	// IMP=0x0000000000042496
- (CDUnknownBlockType)skip;	// IMP=0x00000000000423af
- (id)distinct;	// IMP=0x0000000000042328
- (CDUnknownBlockType)contains;	// IMP=0x0000000000042188
- (CDUnknownBlockType)none;	// IMP=0x0000000000042000
- (CDUnknownBlockType)any;	// IMP=0x0000000000041e77
- (CDUnknownBlockType)all;	// IMP=0x0000000000041cef
- (CDUnknownBlockType)flatMap;	// IMP=0x0000000000041bfa
- (CDUnknownBlockType)compactMap;	// IMP=0x0000000000041b05
- (CDUnknownBlockType)map;	// IMP=0x0000000000041a10
- (CDUnknownBlockType)filter;	// IMP=0x000000000004191b
@property(readonly) id lastObject;
@property(readonly) id firstObject;
- (CDUnknownBlockType)reduce;	// IMP=0x0000000000041662
@property(readonly) NSArray *allObjects;
- (id)initWithSource:(id)arg1;	// IMP=0x0000000000041595
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4;	// IMP=0x00000000000414be
- (id)initWithFastEnumeration:(id)arg1;	// IMP=0x0000000000041440
- (id)initWithEnumerator:(id)arg1;	// IMP=0x00000000000413c2
- (id)initWithArray:(id)arg1;	// IMP=0x000000000004136c
- (id)init;	// IMP=0x0000000000041353

@end

