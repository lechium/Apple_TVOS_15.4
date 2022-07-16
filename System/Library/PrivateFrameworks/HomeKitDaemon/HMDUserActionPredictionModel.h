//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

@interface HMDUserActionPredictionModel : HMBModel
{
}

+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0000000000352201
+ (id)hmbProperties;	// IMP=0x00000000003521d1
- (id)userActionPrediction;	// IMP=0x0000000000352d7c
- (id)initWithUserActionPrediction:(id)arg1;	// IMP=0x000000000035276e

// Remaining properties
@property(copy) NSNumber *groupType; // @dynamic groupType;
@property(copy) NSNumber *predictionScore; // @dynamic predictionScore;
@property(copy) NSUUID *predictionTargetUUID; // @dynamic predictionTargetUUID;
@property(copy) NSUUID *targetGroupUUID; // @dynamic targetGroupUUID;
@property(copy) NSUUID *targetServiceGroupUUID; // @dynamic targetServiceGroupUUID;
@property(copy) NSUUID *targetServiceUUID; // @dynamic targetServiceUUID;
@property(copy) NSNumber *type; // @dynamic type;

@end

