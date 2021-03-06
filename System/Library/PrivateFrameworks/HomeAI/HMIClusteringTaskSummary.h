//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSError;

@interface HMIClusteringTaskSummary : HMFObject
{
    long long _numberOfFaceprintsClustered;	// 8 = 0x8
    long long _numberOfClusters;	// 16 = 0x10
    long long _numberOfPersonsCreated;	// 24 = 0x18
    long long _numberOfUnknownFaceprintsAssociated;	// 32 = 0x20
    double _faceprintingDuration;	// 40 = 0x28
    double _clusteringDuration;	// 48 = 0x30
    double _totalDuration;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000ac401
@property(retain) NSError *error; // @synthesize error=_error;
@property double totalDuration; // @synthesize totalDuration=_totalDuration;
@property double clusteringDuration; // @synthesize clusteringDuration=_clusteringDuration;
@property double faceprintingDuration; // @synthesize faceprintingDuration=_faceprintingDuration;
@property long long numberOfUnknownFaceprintsAssociated; // @synthesize numberOfUnknownFaceprintsAssociated=_numberOfUnknownFaceprintsAssociated;
@property long long numberOfPersonsCreated; // @synthesize numberOfPersonsCreated=_numberOfPersonsCreated;
@property long long numberOfClusters; // @synthesize numberOfClusters=_numberOfClusters;
@property long long numberOfFaceprintsClustered; // @synthesize numberOfFaceprintsClustered=_numberOfFaceprintsClustered;
- (id)attributeDescriptions;	// IMP=0x00000000000abed5
- (id)init;	// IMP=0x00000000000abe35

@end

