//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIDatabase;

@interface TRIRolloutDatabase : NSObject
{
    TRIDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a76ca
- (_Bool)hasRecordReferencingFactorPackSetId:(id)arg1 withReferenceType:(unsigned int)arg2;	// IMP=0x00000000000a730a
- (_Bool)deactivateDeploymentsWithRolloutId:(id)arg1 deactivatedDeployment:(id *)arg2 deactivatedFactorPackSetId:(id *)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a6b33
- (_Bool)deactivateDeployment:(id)arg1 usingTransaction:(id)arg2;	// IMP=0x00000000000a685a
- (_Bool)activateDeployment:(id)arg1 withFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 deactivatedDeployments:(id)arg4 deactivatedFactorPackSetIds:(id)arg5 usingTransaction:(id)arg6;	// IMP=0x00000000000a5b93
- (_Bool)targetDeployment:(id)arg1 toFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a520f
- (CDStruct_69d7cc99)removeRecordWithDeployment:(id)arg1;	// IMP=0x00000000000a51fb
- (CDStruct_69d7cc99)removeRecordWithDeployment:(id)arg1 usingRefCounting:(_Bool)arg2;	// IMP=0x00000000000a4c3b
- (_Bool)enumerateActiveRecordsWithVisibility:(unsigned int)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4aeb
- (_Bool)enumerateRecordsOverlappingNamespaces:(id)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a492f
- (_Bool)enumerateRecordsWithRolloutId:(id)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a47a2
- (_Bool)enumerateRecordsUsingTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4779
- (id)recordWithDeployment:(id)arg1 usingTransaction:(id)arg2;	// IMP=0x00000000000a44b7
- (_Bool)_enumerateRecordsMatchingWhereClause:(id)arg1 bind:(CDUnknownBlockType)arg2 prependingWithClause:(id)arg3 usingTransaction:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a36d1
- (id)_dataNoCopyFromStmt:(id)arg1 columnName:(const char *)arg2;	// IMP=0x00000000000a35a7
- (_Bool)setTargetedFactorPackSetId:(id)arg1 targetedTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a31a9
- (_Bool)setActiveFactorPackSetId:(id)arg1 activeTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a2dab
- (_Bool)setStatus:(long long)arg1 forDeployment:(id)arg2 usingTransaction:(id)arg3;	// IMP=0x00000000000a2a34
- (_Bool)addNewRolloutWithRecord:(id)arg1;	// IMP=0x00000000000a1ed4
- (struct _PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1ebe
- (struct _PASDBTransactionCompletion_)readTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a1ea8
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000000a1dc2
- (id)init;	// IMP=0x00000000000a1dbc

@end

