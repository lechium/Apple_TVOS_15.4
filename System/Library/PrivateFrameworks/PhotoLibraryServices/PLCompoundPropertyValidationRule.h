//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PLCompoundPropertyValidationRule
{
    long long _compoundType;	// 8 = 0x8
    NSArray *_rules;	// 16 = 0x10
}

+ (id)orCompoundPropertyValidationRuleWithRules:(id)arg1;	// IMP=0x00000000004fbd95
+ (id)andCompoundPropertyValidationRuleWithRules:(id)arg1;	// IMP=0x00000000004fbd4a
- (void).cxx_destruct;	// IMP=0x00000000004fbd37
@property(retain, nonatomic) NSArray *rules; // @synthesize rules=_rules;
@property(nonatomic) long long compoundType; // @synthesize compoundType=_compoundType;
- (id)currentValuesOfObject:(id)arg1;	// IMP=0x00000000004fbaad
- (id)keyPaths;	// IMP=0x00000000004fb90a
- (id)predicate;	// IMP=0x00000000004fb701
- (id)initWithType:(long long)arg1 rules:(id)arg2;	// IMP=0x00000000004fb66c

@end

