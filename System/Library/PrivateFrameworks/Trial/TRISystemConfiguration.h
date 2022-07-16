//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRISystemConfiguration : NSObject
{
    NSString *_persistentDeviceIdentifierPath;	// 8 = 0x8
    NSString *_cachedDeviceIdentifier;	// 16 = 0x10
}

+ (id)_sharedSystemInfo;	// IMP=0x000000000002caf2
+ (id)sharedInstance;	// IMP=0x000000000002ca3f
- (void).cxx_destruct;	// IMP=0x000000000002db78
- (id)enabledInputModeIdentifiers;	// IMP=0x000000000002db05
- (CDStruct_2ec95fd7)marketingOSVersion;	// IMP=0x000000000002daa3
- (id)userSettingsBCP47DeviceLocale;	// IMP=0x000000000002d9bc
- (id)userSettingsRegionCode;	// IMP=0x000000000002d965
- (id)userSettingsLanguageCode;	// IMP=0x000000000002d90e
- (id)osBuild;	// IMP=0x000000000002d872
- (id)osType;	// IMP=0x000000000002d865
- (id)deviceModelCode;	// IMP=0x000000000002d7c9
- (id)deviceClass;	// IMP=0x000000000002d72d
- (id)deviceId;	// IMP=0x000000000002d6a9
- (id)reloadDeviceId;	// IMP=0x000000000002d659
- (id)deviceInfoForQuestion:(id)arg1;	// IMP=0x000000000002d61e
- (id)createPersistentDeviceIdentifier;	// IMP=0x000000000002d608
- (id)storedDeviceIdentifier;	// IMP=0x000000000002d5f2
- (id)createDeviceIdentifierWithPath:(id)arg1;	// IMP=0x000000000002d51f
- (_Bool)setDeviceIdentifier:(id)arg1 path:(id)arg2;	// IMP=0x000000000002d34b
- (_Bool)setDeviceIdentifier:(id)arg1;	// IMP=0x000000000002d335
- (_Bool)deleteDeviceIdentifierWithPath:(id)arg1;	// IMP=0x000000000002d23b
- (_Bool)deleteDeviceIdentifier;	// IMP=0x000000000002d225
- (_Bool)resetDeviceIdentifier;	// IMP=0x000000000002d1d7
- (id)readDeviceIdentifierWithPath:(id)arg1;	// IMP=0x000000000002d131
- (_Bool)isBetaBuild;	// IMP=0x000000000002d118
- (_Bool)isInternalBuild;	// IMP=0x000000000002d0ff
- (_Bool)isBetaUserWithIsStale:(_Bool *)arg1;	// IMP=0x000000000002d074
- (unsigned long long)trialVersionMinor;	// IMP=0x000000000002d006
- (unsigned long long)trialVersionMajor;	// IMP=0x000000000002cf98
- (id)_trialVersion;	// IMP=0x000000000002cf2e
- (id)trialVersionTag;	// IMP=0x000000000002cf21
- (id)reloadSystemInfo;	// IMP=0x000000000002cda6
- (id)_systemInfoWithIsStale:(_Bool *)arg1;	// IMP=0x000000000002cbfb
- (id)systemInfo;	// IMP=0x000000000002cbe7
- (int)populationType;	// IMP=0x000000000002cba7
- (id)initWithPaths:(id)arg1;	// IMP=0x000000000002c9c4
- (id)init;	// IMP=0x000000000002c9be

@end
