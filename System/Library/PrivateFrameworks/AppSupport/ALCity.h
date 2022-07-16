//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ALCity : NSObject
{
    int _identifier;	// 8 = 0x8
    NSString *_localeCode;	// 16 = 0x10
    NSString *_timeZone;	// 24 = 0x18
    float _longitude;	// 32 = 0x20
    float _latitude;	// 36 = 0x24
    NSString *_yahooCode;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_unlocalizedName;	// 56 = 0x38
    NSString *_countryName;	// 64 = 0x40
    NSString *_unlocalizedCountryName;	// 72 = 0x48
    NSString *_countryOverride;	// 80 = 0x50
    NSString *_unlocalizedCountryOverride;	// 88 = 0x58
    NSString *_identifierForCPCity;	// 96 = 0x60
    _Bool _localizationAttempted;	// 104 = 0x68
    _Bool _displayNameIncludingCountryShowsOnlyCountry;	// 105 = 0x69
}

@property(nonatomic) _Bool displayNameIncludingCountryShowsOnlyCountry; // @synthesize displayNameIncludingCountryShowsOnlyCountry=_displayNameIncludingCountryShowsOnlyCountry;
@property(retain, nonatomic) NSString *unlocalizedCountryOverride; // @synthesize unlocalizedCountryOverride=_unlocalizedCountryOverride;
@property(retain, nonatomic) NSString *yahooCode; // @synthesize yahooCode=_yahooCode;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *localeCode; // @synthesize localeCode=_localeCode;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x0000000000021fd7
@property(retain, nonatomic) NSString *unlocalizedCountryName;
@property(retain, nonatomic) NSString *unlocalizedName;
@property(retain, nonatomic) NSString *countryOverride;
@property(retain, nonatomic) NSString *countryName;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) NSDictionary *properties;
@property(readonly, nonatomic) NSString *classicIdentifier;
- (id)displayNameIncludingCountry:(_Bool)arg1;	// IMP=0x0000000000021b2a
- (id)displayNameIncludingCountry:(_Bool)arg1 withFormat:(id)arg2;	// IMP=0x0000000000021a5c
- (void)ensureLocalized;	// IMP=0x00000000000219fb
- (unsigned long long)hash;	// IMP=0x00000000000219f1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000219a1
- (void)dealloc;	// IMP=0x000000000002191f
- (id)initWithSQLRow:(char **)arg1;	// IMP=0x0000000000021783
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000000021510
- (id)init;	// IMP=0x00000000000214fc

@end
