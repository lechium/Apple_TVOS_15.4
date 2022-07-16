//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileInstallation/NSCopying-Protocol.h>
#import <MobileInstallation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface MIStoreMetadata : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _hasMessagesExtension;	// 8 = 0x8
    _Bool _purchasedRedownload;	// 9 = 0x9
    _Bool _launchProhibited;	// 10 = 0xa
    _Bool _gameCenterEnabled;	// 11 = 0xb
    _Bool _gameCenterEverEnabled;	// 12 = 0xc
    _Bool _isAutoDownload;	// 13 = 0xd
    _Bool _sideLoadedDeviceBasedVPP;	// 14 = 0xe
    _Bool _deviceBasedVPP;	// 15 = 0xf
    _Bool _factoryInstall;	// 16 = 0x10
    NSString *_iAdAttribution;	// 24 = 0x18
    NSString *_iAdConversionDate;	// 32 = 0x20
    NSString *_iAdImpressionDate;	// 40 = 0x28
    NSString *_artistName;	// 48 = 0x30
    NSNumber *_betaExternalVersionIdentifier;	// 56 = 0x38
    NSString *_bundleVersion;	// 64 = 0x40
    NSString *_bundleShortVersionString;	// 72 = 0x48
    NSString *_purchaseDate;	// 80 = 0x50
    NSString *_appleID;	// 88 = 0x58
    NSNumber *_DSPersonID;	// 96 = 0x60
    NSNumber *_downloaderID;	// 104 = 0x68
    NSNumber *_familyID;	// 112 = 0x70
    NSNumber *_purchaserID;	// 120 = 0x78
    NSString *_altDSID;	// 128 = 0x80
    NSNumber *_initialODRSize;	// 136 = 0x88
    NSNumber *_itemID;	// 144 = 0x90
    NSString *_itemName;	// 152 = 0x98
    NSString *_kind;	// 160 = 0xa0
    NSString *_label;	// 168 = 0xa8
    NSString *_ratingLabel;	// 176 = 0xb0
    NSNumber *_ratingRank;	// 184 = 0xb8
    NSString *_releaseDate;	// 192 = 0xc0
    NSString *_assetToken;	// 200 = 0xc8
    NSString *_softwareVersionBundleID;	// 208 = 0xd0
    NSNumber *_softwareVersionExternalIdentifier;	// 216 = 0xd8
    NSString *_sourceApp;	// 224 = 0xe0
    NSString *_storeCohort;	// 232 = 0xe8
    NSNumber *_storefront;	// 240 = 0xf0
    NSString *_variantID;	// 248 = 0xf8
    NSString *_betaBuildGroupID;	// 256 = 0x100
    NSString *_genre;	// 264 = 0x108
    NSNumber *_genreID;	// 272 = 0x110
    NSArray *_subGenres;	// 280 = 0x118
    NSArray *_categories;	// 288 = 0x120
    NSString *_referrerURL;	// 296 = 0x128
    NSString *_referrerApp;	// 304 = 0x130
    NSString *_enterpriseInstallURL;	// 312 = 0x138
    NSString *_redownloadParams;	// 320 = 0x140
    NSDictionary *_nameTranscriptions;	// 328 = 0x148
    NSString *_md5;	// 336 = 0x150
    NSData *_protectedMetadata;	// 344 = 0x158
    NSNumber *_hasOrEverHasHadIAP;	// 352 = 0x160
}

