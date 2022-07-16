//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIntermediate : NSObject
{
    NSSQLIntermediate *_scope;	// 8 = 0x8
}

+ (_Bool)isSimpleKeypath:(id)arg1;	// IMP=0x000000000017a591
+ (_Bool)expressionIsBasicKeypath:(id)arg1;	// IMP=0x000000000017a4e4
- (id)_generateSQLForVariableExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x000000000017b6b5
- (id)_generateSQLForKeyPathExpression:(id)arg1 allowToMany:(_Bool)arg2 inContext:(id)arg3;	// IMP=0x000000000017adfa
- (void)_promoteJoinsForSubqueryScopedKeypaths;	// IMP=0x000000000017abc0
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)arg1;	// IMP=0x000000000017a808
- (id)_lastScopedItem;	// IMP=0x000000000017a7e9
- (_Bool)keypathExpressionIsSafeLHSForIn:(id)arg1;	// IMP=0x000000000017a7d3
- (id)governingEntity;	// IMP=0x000000000017a7bd
- (id)governingEntityForKeypathExpression:(id)arg1;	// IMP=0x000000000017a7a7
- (id)governingAliasForKeypathExpression:(id)arg1;	// IMP=0x000000000017a791
- (id)governingAlias;	// IMP=0x000000000017a77b
- (id)fetchIntermediateForKeypathExpression:(id)arg1;	// IMP=0x000000000017a4ce
- (id)fetchIntermediate;	// IMP=0x000000000017a4b8
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(_Bool)arg3;	// IMP=0x000000000017a4a2
@property(readonly, nonatomic) _Bool disambiguationKeypathHasToMany;
@property(readonly, nonatomic) NSArray *disambiguationKeypath;
@property(readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
- (_Bool)isIndexExpressionScoped;	// IMP=0x000000000017a441
- (_Bool)isIndexScoped;	// IMP=0x000000000017a422
- (_Bool)isUpdateColumnsScoped;	// IMP=0x000000000017a403
- (_Bool)isWhereScoped;	// IMP=0x000000000017a3e4
- (_Bool)isUpdateScoped;	// IMP=0x000000000017a3c5
- (_Bool)isHavingScoped;	// IMP=0x000000000017a3a6
- (_Bool)isFunctionScoped;	// IMP=0x000000000017a387
- (_Bool)isTargetColumnsScoped;	// IMP=0x000000000017a368
- (_Bool)isOrScoped;	// IMP=0x000000000017a349
- (id)generateSQLStringInContext:(id)arg1;	// IMP=0x000000000017a31b
- (id)initWithScope:(id)arg1;	// IMP=0x000000000017a2dc

@end

