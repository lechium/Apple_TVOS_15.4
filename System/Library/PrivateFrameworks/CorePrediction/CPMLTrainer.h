//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPMLDB, CPMLSchema, CPMLStorageManager, NSDictionary;
@protocol CPMLAlgorithmProtocol;

@interface CPMLTrainer : NSObject
{
    _Bool shouldFail;	// 8 = 0x8
    struct sqlite3 *modelDB;	// 16 = 0x10
    NSDictionary *modelPlist;	// 24 = 0x18
    CPMLDB *cpmlDB;	// 32 = 0x20
    struct CPMLCDB *cpCDB;	// 40 = 0x28
    struct CPMLAlgorithm *cpMLAlgo;	// 48 = 0x30
    void *cpRemapper;	// 56 = 0x38
    CPMLSchema *cpmlSchema;	// 64 = 0x40
    void *trainerCPStatistics;	// 72 = 0x48
    struct CPMLSerialization *trainerCPSerializer;	// 80 = 0x50
    struct CPMLTunableData *cpTuneableData;	// 88 = 0x58
    int mapFunction;	// 96 = 0x60
    struct CPMLDelegate *_cpmlDelegate;	// 104 = 0x68
    CPMLStorageManager *_storageManager;	// 112 = 0x70
    id <CPMLAlgorithmProtocol> _theDelegate;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000000e636
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;	// IMP=0x000000000000e149
- (void)train:(_Bool)arg1;	// IMP=0x000000000000de39
- (id)fileProtectionClassRequest:(id)arg1;	// IMP=0x000000000000de31
- (void)dealloc;	// IMP=0x000000000000dd85
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;	// IMP=0x000000000000d4a7
- (id)getSolution;	// IMP=0x000000000000d344

@end

