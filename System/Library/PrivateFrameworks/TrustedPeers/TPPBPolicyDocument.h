//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;	// 8 = 0x8
    NSMutableArray *_categoriesByViews;	// 16 = 0x10
    NSMutableArray *_inheritedExcludedViews;	// 24 = 0x18
    NSMutableArray *_introducersByCategorys;	// 32 = 0x20
    NSMutableArray *_keyViewMappings;	// 40 = 0x28
    NSMutableArray *_modelToCategorys;	// 48 = 0x30
    NSMutableArray *_piggybackViews;	// 56 = 0x38
    NSMutableArray *_priorityViews;	// 64 = 0x40
    NSMutableArray *_redactions;	// 72 = 0x48
    NSMutableArray *_userControllableViews;	// 80 = 0x50
    CDStruct_0e29c504 _has;	// 88 = 0x58
}

+ (Class)inheritedExcludedViewsType;	// IMP=0x000000000003012c
+ (Class)priorityViewsType;	// IMP=0x000000000003011b
+ (Class)piggybackViewsType;	// IMP=0x000000000003010a
+ (Class)userControllableViewsType;	// IMP=0x00000000000300f9
+ (Class)keyViewMappingType;	// IMP=0x00000000000300e8
+ (Class)redactionsType;	// IMP=0x00000000000300d7
+ (Class)introducersByCategoryType;	// IMP=0x00000000000300c6
+ (Class)categoriesByViewType;	// IMP=0x00000000000300b5
+ (Class)modelToCategoryType;	// IMP=0x00000000000300a4
- (void).cxx_destruct;	// IMP=0x000000000002fb34
@property(retain, nonatomic) NSMutableArray *inheritedExcludedViews; // @synthesize inheritedExcludedViews=_inheritedExcludedViews;
@property(retain, nonatomic) NSMutableArray *priorityViews; // @synthesize priorityViews=_priorityViews;
@property(retain, nonatomic) NSMutableArray *piggybackViews; // @synthesize piggybackViews=_piggybackViews;
@property(retain, nonatomic) NSMutableArray *userControllableViews; // @synthesize userControllableViews=_userControllableViews;
@property(retain, nonatomic) NSMutableArray *keyViewMappings; // @synthesize keyViewMappings=_keyViewMappings;
@property(retain, nonatomic) NSMutableArray *redactions; // @synthesize redactions=_redactions;
@property(retain, nonatomic) NSMutableArray *introducersByCategorys; // @synthesize introducersByCategorys=_introducersByCategorys;
@property(retain, nonatomic) NSMutableArray *categoriesByViews; // @synthesize categoriesByViews=_categoriesByViews;
@property(retain, nonatomic) NSMutableArray *modelToCategorys; // @synthesize modelToCategorys=_modelToCategorys;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002f0e4
- (unsigned long long)hash;	// IMP=0x000000000002ef9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ed35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e17c
- (void)copyTo:(id)arg1;	// IMP=0x000000000002dc04
- (void)writeTo:(id)arg1;	// IMP=0x000000000002d3f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002d3e9
- (id)dictionaryRepresentation;	// IMP=0x000000000002c9a0
- (id)description;	// IMP=0x000000000002c8f1
- (id)inheritedExcludedViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c8d4
- (unsigned long long)inheritedExcludedViewsCount;	// IMP=0x000000000002c8b7
- (void)addInheritedExcludedViews:(id)arg1;	// IMP=0x000000000002c84d
- (void)clearInheritedExcludedViews;	// IMP=0x000000000002c830
- (id)priorityViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c813
- (unsigned long long)priorityViewsCount;	// IMP=0x000000000002c7f6
- (void)addPriorityViews:(id)arg1;	// IMP=0x000000000002c78c
- (void)clearPriorityViews;	// IMP=0x000000000002c76f
- (id)piggybackViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c752
- (unsigned long long)piggybackViewsCount;	// IMP=0x000000000002c735
- (void)addPiggybackViews:(id)arg1;	// IMP=0x000000000002c6cb
- (void)clearPiggybackViews;	// IMP=0x000000000002c6ae
- (id)userControllableViewsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c691
- (unsigned long long)userControllableViewsCount;	// IMP=0x000000000002c674
- (void)addUserControllableViews:(id)arg1;	// IMP=0x000000000002c60a
- (void)clearUserControllableViews;	// IMP=0x000000000002c5ed
- (id)keyViewMappingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c5d0
- (unsigned long long)keyViewMappingsCount;	// IMP=0x000000000002c5b3
- (void)addKeyViewMapping:(id)arg1;	// IMP=0x000000000002c549
- (void)clearKeyViewMappings;	// IMP=0x000000000002c52c
- (id)redactionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c50f
- (unsigned long long)redactionsCount;	// IMP=0x000000000002c4f2
- (void)addRedactions:(id)arg1;	// IMP=0x000000000002c488
- (void)clearRedactions;	// IMP=0x000000000002c46b
- (id)introducersByCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c44e
- (unsigned long long)introducersByCategorysCount;	// IMP=0x000000000002c431
- (void)addIntroducersByCategory:(id)arg1;	// IMP=0x000000000002c3c7
- (void)clearIntroducersByCategorys;	// IMP=0x000000000002c3aa
- (id)categoriesByViewAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c38d
- (unsigned long long)categoriesByViewsCount;	// IMP=0x000000000002c370
- (void)addCategoriesByView:(id)arg1;	// IMP=0x000000000002c306
- (void)clearCategoriesByViews;	// IMP=0x000000000002c2e9
- (id)modelToCategoryAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002c2cc
- (unsigned long long)modelToCategorysCount;	// IMP=0x000000000002c2af
- (void)addModelToCategory:(id)arg1;	// IMP=0x000000000002c245
- (void)clearModelToCategorys;	// IMP=0x000000000002c228
@property(nonatomic) _Bool hasPolicyVersion;

@end

