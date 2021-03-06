//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface DMDActivationPredicateCompound
{
    NSArray *_subPredicateObservers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000ccbe
@property(readonly, copy, nonatomic) NSArray *subPredicateObservers; // @synthesize subPredicateObservers=_subPredicateObservers;
- (void)reportActivationPredicateObserverDidTrigger;	// IMP=0x001000000000cb6b
- (id)metadata;	// IMP=0x001000000000c927
- (void)invalidate;	// IMP=0x001000000000c7c6
- (void)updateObserverRegistration;	// IMP=0x001000000000c684
- (id)initWithDelegate:(id)arg1 uniqueIdentifier:(id)arg2 subPredicateObservers:(id)arg3 predicate:(id)arg4;	// IMP=0x001000000000c5ec

@end

