//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BulletinBoard/BBSectionInfo.h>

@interface BBSectionInfo (UserNotificationsServer)
- (id)uns_topicSettings;	// IMP=0x000000000000f0aa
- (id)uns_notificationSource;	// IMP=0x000000000000eee0
- (void)uns_setPropertiesFromTopicRecord:(id)arg1;	// IMP=0x000000000000ec20
- (void)uns_setPropertiesFromSourceSettingsDescription:(id)arg1;	// IMP=0x000000000000ea36
- (long long)uns_notificationSettingForBBSectionAnnounceSetting:(long long)arg1;	// IMP=0x000000000000ea17
- (long long)uns_BBSectionAnnounceSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x000000000000e9df
- (long long)uns_BBSectionInfoSettingForUNNotificationSetting:(long long)arg1;	// IMP=0x000000000000e9c8
- (long long)uns_notificationSettingForBBSectionInfoSetting:(long long)arg1;	// IMP=0x000000000000e9b1
- (id)uns_notificationSettings;	// IMP=0x000000000000e700
- (void)uns_setPropertiesFromNotificationSettings:(id)arg1 systemSettings:(id)arg2;	// IMP=0x000000000000e40f
- (void)uns_setPropertiesFromAuthorizationOptions:(unsigned long long)arg1;	// IMP=0x000000000000e235
@end
