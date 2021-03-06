//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSMutableCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSDictionary *_responseDictionary;	// 8 = 0x8
    _Bool _isMinorAccountHolder;	// 16 = 0x10
    _Bool _hasFamily;	// 17 = 0x11
    _Bool _hasFamilyGreaterThanOneMember;	// 18 = 0x12
    _Bool _isHeadOfHousehold;	// 19 = 0x13
    _Bool _isMatchEnabled;	// 20 = 0x14
    NSDate *_expirationDate;	// 24 = 0x18
    _Bool _hasOfflineSlots;	// 32 = 0x20
    _Bool _isInFreeTrial;	// 33 = 0x21
    _Bool _isInGlidePreview;	// 34 = 0x22
    _Bool _isEligibleForFreeTrial;	// 35 = 0x23
    _Bool _isPurchaser;	// 36 = 0x24
    long long _carrierBundlingStatusType;	// 40 = 0x28
    long long _reasonType;	// 48 = 0x30
    long long _sourceType;	// 56 = 0x38
    long long _statusType;	// 64 = 0x40
    _Bool _isAdministrator;	// 72 = 0x48
    _Bool _isDiscoveryModeEligible;	// 73 = 0x49
    NSArray *_termsStatusList;	// 80 = 0x50
    NSString *_phoneNumber;	// 88 = 0x58
    NSString *_cellularOperatorName;	// 96 = 0x60
    NSString *_sessionIdentifier;	// 104 = 0x68
    long long _carrierBundlingErrorCode;	// 112 = 0x70
    _Bool _isPartOfBundle;	// 120 = 0x78
    _Bool _isBundleOwner;	// 121 = 0x79
    NSArray *_eligibleOffers;	// 128 = 0x80
    _Bool _partOfBundle;	// 136 = 0x88
    _Bool _bundleOwner;	// 137 = 0x89
}

+ (unsigned long long)_capabilitiesForStatusType:(long long)arg1 carrierBundlingStatusType:(long long)arg2 isMatchEnabled:(_Bool)arg3;	// IMP=0x00000000001bd03d
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001bd035
- (void).cxx_destruct;	// IMP=0x00000000001bc788
@property(readonly, nonatomic, getter=isInGlidePreview) _Bool inGlidePreview; // @synthesize inGlidePreview=_isInGlidePreview;
@property(readonly, copy, nonatomic) NSArray *eligibleOffers; // @synthesize eligibleOffers=_eligibleOffers;
@property(readonly, nonatomic, getter=isBundleOnwer) _Bool bundleOwner; // @synthesize bundleOwner=_bundleOwner;
@property(readonly, nonatomic, getter=isPartOfBundle) _Bool partOfBundle; // @synthesize partOfBundle=_partOfBundle;
@property(readonly, nonatomic) long long carrierBundlingErrorCode; // @synthesize carrierBundlingErrorCode=_carrierBundlingErrorCode;
@property(readonly, copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, copy, nonatomic) NSString *cellularOperatorName; // @synthesize cellularOperatorName=_cellularOperatorName;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy, nonatomic) NSArray *termsStatusList; // @synthesize termsStatusList=_termsStatusList;
@property(readonly, nonatomic, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible; // @synthesize discoveryModeEligible=_isDiscoveryModeEligible;
@property(readonly, nonatomic, getter=isAdministrator) _Bool administrator; // @synthesize administrator=_isAdministrator;
@property(readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long reasonType; // @synthesize reasonType=_reasonType;
@property(readonly, nonatomic) long long carrierBundlingStatusType; // @synthesize carrierBundlingStatusType=_carrierBundlingStatusType;
@property(readonly, nonatomic, getter=isPurchaser) _Bool purchaser; // @synthesize purchaser=_isPurchaser;
@property(readonly, nonatomic, getter=isEligibleForFreeTrial) _Bool eligibleForFreeTrial; // @synthesize eligibleForFreeTrial=_isEligibleForFreeTrial;
@property(readonly, nonatomic, getter=isInFreeTrial) _Bool inFreeTrial; // @synthesize inFreeTrial=_isInFreeTrial;
@property(readonly, nonatomic) _Bool hasOfflineSlots; // @synthesize hasOfflineSlots=_hasOfflineSlots;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic, getter=isMatchEnabled) _Bool matchEnabled; // @synthesize matchEnabled=_isMatchEnabled;
@property(readonly, nonatomic, getter=isHeadOfHousehold) _Bool headOfHousehold; // @synthesize headOfHousehold=_isHeadOfHousehold;
@property(readonly, nonatomic) _Bool hasFamilyGreaterThanOneMember; // @synthesize hasFamilyGreaterThanOneMember=_hasFamilyGreaterThanOneMember;
@property(readonly, nonatomic) _Bool hasFamily; // @synthesize hasFamily=_hasFamily;
@property(readonly, nonatomic, getter=isMinorAccountHolder) _Bool minorAccountHolder; // @synthesize minorAccountHolder=_isMinorAccountHolder;
@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(struct _NSZone *)arg2;	// IMP=0x00000000001bc4ee
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic, getter=isCloudMusicServiceEnabled) _Bool cloudMusicServiceEnabled;
@property(readonly, nonatomic) _Bool hasAddToCloudLibraryCapability;
@property(readonly, nonatomic) _Bool hasCatalogPlaybackCapability;
- (_Bool)hasCapability:(unsigned long long)arg1;	// IMP=0x00000000001bc2d1
@property(readonly, nonatomic) unsigned long long capabilities;
- (id)description;	// IMP=0x00000000001bc01e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bbda7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bb9c6
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bb973
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bb968
- (_Bool)isEqualToStatus:(id)arg1;	// IMP=0x00000000001bb754
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001bb6ed
- (id)_init;	// IMP=0x00000000001bb6be
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x00000000001ba4ff

@end

