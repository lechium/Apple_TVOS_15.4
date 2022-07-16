//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, PPSQLDatabase, TRIClient, _PASLock;

@interface PPTrialWrapper : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    NSDictionary *_namespaceNamesIdsDict;	// 16 = 0x10
    _Bool _useDefaultFiles;	// 24 = 0x18
    PPSQLDatabase *_db;	// 32 = 0x20
    TRIClient *_trialClient;	// 40 = 0x28
    unsigned int _treatmentsHash;	// 48 = 0x30
    NSString *_concatenatedTreatmentNames;	// 56 = 0x38
}

+ (id)sharedTrialClient;	// IMP=0x000000000014613b
+ (id)sharedInstance;	// IMP=0x0000000000145e2a
- (void).cxx_destruct;	// IMP=0x0000000000145208
@property(readonly) unsigned int treatmentsHash; // @synthesize treatmentsHash=_treatmentsHash;
@property(readonly) NSString *concatenatedTreatmentNames; // @synthesize concatenatedTreatmentNames=_concatenatedTreatmentNames;
- (id)trieForFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000014507f
- (id)mlModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x000000000014506d
- (id)_loadMLModelForModelName:(id)arg1 namespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000144f28
- (id)mlModelPathForModelName:(id)arg1 namespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000144ec8
- (_Bool)hasModel:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000144eb6
- (void)callRegisteredUpdateHandlers;	// IMP=0x0000000000144da5
- (void)callRegisteredUpdateHandlersForNamespaceName:(id)arg1;	// IMP=0x0000000000144d1f
- (void)clearOverrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000144bbb
- (void)overrideFilepathForFileFactor:(id)arg1 namespaceName:(id)arg2 path:(id)arg3;	// IMP=0x0000000000144a2f
- (void)setUseDefaultFiles:(_Bool)arg1;	// IMP=0x0000000000144a26
- (id)levelForFactor:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000144a10
- (id)lazyPlistForFactorName:(id)arg1 namespaceName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000144927
- (id)plistForFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000144846
- (id)directoryForFactorName:(id)arg1 namespaceName:(id)arg2;	// IMP=0x000000000014482e
- (id)filepathForFactor:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000144819
- (id)filepathForFactorName:(id)arg1 namespaceName:(id)arg2 isDirectory:(_Bool)arg3;	// IMP=0x000000000014443d
- (id)defaultFilepathForFactor:(id)arg1 namespaceName:(id)arg2;	// IMP=0x00000000001443a0
- (void)_updateConcatenatedTreatmentNamesAndHash;	// IMP=0x000000000014405f
- (id)readableTreatmentsMapping;	// IMP=0x0000000000143bda
- (_Bool)hasFactor:(id)arg1 namespaceName:(id)arg2;	// IMP=0x0000000000143ab7
- (id)treatmentNameForNamespaceName:(id)arg1;	// IMP=0x0000000000143a37
- (id)addUpdateHandlerForNamespaceName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000014392c
- (void)removeUpdateHandlerForToken:(id)arg1;	// IMP=0x0000000000143884
- (id)lastTreatmentUpdateForNamespaceName:(id)arg1;	// IMP=0x00000000001436b4
- (void)_addDefaultUpdateHandlersForAllNamespacesWithGuardedData:(id)arg1;	// IMP=0x0000000000143445
- (void)dealloc;	// IMP=0x00000000001433d2
- (id)initWithSettings:(id)arg1 database:(id)arg2 trialClient:(id)arg3;	// IMP=0x000000000014320f

@end
