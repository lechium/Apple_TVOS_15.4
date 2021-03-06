//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PFMediaCapabilities : NSObject
{
    NSDictionary *_outOfBandHints;	// 8 = 0x8
    NSDictionary *_capabilitiesInformation;	// 16 = 0x10
}

+ (_Bool)currentDeviceIsEligibleForHDRPlayback;	// IMP=0x000000000001eb10
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;	// IMP=0x000000000001eae0
+ (_Bool)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)arg1;	// IMP=0x000000000001ea65
+ (unsigned int)currentDeviceHEVCCapabilities;	// IMP=0x000000000001ea2f
+ (id)stringForSupport:(long long)arg1;	// IMP=0x000000000001e9f5
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)arg1;	// IMP=0x000000000001e97a
+ (id)legacyCapabilities;	// IMP=0x000000000001e961
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)arg1;	// IMP=0x000000000001e8d7
+ (id)capabilitiesForCurrentDevice;	// IMP=0x000000000001e8be
+ (id)testCapabilitiesNotSupportingHEIF;	// IMP=0x000000000001f117
+ (id)testCapabilitiesNotSupportingHEVC;	// IMP=0x000000000001f0fe
+ (void)setRecordSlomoConfiguration:(id)arg1;	// IMP=0x000000000001f0e0
+ (id)recordSlomoConfigurationWithValidValues:(id)arg1;	// IMP=0x000000000001f04c
+ (void)setRecordVideoConfiguration:(id)arg1;	// IMP=0x000000000001f02e
+ (id)recordVideoConfigurationWithValidValues:(id)arg1;	// IMP=0x000000000001ef9a
+ (_Bool)setNewFormatsConfiguration:(long long)arg1 fromSource:(long long)arg2;	// IMP=0x000000000001ec02
+ (long long)newFormatsConfiguration;	// IMP=0x000000000001ebcf
- (void).cxx_destruct;	// IMP=0x000000000001e832
@property(retain) NSDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;
@property(retain) NSDictionary *outOfBandHints; // @synthesize outOfBandHints=_outOfBandHints;
- (id)description;	// IMP=0x000000000001e782
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;	// IMP=0x000000000001e618
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)arg1 selector:(SEL)arg2;	// IMP=0x000000000001e4c2
- (long long)userDefaultsPeerOverrideValue;	// IMP=0x000000000001e358
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)arg1 selector:(SEL)arg2;	// IMP=0x000000000001e202
- (id)opaqueRepresentation;	// IMP=0x000000000001e112
- (_Bool)supportsHDR;	// IMP=0x000000000001dffe
- (_Bool)supportsTranscodeChoice;	// IMP=0x000000000001de9d
- (long long)decodingSupportForAVAsset:(id)arg1;	// IMP=0x000000000001ddb1
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x000000000001da31
- (long long)supportForAdjustmentBaseResources;	// IMP=0x000000000001d9c3
- (long long)supportForAssetBundleVersion:(id)arg1;	// IMP=0x000000000001d8cc
- (long long)supportForLivePhotoVersion:(id)arg1;	// IMP=0x000000000001d7d5
- (long long)supportForContainerTypeIdentifier:(id)arg1;	// IMP=0x000000000001d71a
- (id)initWithOpaqueRepresentation:(id)arg1;	// IMP=0x000000000001d5c0

@end

