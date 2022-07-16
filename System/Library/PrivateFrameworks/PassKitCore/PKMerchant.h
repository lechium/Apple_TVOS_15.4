//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKCloudStoreCoding-Protocol.h>

@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    _Bool _useRawMerchantData;	// 8 = 0x8
    _Bool _mapsDataIsFromLocalMatch;	// 9 = 0x9
    NSString *_displayName;	// 16 = 0x10
    NSURL *_originURL;	// 24 = 0x18
    NSString *_webMerchantIdentifier;	// 32 = 0x20
    NSString *_webMerchantName;	// 40 = 0x28
    long long _adamIdentifier;	// 48 = 0x30
    long long _industryCode;	// 56 = 0x38
    NSString *_industryCategory;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_rawName;	// 80 = 0x50
    NSString *_merchantIdentifier;	// 88 = 0x58
    NSString *_rawCANL;	// 96 = 0x60
    NSString *_rawCity;	// 104 = 0x68
    NSString *_rawState;	// 112 = 0x70
    NSString *_rawCountry;	// 120 = 0x78
    NSString *_city;	// 128 = 0x80
    NSString *_state;	// 136 = 0x88
    NSString *_zip;	// 144 = 0x90
    long long _cleanConfidenceLevel;	// 152 = 0x98
    long long _fallbackcategory;	// 160 = 0xa0
    NSString *_fallbackDetailedCategory;	// 168 = 0xa8
    PKMapsMerchant *_mapsMerchant;	// 176 = 0xb0
    PKMapsBrand *_mapsBrand;	// 184 = 0xb8
}

+ (id)recordNamePrefix;	// IMP=0x00000000003aa8a8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003a9260
- (void).cxx_destruct;	// IMP=0x00000000003ad1f1
@property(nonatomic) _Bool mapsDataIsFromLocalMatch; // @synthesize mapsDataIsFromLocalMatch=_mapsDataIsFromLocalMatch;
@property(retain, nonatomic) PKMapsBrand *mapsBrand; // @synthesize mapsBrand=_mapsBrand;
@property(retain, nonatomic) PKMapsMerchant *mapsMerchant; // @synthesize mapsMerchant=_mapsMerchant;
@property(copy, nonatomic) NSString *fallbackDetailedCategory; // @synthesize fallbackDetailedCategory=_fallbackDetailedCategory;
@property(nonatomic) long long fallbackcategory; // @synthesize fallbackcategory=_fallbackcategory;
@property(nonatomic) _Bool useRawMerchantData; // @synthesize useRawMerchantData=_useRawMerchantData;
@property(nonatomic) long long cleanConfidenceLevel; // @synthesize cleanConfidenceLevel=_cleanConfidenceLevel;
@property(copy, nonatomic) NSString *zip; // @synthesize zip=_zip;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *rawCountry; // @synthesize rawCountry=_rawCountry;
@property(copy, nonatomic) NSString *rawState; // @synthesize rawState=_rawState;
@property(copy, nonatomic) NSString *rawCity; // @synthesize rawCity=_rawCity;
@property(copy, nonatomic) NSString *rawCANL; // @synthesize rawCANL=_rawCANL;
@property(copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;
@property(copy, nonatomic) NSString *rawName; // @synthesize rawName=_rawName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *industryCategory; // @synthesize industryCategory=_industryCategory;
@property(nonatomic) long long industryCode; // @synthesize industryCode=_industryCode;
@property(nonatomic) long long adamIdentifier; // @synthesize adamIdentifier=_adamIdentifier;
@property(copy, nonatomic) NSString *webMerchantName; // @synthesize webMerchantName=_webMerchantName;
@property(copy, nonatomic) NSString *webMerchantIdentifier; // @synthesize webMerchantIdentifier=_webMerchantIdentifier;
@property(copy, nonatomic) NSURL *originURL; // @synthesize originURL=_originURL;
- (_Bool)hasBetterVisualPropertiesThanMerchant:(id)arg1;	// IMP=0x00000000003acd38
- (_Bool)shouldBeCombinedWithMerchant:(id)arg1;	// IMP=0x00000000003ac36f
- (id)uniqueIdentifier;	// IMP=0x00000000003ac2b2
- (void)_regenerateDisplayName;	// IMP=0x00000000003ab99c
@property(readonly, nonatomic) NSString *detailedCategory;
@property(readonly, nonatomic) long long category;
@property(readonly, nonatomic) NSURL *businessChatURL;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *heroImageAttribution;
@property(readonly, nonatomic) NSURL *logoImageURL;
@property(readonly, nonatomic) NSURL *heroImageURL;
@property(readonly, nonatomic) _Bool hasMapsMatch;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)jsonDictionaryRepresentation;	// IMP=0x00000000003aafbd
- (id)description;	// IMP=0x00000000003aaeba
- (_Bool)isEqualToMerchant:(id)arg1;	// IMP=0x00000000003aacb7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003aac4f
- (unsigned long long)hash;	// IMP=0x00000000003aaaaa
- (_Bool)hasCloudArchivableDeviceData;	// IMP=0x00000000003aaa34
- (_Bool)isCloudArchivableDeviceDataEqual:(id)arg1;	// IMP=0x00000000003aa8b0
- (unsigned long long)itemType;	// IMP=0x00000000003aa89d
- (id)primaryIdentifier;	// IMP=0x00000000003aa895
- (id)recordTypesAndNamesForCodingType:(unsigned long long)arg1;	// IMP=0x00000000003aa88d
- (void)_encodeServerDataWithCloudStoreCoder:(id)arg1;	// IMP=0x00000000003aa688
- (void)_encodeDeviceDataWithCloudStoreCoder:(id)arg1;	// IMP=0x00000000003aa446
- (void)encodeWithCloudStoreCoder:(id)arg1 codingType:(unsigned long long)arg2;	// IMP=0x00000000003aa381
- (void)applyPropertiesFromCloudStoreRecord:(id)arg1;	// IMP=0x00000000003a9f0a
- (id)initWithCloudStoreCoder:(id)arg1;	// IMP=0x00000000003a9e13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a994d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a9268

@end
