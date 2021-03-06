//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSNumber, NSURL;

@interface PKPaymentWebServiceConfiguration : NSObject <NSSecureCoding>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDictionary *_configuration;	// 16 = 0x10
    NSNumber *_version;	// 24 = 0x18
    NSURL *_configurationURL;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000252da2
- (void).cxx_destruct;	// IMP=0x0000000000256a1f
@property(copy) NSURL *configurationURL; // @synthesize configurationURL=_configurationURL;
@property(readonly) __weak NSNumber *version; // @synthesize version=_version;
@property(copy) NSDictionary *configuration; // @synthesize configuration=_configuration;
- (id)_lock_unsupported_region:(id)arg1;	// IMP=0x0000000000256940
- (id)_lock_unsupported_regions;	// IMP=0x0000000000256923
- (id)_lock_region:(id)arg1;	// IMP=0x000000000025681f
- (id)_lock_regions;	// IMP=0x0000000000256802
- (_Bool)_lock_supportedForOSVersion:(id)arg1 inRegion:(id)arg2 deviceClass:(id)arg3 platform:(id)arg4 suportedRegions:(_Bool)arg5;	// IMP=0x0000000000256660
- (id)_regionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3 supportedRegions:(_Bool)arg4;	// IMP=0x00000000002563ec
- (unsigned long long)notificationAuthorizationPromptPresentationCount;	// IMP=0x000000000025639f
- (double)dynamicAssetPrefetchTimeIntervalForRegion:(id)arg1;	// IMP=0x0000000000256209
- (id)credentialTypesRequiringMetadata;	// IMP=0x0000000000256196
- (id)contactFormatConfiguration;	// IMP=0x000000000025610b
- (_Bool)shouldEnableTransitServiceCheckInForRegion:(id)arg1;	// IMP=0x000000000025601e
- (_Bool)shouldPaymentSetupFeaturesUseStrictProductsCheckForRegion:(id)arg1;	// IMP=0x0000000000255f8f
- (_Bool)deviceCheckInDisabledForRegion:(id)arg1;	// IMP=0x0000000000255f00
- (double)deviceCheckInIntervalForRegion:(id)arg1;	// IMP=0x0000000000255e31
- (id)marketGeoRegionNotificationNetworkThresholdsForRegion:(id)arg1;	// IMP=0x0000000000255d7b
- (id)marketGeoRegionNotificationTimeRangeForRegion:(id)arg1;	// IMP=0x0000000000255ce0
- (_Bool)browseProvisioningBankAppsEnabledForRegion:(id)arg1;	// IMP=0x0000000000255c51
- (id)numberOfDaysBetweenMapsReprocessingForRegion:(id)arg1;	// IMP=0x0000000000255bb6
- (_Bool)AMPNonDefaultBehaviourDisabledForRegion:(id)arg1;	// IMP=0x0000000000255b27
- (id)applyServiceFeaturesForRegion:(id)arg1;	// IMP=0x0000000000255a75
- (_Bool)applyServiceEnabledForRegion:(id)arg1;	// IMP=0x00000000002558be
- (_Bool)accountServiceEnabledForRegion:(id)arg1;	// IMP=0x0000000000255707
- (_Bool)remotePaymentsRequiredForVoiceover;	// IMP=0x00000000002556c8
- (id)unsupportedWebPaymentConfigurations;	// IMP=0x0000000000255655
- (id)featureWithType:(long long)arg1 inRegion:(id)arg2;	// IMP=0x000000000025524d
- (id)_lock_featuresForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;	// IMP=0x0000000000255111
- (id)_lock_featuresForRegion:(id)arg1;	// IMP=0x00000000002550fa
- (id)featuresForRegion:(id)arg1;	// IMP=0x000000000025506e
- (id)_lock_globalFeaturesForOSVersion:(id)arg1 deviceClass:(id)arg2;	// IMP=0x0000000000254fbf
- (_Bool)hasFeatureRequiringRegistrationInRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;	// IMP=0x00000000002549e4
- (_Bool)hasFeaturesSupportedForRegion:(id)arg1 osVersion:(id)arg2 deviceClass:(id)arg3;	// IMP=0x00000000002549d2
- (id)_featuresFromDictionary:(id)arg1 withRegion:(id)arg2 osVersion:(id)arg3 deviceClass:(id)arg4;	// IMP=0x0000000000254635
- (id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;	// IMP=0x0000000000254620
- (id)unsupportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;	// IMP=0x000000000025460b
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2 platform:(id)arg3;	// IMP=0x00000000002545f3
- (id)supportedRegionsForOSVersion:(id)arg1 deviceClass:(id)arg2;	// IMP=0x00000000002545de
- (id)maxRefreshIntervalForRegion:(id)arg1;	// IMP=0x0000000000254543
- (id)maxRefreshIntervalForUnsupportedRegion;	// IMP=0x00000000002544f6
- (id)betaPaymentNetworkVersionsForRegion:(id)arg1;	// IMP=0x0000000000254401
- (id)betaPaymentNetworksForRegion:(id)arg1;	// IMP=0x0000000000254320
- (_Bool)userCanResetCloudStoreApplePayViewForRegion:(id)arg1;	// IMP=0x0000000000254263
- (_Bool)peerPaymentEnabledForRegion:(id)arg1;	// IMP=0x00000000002541a6
- (_Bool)paymentTransactionIconsEnabledForRegion:(id)arg1;	// IMP=0x0000000000254041
- (double)deviceUpgradeTaskEnablementPercentageForRegion:(id)arg1;	// IMP=0x0000000000253f2a
- (double)provisioningEnablementPercentageForRegion:(id)arg1;	// IMP=0x0000000000253e64
- (_Bool)regionHasProvisioningEnablementPercentage:(id)arg1;	// IMP=0x0000000000253dbe
- (id)paymentSetupBrowsableProductTypesForRegion:(id)arg1;	// IMP=0x0000000000253b64
- (_Bool)suppressCardholderNameFieldForRegion:(id)arg1;	// IMP=0x0000000000253aa7
- (id)defaultServerURL;	// IMP=0x0000000000253a1c
- (id)marketsURL;	// IMP=0x000000000025397a
- (id)discoveryManifestURLForRegion:(id)arg1;	// IMP=0x000000000025387d
- (id)heroImageManifestURLForRegion:(id)arg1;	// IMP=0x00000000002537ad
- (id)primaryFeaturedNetworkForRegion:(id)arg1;	// IMP=0x00000000002536c6
- (id)paymentSetupFeaturedNetworksForRegion:(id)arg1;	// IMP=0x000000000025336f
- (_Bool)cameraFirstProvisioningEnabledForRegion:(id)arg1;	// IMP=0x00000000002532b2
- (_Bool)manualProvisioningEnabledForRegion:(id)arg1;	// IMP=0x0000000000253204
- (_Bool)buddyManualProvisioningEnabledForRegion:(id)arg1;	// IMP=0x0000000000253156
- (_Bool)buddyProvisioningEnabledForRegion:(id)arg1;	// IMP=0x00000000002530a8
- (id)paymentServicesMerchantURLForRegion:(id)arg1;	// IMP=0x0000000000252fd9
- (id)paymentServicesURLForRegion:(id)arg1;	// IMP=0x0000000000252f0a
- (id)brokerURLForRegion:(id)arg1;	// IMP=0x0000000000252e3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000252daa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000252ce0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000252bbf
- (id)initWithConfiguration:(id)arg1 url:(id)arg2;	// IMP=0x0000000000252b10
- (id)init;	// IMP=0x0000000000252ab3

@end

