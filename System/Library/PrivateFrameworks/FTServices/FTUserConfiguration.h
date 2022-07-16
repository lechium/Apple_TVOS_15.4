//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x000000000002875a
@property(readonly, nonatomic) _Bool _nonWifiFaceTimeEntitled;
@property(nonatomic) _Bool isDeviceInManualPhoneSelectionMode;
@property(nonatomic) _Bool isDeviceInDualPhoneIdentityMode;
@property(readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1;	// IMP=0x00000000000288e6
@property(copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property(nonatomic) _Bool allowAnyNetwork;
@property(nonatomic) _Bool cellularFaceTimeEnabled;
- (_Bool)nonBluetoothAllowedForBundleId:(id)arg1;	// IMP=0x000000000002883e
- (_Bool)wifiAllowedForBundleId:(id)arg1;	// IMP=0x0000000000028836
- (_Bool)cellularDataEnabledForBundleId:(id)arg1;	// IMP=0x000000000002882e
- (_Bool)_adequateInternalOrCarrierInstall;	// IMP=0x000000000002880d
- (void)dealloc;	// IMP=0x00000000000287de
- (id)init;	// IMP=0x00000000000287af

@end
