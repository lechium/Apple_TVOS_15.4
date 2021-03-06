//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@protocol HMDCompositeSettingControllerManagerStateTransitionDelegate
- (void)languagesDidChangeForHome:(NSUUID *)arg1;
- (void)didConfigureCompositeSettingsControllerForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)didUpdateSiriEndpointSettingForHomeUUID:(NSUUID *)arg1 accessoryUUID:(NSUUID *)arg2;
- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(NSUUID *)arg3;
@end

