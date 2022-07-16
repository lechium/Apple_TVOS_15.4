//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserNotificationsSettings/NSCopying-Protocol.h>
#import <UserNotificationsSettings/NSMutableCopying-Protocol.h>
#import <UserNotificationsSettings/NSSecureCoding-Protocol.h>

@class NSArray;

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding, NSMutableCopying>
{
    long long _showPreviewsSetting;	// 8 = 0x8
    long long _announcementSetting;	// 16 = 0x10
    long long _announcementHeadphonesSetting;	// 24 = 0x18
    long long _announcementCarPlaySetting;	// 32 = 0x20
    long long _scheduledDeliverySetting;	// 40 = 0x28
    NSArray *_scheduledDeliveryTimes;	// 48 = 0x30
    long long _scheduledDeliveryShowNextSummarySetting;	// 56 = 0x38
    unsigned long long _modifiedSettings;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000020a1
- (void).cxx_destruct;	// IMP=0x000000000000282a
@property(readonly, nonatomic) unsigned long long modifiedSettings; // @synthesize modifiedSettings=_modifiedSettings;
@property(readonly, nonatomic) long long scheduledDeliveryShowNextSummarySetting; // @synthesize scheduledDeliveryShowNextSummarySetting=_scheduledDeliveryShowNextSummarySetting;
@property(readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes; // @synthesize scheduledDeliveryTimes=_scheduledDeliveryTimes;
@property(readonly, nonatomic) long long scheduledDeliverySetting; // @synthesize scheduledDeliverySetting=_scheduledDeliverySetting;
@property(readonly, nonatomic) long long announcementCarPlaySetting; // @synthesize announcementCarPlaySetting=_announcementCarPlaySetting;
@property(readonly, nonatomic) long long announcementHeadphonesSetting; // @synthesize announcementHeadphonesSetting=_announcementHeadphonesSetting;
@property(readonly, nonatomic) long long announcementSetting; // @synthesize announcementSetting=_announcementSetting;
@property(readonly, nonatomic) long long showPreviewsSetting; // @synthesize showPreviewsSetting=_showPreviewsSetting;
- (id)_stringForScheduledDeliveryTimes:(id)arg1;	// IMP=0x00000000000024e8
- (id)_stringforAnnouncementCarPlaySetting:(long long)arg1;	// IMP=0x0000000000002498
@property(readonly, nonatomic) long long spokenNotificationSetting;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000238b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002209
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000020a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000002096
- (id)description;	// IMP=0x0000000000001ec5
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7 modifiedSettings:(unsigned long long)arg8;	// IMP=0x0000000000001e15
- (id)initWithShowPreviewsSetting:(long long)arg1 announcementSetting:(long long)arg2 announcementHeadphonesSetting:(long long)arg3 announcementCarPlaySetting:(long long)arg4 scheduledDeliverySetting:(long long)arg5 scheduledDeliveryTimes:(id)arg6 scheduledDeliveryShowNextSummarySetting:(long long)arg7;	// IMP=0x0000000000001de0

@end

