//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSArray;

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain
{
}

+ (id)standardDefaults;	// IMP=0x0000000000051917
- (void)_bindAndRegisterDefaults;	// IMP=0x0000000000051985
- (id)init;	// IMP=0x000000000005196c

// Remaining properties
@property(nonatomic, getter=isAnnounceSupportedForCarPlay) _Bool announceSupportedForCarPlay; // @dynamic announceSupportedForCarPlay;
@property(nonatomic, getter=isAnnounceSupportedForHeadphones) _Bool announceSupportedForHeadphones; // @dynamic announceSupportedForHeadphones;
@property(nonatomic) long long globalAnnounceCarPlaySetting; // @dynamic globalAnnounceCarPlaySetting;
@property(nonatomic) long long globalAnnounceHeadphonesSetting; // @dynamic globalAnnounceHeadphonesSetting;
@property(nonatomic) long long globalAnnounceSetting; // @dynamic globalAnnounceSetting;
@property(nonatomic) long long globalContentPreviewSetting; // @dynamic globalContentPreviewSetting;
@property(nonatomic) long long globalScheduledDeliverySetting; // @dynamic globalScheduledDeliverySetting;
@property(nonatomic) long long globalScheduledDeliveryShowNextSummarySetting; // @dynamic globalScheduledDeliveryShowNextSummarySetting;
@property(nonatomic) NSArray *globalScheduledDeliveryTimes; // @dynamic globalScheduledDeliveryTimes;
@property(nonatomic) long long globalSpokenNotificationSetting_deprecated; // @dynamic globalSpokenNotificationSetting_deprecated;
@property(nonatomic, getter=hasPairedVehiclesForCarPlay) _Bool pairedVehiclesForCarPlay; // @dynamic pairedVehiclesForCarPlay;

@end

