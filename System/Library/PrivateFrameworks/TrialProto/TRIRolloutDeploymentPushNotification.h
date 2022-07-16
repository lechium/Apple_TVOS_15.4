//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TRINotificationProcessingPolicy, TRIPBTimestamp;

@interface TRIRolloutDeploymentPushNotification
{
}

+ (id)descriptor;	// IMP=0x000000000004eeca

// Remaining properties
@property(retain, nonatomic) TRIPBTimestamp *deploymentDate; // @dynamic deploymentDate;
@property(nonatomic) unsigned int deploymentId; // @dynamic deploymentId;
@property(nonatomic) _Bool hasDeploymentDate; // @dynamic hasDeploymentDate;
@property(nonatomic) _Bool hasDeploymentId; // @dynamic hasDeploymentId;
@property(nonatomic) _Bool hasNotificationProcessingPolicy; // @dynamic hasNotificationProcessingPolicy;
@property(nonatomic) _Bool hasRolloutId; // @dynamic hasRolloutId;
@property(retain, nonatomic) TRINotificationProcessingPolicy *notificationProcessingPolicy; // @dynamic notificationProcessingPolicy;
@property(copy, nonatomic) NSString *rolloutId; // @dynamic rolloutId;

@end

