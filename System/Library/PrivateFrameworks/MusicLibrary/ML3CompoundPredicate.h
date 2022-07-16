//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface ML3CompoundPredicate
{
    NSArray *_predicates;	// 8 = 0x8
}

+ (id)predicateMatchingPredicates:(id)arg1;	// IMP=0x00000000000991a9
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000991a1
- (void).cxx_destruct;	// IMP=0x000000000009918e
@property(retain, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;	// IMP=0x0000000000098fd6
- (id)spotlightPredicate;	// IMP=0x0000000000098e8b
- (_Bool)isDynamicForEntityClass:(Class)arg1;	// IMP=0x0000000000098d4a
- (id)databaseStatementParameters;	// IMP=0x0000000000098baf
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x000000000009895c
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x0000000000098767
- (id)description;	// IMP=0x00000000000986b8
- (unsigned long long)hash;	// IMP=0x0000000000098637
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009855f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000984c4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000983cb
- (id)initWithPredicates:(id)arg1;	// IMP=0x0000000000098363

// Remaining properties
@property(readonly, copy, nonatomic) NSString *compoundOperatorJoiner; // @dynamic compoundOperatorJoiner;

@end

