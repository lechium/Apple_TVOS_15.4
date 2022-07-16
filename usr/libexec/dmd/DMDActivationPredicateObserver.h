//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DMDActivationPredicateObserverDelegate;

@interface DMDActivationPredicateObserver : NSObject
{
    _Bool _lastPredicateEvaluationValue;	// 8 = 0x8
    id <DMDActivationPredicateObserverDelegate> _delegate;	// 16 = 0x10
    NSString *_predicateType;	// 24 = 0x18
    NSString *_uniqueIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000d7cd
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *predicateType; // @synthesize predicateType=_predicateType;
@property(nonatomic) _Bool lastPredicateEvaluationValue; // @synthesize lastPredicateEvaluationValue=_lastPredicateEvaluationValue;
@property(nonatomic) __weak id <DMDActivationPredicateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)calendarForIdentifier:(id)arg1;	// IMP=0x001000000000d4dc
- (void)reportActivationPredicateObserverDidTrigger;	// IMP=0x001000000000d40a
- (id)metadata;	// IMP=0x001000000000d2f1
- (void)invalidate;	// IMP=0x001000000000d2dd
- (void)updateObserverRegistration;	// IMP=0x001000000000d2d7
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x001000000000d2cf
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 predicate:(id)arg3;	// IMP=0x001000000000d1cd

@end

