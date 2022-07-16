//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCompoundPredicate, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface IAMDecomposedKey : NSObject
{
    NSMutableArray *rawPredicateConditions;	// 8 = 0x8
    NSCompoundPredicate *compoundPredicate;	// 16 = 0x10
    _Bool compoundPredicateNeedsInitialization;	// 24 = 0x18
    NSMutableDictionary *_ruleDestructuredIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002ba3
@property(retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers; // @synthesize ruleDestructuredIdentifiers=_ruleDestructuredIdentifiers;
- (void)constructCompoundPredicateIfNeeded;	// IMP=0x00000000000029de
- (_Bool)predicatesMatchFigaroEventProperties:(id)arg1;	// IMP=0x000000000000296e
- (_Bool)hasPredicates;	// IMP=0x0000000000002951
- (void)addPredicateCondition:(id)arg1;	// IMP=0x0000000000002901
- (id)init;	// IMP=0x0000000000002873

@end

