//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ML3TruthPredicate
{
    _Bool _truthValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000933ad
+ (id)falsePredicate;	// IMP=0x000000000009337d
+ (id)truePredicate;	// IMP=0x000000000009334d
- (_Bool)isFalseAlways;	// IMP=0x000000000009333d
- (_Bool)isTrueAlways;	// IMP=0x000000000009332d
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x00000000000932bb
- (unsigned long long)hash;	// IMP=0x000000000009327c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000931f0
- (id)description;	// IMP=0x0000000000093141
- (id)_predicateString;	// IMP=0x000000000009311a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009309c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000092fd7

@end

