//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WFInputParameterMigration
{
}

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;	// IMP=0x000000000012bd7c
- (void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2;	// IMP=0x000000000012cd18
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(CDUnknownBlockType)arg3;	// IMP=0x000000000012cba5
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(CDUnknownBlockType)arg3;	// IMP=0x000000000012c97b
- (void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(CDUnknownBlockType)arg3;	// IMP=0x000000000012c8ba
- (id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2;	// IMP=0x000000000012c6ff
- (id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(_Bool *)arg3 inputActionIndex:(unsigned long long *)arg4;	// IMP=0x000000000012c41f
- (void)migrateWorkflow;	// IMP=0x000000000012bd9c

@end

