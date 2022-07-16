//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSSecureCoding-Protocol.h>

@class NSArray, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNEntityIdentificationModelTrainedModel : NSObject <NSSecureCoding>
{
    shared_ptr_8c39738b _faceIDModel;	// 8 = 0x8
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;	// 24 = 0x18
    int _maximumElementsPerID;	// 32 = 0x20
    NSArray *_entityUniqueIdentifiers;	// 40 = 0x28
    NSArray *_entityPrintCounts;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000156d1f
+ (id)trainedModelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000155b06
- (id).cxx_construct;	// IMP=0x000000000015499a
- (void).cxx_destruct;	// IMP=0x000000000015495e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015476d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015417a
- (id)printCountsForAllEntities;	// IMP=0x000000000015408b
- (id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg1;	// IMP=0x0000000000153f19
- (unsigned long long)printCountForEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000153e65
- (unsigned long long)indexOfEntityWithUniqueIdentifier:(id)arg1;	// IMP=0x0000000000153e4f
- (id)uniqueIdentifierOfEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000153e39
- (id)entityUniqueIdentifiers;	// IMP=0x0000000000153e2b
- (unsigned long long)entityCount;	// IMP=0x0000000000153e15
- (id)predictionsForObservation:(id)arg1 limit:(unsigned long long)arg2 canceller:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001537f0
- (id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000153506
- (id)entityPrintOriginatingRequestSpecifier;	// IMP=0x00000000001534f8
- (id)initWithFaceIDModel:(shared_ptr_8c39738b)arg1 entityPrintOriginatingRequestSpecifier:(id)arg2 maximumElementsPerID:(unsigned long long)arg3 entityUniqueIdentifiers:(id)arg4 entityPrintCounts:(id)arg5;	// IMP=0x0000000000153320

@end

