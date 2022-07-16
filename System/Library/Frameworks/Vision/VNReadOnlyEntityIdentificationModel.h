//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNEntityIdentificationModelDataSource-Protocol.h>

@class NSString, VNEntityIdentificationModelTrainedModel;

__attribute__((visibility("hidden")))
@interface VNReadOnlyEntityIdentificationModel <VNEntityIdentificationModelDataSource>
{
    VNEntityIdentificationModelTrainedModel *_trainedModel;	// 8 = 0x8
}

+ (_Bool)isReadOnly;	// IMP=0x0000000000248038
+ (id)newModelForVersion:(unsigned long long)arg1 modelObjects:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000247e57
- (void).cxx_destruct;	// IMP=0x0000000000247e44
- (id)entityIdentificationModel:(id)arg1 observationAtIndex:(unsigned long long)arg2 forEntityAtIndex:(unsigned long long)arg3;	// IMP=0x0000000000247e3c
- (unsigned long long)entityIdentificationModel:(id)arg1 numberOfObservationsForEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000247ddb
- (unsigned long long)entityIdentificationModel:(id)arg1 indexOfEntityWithUniqueIdentifier:(id)arg2;	// IMP=0x0000000000247dbb
- (id)entityIdentificationModel:(id)arg1 uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000247d9b
- (unsigned long long)numberOfEntitiesInEntityIdentificationModel:(id)arg1;	// IMP=0x0000000000247d7e
- (id)observationCountsForAllEntities;	// IMP=0x0000000000247d61
- (id)observationCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000247d44
- (id)observationsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000247d0e
- (unsigned long long)observationCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000247cf1
- (id)trainedModelWithCanceller:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000247cdc
- (id)initWithConfiguration:(id)arg1 trainedModel:(id)arg2;	// IMP=0x0000000000247c61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
