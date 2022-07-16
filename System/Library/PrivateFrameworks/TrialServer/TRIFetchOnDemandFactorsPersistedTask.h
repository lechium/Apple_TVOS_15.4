//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIPersistedTaskAttribution;

@interface TRIFetchOnDemandFactorsPersistedTask : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x00000000000efc35

// Remaining properties
@property(nonatomic) int deploymentId; // @dynamic deploymentId;
@property(copy, nonatomic) NSString *experimentId; // @dynamic experimentId;
@property(retain, nonatomic) NSMutableArray *factorPackAssetIdsArray; // @dynamic factorPackAssetIdsArray;
@property(readonly, nonatomic) unsigned long long factorPackAssetIdsArray_Count; // @dynamic factorPackAssetIdsArray_Count;
@property(nonatomic) _Bool hasDeploymentId; // @dynamic hasDeploymentId;
@property(nonatomic) _Bool hasExperimentId; // @dynamic hasExperimentId;
@property(nonatomic) _Bool hasNamespaceName; // @dynamic hasNamespaceName;
@property(nonatomic) _Bool hasNotificationKey; // @dynamic hasNotificationKey;
@property(nonatomic) _Bool hasRetryCount; // @dynamic hasRetryCount;
@property(nonatomic) _Bool hasRolloutId; // @dynamic hasRolloutId;
@property(nonatomic) _Bool hasTaskAttribution; // @dynamic hasTaskAttribution;
@property(copy, nonatomic) NSString *namespaceName; // @dynamic namespaceName;
@property(copy, nonatomic) NSString *notificationKey; // @dynamic notificationKey;
@property(nonatomic) int retryCount; // @dynamic retryCount;
@property(retain, nonatomic) NSMutableArray *rolloutFactorNamesArray; // @dynamic rolloutFactorNamesArray;
@property(readonly, nonatomic) unsigned long long rolloutFactorNamesArray_Count; // @dynamic rolloutFactorNamesArray_Count;
@property(copy, nonatomic) NSString *rolloutId; // @dynamic rolloutId;
@property(retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution; // @dynamic taskAttribution;
@property(retain, nonatomic) NSMutableArray *treatmentAssetIndexesArray; // @dynamic treatmentAssetIndexesArray;
@property(readonly, nonatomic) unsigned long long treatmentAssetIndexesArray_Count; // @dynamic treatmentAssetIndexesArray_Count;

@end
