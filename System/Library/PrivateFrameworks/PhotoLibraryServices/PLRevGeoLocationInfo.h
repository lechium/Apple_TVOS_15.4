//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class CNPostalAddress, NSString, PLRevGeoCompoundNameInfo, PLRevGeoMapItem;

@interface PLRevGeoLocationInfo : NSObject <NSSecureCoding>
{
    _Bool _isHome;	// 8 = 0x8
    PLRevGeoMapItem *_mapItem;	// 16 = 0x10
    CNPostalAddress *_postalAddress;	// 24 = 0x18
    NSString *_addressString;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_geoServiceProvider;	// 48 = 0x30
    PLRevGeoCompoundNameInfo *_compoundNameInfo;	// 56 = 0x38
    PLRevGeoCompoundNameInfo *_compoundSecondaryNameInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e33c4
+ (_Bool)isInvalidWithPlistData:(id)arg1;	// IMP=0x00000000002e328e
+ (_Bool)isInvalidWithCoder:(id)arg1;	// IMP=0x00000000002e326a
+ (id)infoFromPlistData:(id)arg1;	// IMP=0x00000000002e3149
+ (id)_namingOrderForAssetDetailedReverseGeoDescription;	// IMP=0x00000000002e313c
+ (id)_namingOrderForAssetReverseGeoDescription;	// IMP=0x00000000002e312f
+ (id)_newRevGeoLocationInfoFromData:(id)arg1;	// IMP=0x00000000002e30be
+ (id)newDataFromRevGeoLocationInfo:(id)arg1;	// IMP=0x00000000002e304a
+ (id)countryCodeWithGEOMapItem:(id)arg1;	// IMP=0x00000000004a5ea1
- (void).cxx_destruct;	// IMP=0x00000000002e2feb
@property(nonatomic) _Bool isHome; // @synthesize isHome=_isHome;
@property(readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundSecondaryNameInfo; // @synthesize compoundSecondaryNameInfo=_compoundSecondaryNameInfo;
@property(readonly, nonatomic) PLRevGeoCompoundNameInfo *compoundNameInfo; // @synthesize compoundNameInfo=_compoundNameInfo;
@property(readonly, nonatomic) NSString *geoServiceProvider; // @synthesize geoServiceProvider=_geoServiceProvider;
@property(readonly, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(readonly, nonatomic) NSString *addressString; // @synthesize addressString=_addressString;
@property(readonly, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(readonly, nonatomic) PLRevGeoMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e2d6b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e2c71
- (id)plistData;	// IMP=0x00000000002e2b7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e28d1
- (id)placeWithAnnotation:(id)arg1;	// IMP=0x00000000002e28ae
- (_Bool)hasLocation;	// IMP=0x00000000002e27d8
- (unsigned long long)_locationInfoOrderForCurrentLocale;	// IMP=0x00000000002e25ed
- (id)placeNamesForLocalizedDetailedDescription;	// IMP=0x00000000002e2355
- (id)localizedDescription;	// IMP=0x00000000002e1e93
- (_Bool)hasMapItem;	// IMP=0x00000000002e1e85
- (id)description;	// IMP=0x00000000002e1de2
- (id)initWithMapItem:(id)arg1 postalAddress:(id)arg2 addressString:(id)arg3 countryCode:(id)arg4 compoundNameInfo:(id)arg5 compoundSecondaryNameInfo:(id)arg6 isHome:(_Bool)arg7 geoServiceProvider:(id)arg8;	// IMP=0x00000000002e1c96
- (id)initWithGEOMapItem:(id)arg1;	// IMP=0x00000000004a5d27
- (_Bool)locationWasResolvedWithBestRevGeoProvider;	// IMP=0x00000000004a5c22

@end
