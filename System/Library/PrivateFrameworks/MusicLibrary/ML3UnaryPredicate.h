//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Predicate;

@interface ML3UnaryPredicate
{
    ML3Predicate *_predicate;	// 8 = 0x8
}

+ (id)predicateWithPredicate:(id)arg1;	// IMP=0x00000000000937a6
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009379e
- (void).cxx_destruct;	// IMP=0x000000000009378b
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (id)databaseStatementParameters;	// IMP=0x0000000000093749
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x000000000009372c
- (unsigned long long)hash;	// IMP=0x00000000000936ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000935d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093538
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009348d
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000093425

@end

