//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface ASDPurchase : NSObject <NSCopying, NSSecureCoding>
{
    NSArray *_buyParameters;	// 8 = 0x8
    _Bool _createsJobs;	// 16 = 0x10
    _Bool _displaysOnLockScreen;	// 17 = 0x11
    _Bool _forceWatchInstall;	// 18 = 0x12
    _Bool _iOSBinaryMacOSCompatible;	// 19 = 0x13
    _Bool _isDSIDLess;	// 20 = 0x14
    _Bool _isUpdate;	// 21 = 0x15
    _Bool _isBackgroundUpdate;	// 22 = 0x16
    _Bool _isRedownload;	// 23 = 0x17
    _Bool _shouldCancelForInstalledBundleItems;	// 24 = 0x18
    _Bool _expectsIOSAppOnMac;	// 25 = 0x19
    _Bool _installUniversalVariant;	// 26 = 0x1a
    _Bool _isCompatibilityUpdate;	// 27 = 0x1b
    _Bool _isRefresh;	// 28 = 0x1c
    _Bool _sendGUID;	// 29 = 0x1d
    NSString *_bundleID;	// 32 = 0x20
    NSNumber *_itemID;	// 40 = 0x28
    NSString *_itemName;	// 48 = 0x30
    NSString *_vendorName;	// 56 = 0x38
    NSDictionary *_additionalHeaders;	// 64 = 0x40
    NSNumber *_accountIdentifier;	// 72 = 0x48
    NSString *_affiliateIdentifier;	// 80 = 0x50
    NSString *_bagKey;	// 88 = 0x58
    long long _extensionsToEnable;	// 96 = 0x60
    NSArray *_gratisIdentifiers;	// 104 = 0x68
    NSString *_referrerName;	// 112 = 0x70
    NSString *_referrerURL;	// 120 = 0x78
    long long _softwarePlatform;	// 128 = 0x80
    long long _purchaseID;	// 136 = 0x88
    NSArray *_requiredCapabilities;	// 144 = 0x90
    NSString *_preflightURLString;	// 152 = 0x98
    NSString *_clientID;	// 160 = 0xa0
    NSNumber *_ownerDSID;	// 168 = 0xa8
    NSNumber *_purchaserDSID;	// 176 = 0xb0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d47d
- (void).cxx_destruct;	// IMP=0x000000000004e0fb
@property(nonatomic) _Bool sendGUID; // @synthesize sendGUID=_sendGUID;
@property(copy, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(copy, nonatomic) NSNumber *ownerDSID; // @synthesize ownerDSID=_ownerDSID;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool isCompatibilityUpdate; // @synthesize isCompatibilityUpdate=_isCompatibilityUpdate;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) _Bool installUniversalVariant; // @synthesize installUniversalVariant=_installUniversalVariant;
@property(nonatomic) _Bool expectsIOSAppOnMac; // @synthesize expectsIOSAppOnMac=_expectsIOSAppOnMac;
@property(copy) NSString *preflightURLString; // @synthesize preflightURLString=_preflightURLString;
@property(nonatomic) _Bool shouldCancelForInstalledBundleItems; // @synthesize shouldCancelForInstalledBundleItems=_shouldCancelForInstalledBundleItems;
@property(copy, nonatomic) NSArray *requiredCapabilities; // @synthesize requiredCapabilities=_requiredCapabilities;
@property long long purchaseID; // @synthesize purchaseID=_purchaseID;
@property(nonatomic) long long softwarePlatform; // @synthesize softwarePlatform=_softwarePlatform;
@property(nonatomic) _Bool isRedownload; // @synthesize isRedownload=_isRedownload;
@property(copy, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(copy, nonatomic) NSString *referrerName; // @synthesize referrerName=_referrerName;
@property(nonatomic) _Bool isBackgroundUpdate; // @synthesize isBackgroundUpdate=_isBackgroundUpdate;
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
@property(nonatomic) _Bool isDSIDLess; // @synthesize isDSIDLess=_isDSIDLess;
@property(nonatomic, getter=isIOSBinaryMacOSCompatible) _Bool iOSBinaryMacOSCompatible; // @synthesize iOSBinaryMacOSCompatible=_iOSBinaryMacOSCompatible;
@property(copy, nonatomic) NSArray *gratisIdentifiers; // @synthesize gratisIdentifiers=_gratisIdentifiers;
@property(nonatomic) _Bool forceWatchInstall; // @synthesize forceWatchInstall=_forceWatchInstall;
@property long long extensionsToEnable; // @synthesize extensionsToEnable=_extensionsToEnable;
@property(nonatomic) _Bool displaysOnLockScreen; // @synthesize displaysOnLockScreen=_displaysOnLockScreen;
@property(nonatomic) _Bool createsJobs; // @synthesize createsJobs=_createsJobs;
@property(copy, nonatomic) NSString *bagKey; // @synthesize bagKey=_bagKey;
@property(copy, nonatomic) NSString *affiliateIdentifier; // @synthesize affiliateIdentifier=_affiliateIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSDictionary *additionalHeaders; // @synthesize additionalHeaders=_additionalHeaders;
@property(copy, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x000000000004dd5e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004da93
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d485
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d18a
- (id)firstValueForBuyParameter:(id)arg1;	// IMP=0x000000000004cfb6
- (void)appendValue:(id)arg1 forBuyParameter:(id)arg2;	// IMP=0x000000000004cefd
@property(copy, nonatomic) NSString *buyParameters;
- (id)init;	// IMP=0x000000000004cdc0

@end
