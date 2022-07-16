//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData;

@interface HMDPersonSettingsModel : HMBModel
{
}

+ (id)sentinelModelUUID;	// IMP=0x0000000000b3d547
+ (id)sentinelParentUUID;	// IMP=0x0000000000b3d517
+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0000000000b3d50f
+ (id)hmbProperties;	// IMP=0x0000000000b3d4df
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000b3dad6
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;	// IMP=0x0000000000b3d857
- (void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;	// IMP=0x0000000000b3d7be
- (id)classificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000b3d73b
- (id)init;	// IMP=0x0000000000b3d6b4

// Remaining properties
@property(retain) NSData *classificationNotificationSettingsData; // @dynamic classificationNotificationSettingsData;

@end
