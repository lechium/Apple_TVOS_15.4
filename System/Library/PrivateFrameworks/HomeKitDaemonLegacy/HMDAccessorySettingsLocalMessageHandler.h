//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString, NSUUID;
@protocol HMDAccessorySettingsLocalMessageHandlerDataSource, HMDAccessorySettingsLocalMessageHandlerDelegate, HMDLanguageValueListSettingDataProvider;

@interface HMDAccessorySettingsLocalMessageHandler : HMFObject <HMFLogging>
{
    id <HMDAccessorySettingsLocalMessageHandlerDataSource> _dataSource;	// 8 = 0x8
    id <HMDAccessorySettingsLocalMessageHandlerDelegate> _delegate;	// 16 = 0x10
    NSUUID *_homeUUID;	// 24 = 0x18
    id <HMDLanguageValueListSettingDataProvider> _languageValuesDataProvider;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000057f177
- (void).cxx_destruct;	// IMP=0x000000000057f128
@property(readonly) id <HMDLanguageValueListSettingDataProvider> languageValuesDataProvider; // @synthesize languageValuesDataProvider=_languageValuesDataProvider;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDAccessorySettingsLocalMessageHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDAccessorySettingsLocalMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)callerVersionForMessage:(id)arg1;	// IMP=0x000000000057ef26
- (unsigned long long)dataSourceCallerPrivilegeWithMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000057ed3d
- (void)handleAccessorySettingsUpdateRequestMessage:(id)arg1;	// IMP=0x000000000057e684
- (id)siriAvailableLanguagesSetting;	// IMP=0x000000000057e5f7
- (void)handleAccessorySettingsFetchRequestMessage:(id)arg1;	// IMP=0x000000000057de15
- (id)initWithHomeUUID:(id)arg1 languageValuesDataProvider:(id)arg2;	// IMP=0x000000000057dd73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
