//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CDPLocalSecret, NSString, UIViewController;

@interface CDPUIDeviceToDeviceEncryptionFlowContext : NSObject
{
    _Bool _forceInlinePresentation;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    long long _deviceToDeviceEncryptionUpgradeUIStyle;	// 24 = 0x18
    long long _deviceToDeviceEncryptionUpgradeType;	// 32 = 0x20
    NSString *_securityUpgradeContext;	// 40 = 0x28
    NSString *_featureName;	// 48 = 0x30
    NSString *_altDSID;	// 56 = 0x38
    CDPLocalSecret *_cachedLocalSecret;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003532
@property(nonatomic) _Bool forceInlinePresentation; // @synthesize forceInlinePresentation=_forceInlinePresentation;
@property(copy, nonatomic) CDPLocalSecret *cachedLocalSecret; // @synthesize cachedLocalSecret=_cachedLocalSecret;
@property(readonly, copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(copy, nonatomic) NSString *securityUpgradeContext; // @synthesize securityUpgradeContext=_securityUpgradeContext;
@property(nonatomic) long long deviceToDeviceEncryptionUpgradeType; // @synthesize deviceToDeviceEncryptionUpgradeType=_deviceToDeviceEncryptionUpgradeType;
@property(nonatomic) long long deviceToDeviceEncryptionUpgradeUIStyle; // @synthesize deviceToDeviceEncryptionUpgradeUIStyle=_deviceToDeviceEncryptionUpgradeUIStyle;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)initWithAltDSID:(id)arg1;	// IMP=0x00000000000033fe

@end