+ (id)metadataFromDictionary:(id)arg1;	// IMP=0x000000000000c063
+ (id)metadataFromPlistAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bef4
+ (id)metadataFromPlistData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000bd9a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000bd92
- (void).cxx_destruct;	// IMP=0x000000000000f70d
@property(retain, nonatomic) NSNumber *hasOrEverHasHadIAP; // @synthesize hasOrEverHasHadIAP=_hasOrEverHasHadIAP;
@property(copy, nonatomic) NSData *protectedMetadata; // @synthesize protectedMetadata=_protectedMetadata;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic, getter=isFactoryInstall) _Bool factoryInstall; // @synthesize factoryInstall=_factoryInstall;
@property(copy, nonatomic) NSDictionary *nameTranscriptions; // @synthesize nameTranscriptions=_nameTranscriptions;
@property(copy, nonatomic) NSString *redownloadParams; // @synthesize redownloadParams=_redownloadParams;
@property(copy, nonatomic) NSString *enterpriseInstallURL; // @synthesize enterpriseInstallURL=_enterpriseInstallURL;
@property(nonatomic) _Bool deviceBasedVPP; // @synthesize deviceBasedVPP=_deviceBasedVPP;
@property(nonatomic) _Bool sideLoadedDeviceBasedVPP; // @synthesize sideLoadedDeviceBasedVPP=_sideLoadedDeviceBasedVPP;
@property(copy, nonatomic) NSString *referrerApp; // @synthesize referrerApp=_referrerApp;
@property(copy, nonatomic) NSString *referrerURL; // @synthesize referrerURL=_referrerURL;
@property(nonatomic) _Bool isAutoDownload; // @synthesize isAutoDownload=_isAutoDownload;
@property(nonatomic) _Bool gameCenterEverEnabled; // @synthesize gameCenterEverEnabled=_gameCenterEverEnabled;
@property(nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSArray *subGenres; // @synthesize subGenres=_subGenres;
@property(retain, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *betaBuildGroupID; // @synthesize betaBuildGroupID=_betaBuildGroupID;
@property(copy, nonatomic) NSString *variantID; // @synthesize variantID=_variantID;
@property(retain, nonatomic) NSNumber *storefront; // @synthesize storefront=_storefront;
@property(copy, nonatomic) NSString *storeCohort; // @synthesize storeCohort=_storeCohort;
@property(copy, nonatomic) NSString *sourceApp; // @synthesize sourceApp=_sourceApp;
@property(retain, nonatomic) NSNumber *softwareVersionExternalIdentifier; // @synthesize softwareVersionExternalIdentifier=_softwareVersionExternalIdentifier;
@property(copy, nonatomic) NSString *softwareVersionBundleID; // @synthesize softwareVersionBundleID=_softwareVersionBundleID;
@property(copy, nonatomic) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(nonatomic, getter=isLaunchProhibited) _Bool launchProhibited; // @synthesize launchProhibited=_launchProhibited;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *kind; // @synthesize kind=_kind;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(nonatomic, getter=isPurchasedRedownload) _Bool purchasedRedownload; // @synthesize purchasedRedownload=_purchasedRedownload;
@property(retain, nonatomic) NSNumber *initialODRSize; // @synthesize initialODRSize=_initialODRSize;
@property(nonatomic) _Bool hasMessagesExtension; // @synthesize hasMessagesExtension=_hasMessagesExtension;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSNumber *purchaserID; // @synthesize purchaserID=_purchaserID;
@property(retain, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(retain, nonatomic) NSNumber *downloaderID; // @synthesize downloaderID=_downloaderID;
@property(retain, nonatomic) NSNumber *DSPersonID; // @synthesize DSPersonID=_DSPersonID;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(copy, nonatomic) NSString *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(copy, nonatomic) NSString *bundleShortVersionString; // @synthesize bundleShortVersionString=_bundleShortVersionString;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSNumber *betaExternalVersionIdentifier; // @synthesize betaExternalVersionIdentifier=_betaExternalVersionIdentifier;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy, nonatomic) NSString *iAdImpressionDate; // @synthesize iAdImpressionDate=_iAdImpressionDate;
@property(copy, nonatomic) NSString *iAdConversionDate; // @synthesize iAdConversionDate=_iAdConversionDate;
@property(copy, nonatomic) NSString *iAdAttribution; // @synthesize iAdAttribution=_iAdAttribution;
- (id)description;	// IMP=0x000000000000f17d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d383
- (id)dictionaryRepresentation;	// IMP=0x000000000000c0b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b37a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a80a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009aa3
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000007343

@end

