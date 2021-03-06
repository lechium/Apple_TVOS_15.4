//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject
{
    NSArray *_conditions;	// 8 = 0x8
}

+ (id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(_Bool)arg2;	// IMP=0x0000000000027620
+ (id)_findBestConditionMatchForPredicates:(id)arg1;	// IMP=0x00000000000271e8
+ (id)_findBestMatchingConditionsForPredicates:(id)arg1;	// IMP=0x00000000000270a7
+ (id)_flattenedSubpredicatesForAndPredicate:(id)arg1;	// IMP=0x0000000000026efe
+ (id)conditionCollectionForPredicate:(id)arg1;	// IMP=0x0000000000026d0e
- (void).cxx_destruct;	// IMP=0x0000000000027cd0
@property(retain, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, copy, nonatomic) NSPredicate *predicate;
- (void)removeCondition:(id)arg1;	// IMP=0x0000000000027aa3
- (void)addCondition:(id)arg1;	// IMP=0x0000000000027a0f
- (id)initWithConditions:(id)arg1;	// IMP=0x00000000000279a4
- (id)init;	// IMP=0x00000000000278ef

@end

