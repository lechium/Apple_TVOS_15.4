//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAccessorySettingsController, HMDBackingStoreModelObject, HMDRemoteDeviceMessageDestination, NSArray, NSString, NSUUID;

@protocol HMDAccessorySettingsControllerDelegate
- (void)languagesChangedForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (HMDBackingStoreModelObject *)assistantAccessControlModelWithRemovedAccessoriesForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (_Bool)isMultiUserEnabledForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (NSArray *)supportedMultiUserLanguageCodesForAccessorySettingsController:(HMDAccessorySettingsController *)arg1;
- (HMDRemoteDeviceMessageDestination *)remoteMessageDestinationForAccessorySettingsController:(HMDAccessorySettingsController *)arg1 target:(NSUUID *)arg2;
- (void)accessorySettingsController:(HMDAccessorySettingsController *)arg1 saveWithReason:(NSString *)arg2 model:(HMDBackingStoreModelObject *)arg3;
- (void)accessorySettingsController:(HMDAccessorySettingsController *)arg1 saveWithReason:(NSString *)arg2;
@end

