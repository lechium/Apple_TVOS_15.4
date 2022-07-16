//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDSettingOnChangeAttachedUpdatesResult, HMSettingValue, NSDictionary, NSString;
@protocol HMDSettingsControllerProtocol;

@protocol HMDSettingsControllerDelegate
- (NSDictionary *)settingsControllerFollowerKeyPaths:(id <HMDSettingsControllerProtocol>)arg1;
- (HMDSettingOnChangeAttachedUpdatesResult *)settingsController:(id <HMDSettingsControllerProtocol>)arg1 willUpdateSettingAtKeyPath:(NSString *)arg2 withValue:(HMSettingValue *)arg3;
- (void)settingsController:(id <HMDSettingsControllerProtocol>)arg1 didUpdateWithCompletion:(void (^)(NSError *))arg2;
@end

