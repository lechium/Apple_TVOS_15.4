//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VNEntityIdentificationModelConfiguration, VNEntityIdentificationModelInformation, VNEntityIdentificationModelTrainedModel;
@protocol VNEntityIdentificationModelDataSource, VNEntityIdentificationModelDelegate;

@interface VNEntityIdentificationModel : NSObject
{
    id <VNEntityIdentificationModelDelegate> _delegate_DO_NOT_ACCESS_DIRECTLY;	// 8 = 0x8
    struct {
        unsigned int willTrain:1;
        unsigned int didTrain:1;
        unsigned int failedTraining:1;
        unsigned int willDropTrainingData:1;
        unsigned int didDropTrainingData:1;
    } _delegateFlags;	// 16 = 0x10
    VNEntityIdentificationModelConfiguration *_configuration;	// 24 = 0x18
    id <VNEntityIdentificationModelDataSource> _dataSource_DO_NOT_ACCESS_DIRECTLY;	// 32 = 0x20
    unsigned long long _lastDataChangeSequenceNumber;	// 40 = 0x28
    VNEntityIdentificationModelTrainedModel *_trainedModel_DO_NOT_ACCESS_DIRECTLY;	// 48 = 0x30
}

+ (id)supportedWriteVersions;	// IMP=0x000000000022a5e8
+ (id)informationForModelWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022a4f8
+ (id)informationForModelWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000022a408
+ (id)modelFromURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a2fd
+ (id)modelFromData:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a1f2
+ (id)modelFromStream:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a11a
+ (id)supportedReadVersions;	// IMP=0x000000000022a0ec
+ (id)modelWithConfiguration:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x000000000022a055
+ (id)supportedRequestSpecifiers;	// IMP=0x0000000000229fd9
+ (_Bool)isReadOnly;	// IMP=0x0000000000229fd1
+ (_Bool)validateAceptableObservation:(id)arg1 forEntityPrintOriginatingRequestSpecifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000229ec3
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000229e7f
+ (_Bool)canCreateModelOfClass:(Class)arg1 withObjects:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000229d97
+ (_Bool)validateConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000229d2e
+ (id)modelConfigurationForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000229bf4
+ (_Bool)readObjectForVersion1Tag:(unsigned int)arg1 fromInputStream:(id)arg2 intoObjectDictionary:(id)arg3 md5Context:(struct CC_MD5state_st *)arg4 error:(id *)arg5;	// IMP=0x00000000002293fa
- (void).cxx_destruct;	// IMP=0x00000000002284af
- (id)entityPredictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002283f9
- (id)trainingObservationsForEntityWithUniqueIdentifier:(id)arg1 canceller:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002281a5
- (id)observationCountsForAllEntities;	// IMP=0x000000000022805f
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000227db1
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000227c36
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000227b9d
- (id)uniqueIdentifierForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000227b38
- (id)entityUniqueIdentifiers;	// IMP=0x0000000000227a53
- (unsigned long long)entityCount;	// IMP=0x0000000000227a10
- (_Bool)validateWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002279dd
@property(readonly, copy) VNEntityIdentificationModelInformation *information;
@property(readonly, copy) VNEntityIdentificationModelConfiguration *configuration;
- (_Bool)writeToURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000227819
- (id)dataWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002276d7
- (_Bool)writeToStream:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000227624
@property(retain) id <VNEntityIdentificationModelDelegate> delegate;
- (void)dropTrainedModel;	// IMP=0x00000000002274a7
- (id)trainedModelWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000227247
- (id)initWithConfiguration:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000002271a3
- (_Bool)writeReadOnlyVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;	// IMP=0x0000000000227064
- (_Bool)writeVersion1ToOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(id *)arg4;	// IMP=0x0000000000226b7a

@end

