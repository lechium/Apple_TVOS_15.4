//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDActivationPredicateObserver;

@interface DMDActivationPredicateNot
{
    DMDActivationPredicateObserver *_subPredicateObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000d1ba
@property(retain, nonatomic) DMDActivationPredicateObserver *subPredicateObserver; // @synthesize subPredicateObserver=_subPredicateObserver;
- (id)metadata;	// IMP=0x001000000000d08b
- (id)evaluatePredicateWithError:(id *)arg1;	// IMP=0x001000000000cebf
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 subPredicateObserver:(id)arg3 predicate:(id)arg4;	// IMP=0x001000000000ce35

@end
