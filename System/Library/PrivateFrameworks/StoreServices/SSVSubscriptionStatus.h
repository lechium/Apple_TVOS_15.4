//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying>
{
    NSNumber *_accountIdentifier;	// 8 = 0x8
    NSArray *_accountPermissions;	// 16 = 0x10
    long long _accountStatus;	// 24 = 0x18
    unsigned long long _acceptedStoreTermsVersion;	// 32 = 0x20
    long long _carrierBundlingStatus;	// 40 = 0x28
    long long _carrierBundlingErrorCode;	// 48 = 0x30
    NSString *_cellularOperatorName;	// 56 = 0x38
    _Bool _discoveryModeEligible;	// 64 = 0x40
    _Bool _familyOrganizer;	// 65 = 0x41
    _Bool _familySubscription;	// 66 = 0x42
    _Bool _freeTrialIneligible;	// 67 = 0x43
    _Bool _hasFamily;	// 68 = 0x44
    _Bool _hasFamilyMembers;	// 69 = 0x45
    _Bool _hasOfflineSlots;	// 70 = 0x46
    unsigned long long _latestStoreTermsVersion;	// 72 = 0x48
    NSString *_phoneNumber;	// 80 = 0x50
    NSDictionary *_rawResponseData;	// 88 = 0x58
    double _subscriptionExpirationTime;	// 96 = 0x60
    _Bool _subscriptionPurchaser;	// 104 = 0x68
    _Bool _hasOfflineSlot;	// 105 = 0x69
    NSString *_sessionIdentifier;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000012a077
@property(readonly, nonatomic) _Bool hasOfflineSlot; // @synthesize hasOfflineSlot=_hasOfflineSlot;
@property(nonatomic, getter=isSubscriptionPurchaser) _Bool subscriptionPurchaser; // @synthesize subscriptionPurchaser=_subscriptionPurchaser;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(copy, nonatomic) NSDictionary *rawResponseData; // @synthesize rawResponseData=_rawResponseData;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(nonatomic) unsigned long long latestStoreTermsVersion; // @synthesize latestStoreTermsVersion=_latestStoreTermsVersion;
@property(nonatomic) _Bool hasOfflineSlots; // @synthesize hasOfflineSlots=_hasOfflineSlots;
@property(nonatomic) _Bool hasFamilyMembers; // @synthesize hasFamilyMembers=_hasFamilyMembers;
@property(nonatomic) _Bool hasFamily; // @synthesize hasFamily=_hasFamily;
@property(nonatomic, getter=isFreeTrialIneligible) _Bool freeTrialIneligible; // @synthesize freeTrialIneligible=_freeTrialIneligible;
@property(nonatomic, getter=isFamilySubscription) _Bool familySubscription; // @synthesize familySubscription=_familySubscription;
@property(nonatomic, getter=isFamilyOrganizer) _Bool familyOrganizer; // @synthesize familyOrganizer=_familyOrganizer;
@property(nonatomic, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible; // @synthesize discoveryModeEligible=_discoveryModeEligible;
@property(copy, nonatomic) NSString *cellularOperatorName; // @synthesize cellularOperatorName=_cellularOperatorName;
@property(nonatomic) long long carrierBundlingErrorCode; // @synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode;
@property(nonatomic) long long carrierBundlingStatus; // @synthesize carrierBundlingStatus=_carrierBundlingStatus;
@property(nonatomic) unsigned long long acceptedStoreTermsVersion; // @synthesize acceptedStoreTermsVersion=_acceptedStoreTermsVersion;
@property(nonatomic) long long accountStatus; // @synthesize accountStatus=_accountStatus;
@property(copy, nonatomic) NSArray *accountPermissions; // @synthesize accountPermissions=_accountPermissions;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)_setSubscribed:(_Bool)arg1;	// IMP=0x0000000000129ecc
- (id)copyXPCEncoding;	// IMP=0x0000000000129ca5
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000001299ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001296fa
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x0000000000129657
- (void)setValuesUsingStatusDictionary:(id)arg1;	// IMP=0x0000000000128b26
@property(copy, nonatomic) NSDate *subscriptionExpirationDate;
@property(nonatomic, getter=isSubscribed) _Bool subscribed;
- (void)resetCarrierBundlingProperties;	// IMP=0x0000000000128a90
- (void)resetAccountBasedProperties;	// IMP=0x00000000001289b9
- (id)copyUserDefaultsRepresentation;	// IMP=0x0000000000128536
- (id)initWithUserDefaultsRepresentation:(id)arg1;	// IMP=0x0000000000127ad8
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

