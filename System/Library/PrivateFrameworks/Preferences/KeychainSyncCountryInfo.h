//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying>
{
    NSString *_countryCode;	// 8 = 0x8
    NSString *_countryName;	// 16 = 0x10
    NSString *_localizedCountryName;	// 24 = 0x18
    NSString *_dialingPrefix;	// 32 = 0x20
}

+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;	// IMP=0x0000000000002e2b
+ (id)countryInfoWithDictionary:(id)arg1;	// IMP=0x0000000000002c96
+ (id)allCountries;	// IMP=0x0000000000002c78
+ (void)_loadCountriesIfNeeded;	// IMP=0x000000000000279f
- (void).cxx_destruct;	// IMP=0x00000000000033f8
@property(retain, nonatomic) NSString *dialingPrefix; // @synthesize dialingPrefix=_dialingPrefix;
@property(retain, nonatomic) NSString *localizedCountryName; // @synthesize localizedCountryName=_localizedCountryName;
@property(retain, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)description;	// IMP=0x00000000000032be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000031c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000030ab

@end

