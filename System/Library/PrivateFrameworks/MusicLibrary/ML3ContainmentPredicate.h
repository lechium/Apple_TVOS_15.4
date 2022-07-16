//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface ML3ContainmentPredicate
{
    NSSet *_values;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0000000000094a82
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000094a7a
- (void).cxx_destruct;	// IMP=0x0000000000094a67
@property(retain, nonatomic) NSSet *values; // @synthesize values=_values;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;	// IMP=0x0000000000094864
- (id)databaseStatementParameters;	// IMP=0x000000000009481c
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x000000000009463a
- (id)description;	// IMP=0x000000000009432e
- (unsigned long long)hash;	// IMP=0x00000000000942a1
- (id)_orderedValues;	// IMP=0x0000000000094220
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000094148
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000940ad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093f8b
- (id)initWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0000000000093e90

@end
