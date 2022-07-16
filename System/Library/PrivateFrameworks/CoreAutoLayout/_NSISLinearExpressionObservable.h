//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObservationSource.h>

@class NSISEngine, NSISLinearExpression, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface _NSISLinearExpressionObservable : NSObservationSource
{
    NSNumber *_lastValue;	// 40 = 0x28
    NSISLinearExpression *_expression;	// 48 = 0x30
    NSISEngine *_associatedEngine;	// 56 = 0x38
    NSMutableArray *_variableObservations;	// 64 = 0x40
    id _changeTransactionObservation;	// 72 = 0x48
    _Bool _valueIsDirtied;	// 80 = 0x50
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;	// IMP=0x0000000000005eec
- (id)addObserver:(id)arg1;	// IMP=0x00000000000065a6
- (id)addObserverBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006566
- (_Bool)_overrideUseFastBlockObservers;	// IMP=0x000000000000655e
- (void)dealloc;	// IMP=0x0000000000005f91

@end

