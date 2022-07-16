//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSString;

@interface PPPostalAddress : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_thoroughfare;	// 8 = 0x8
    NSString *_subThoroughfare;	// 16 = 0x10
    NSString *_locality;	// 24 = 0x18
    NSString *_subLocality;	// 32 = 0x20
    NSString *_administrativeArea;	// 40 = 0x28
    NSString *_subAdministrativeArea;	// 48 = 0x30
    NSString *_postalCode;	// 56 = 0x38
    NSString *_country;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057bf8
+ (id)normalizeAddressString:(id)arg1;	// IMP=0x0000000000057a7e
+ (id)postalAddressWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;	// IMP=0x0000000000057958
- (void).cxx_destruct;	// IMP=0x00000000000578ee
@property(readonly, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(readonly, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(readonly, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(readonly, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property(readonly, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(readonly, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(readonly, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
- (id)_countryStringWithCountry:(id)arg1 isoCode:(id)arg2;	// IMP=0x00000000000577b3
- (_Bool)isEqualToPostalAddress:(id)arg1;	// IMP=0x0000000000057568
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000057500
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000573c0
- (unsigned long long)hash;	// IMP=0x00000000000572e9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000057204
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057037
- (id)description;	// IMP=0x0000000000056fd2
- (id)singleLineNormalizedAddressString;	// IMP=0x0000000000056f3f
- (id)toCNPostalAddress;	// IMP=0x0000000000056df2
- (id)initWithContactsPostalAddress:(id)arg1;	// IMP=0x0000000000056b8f
- (id)initWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 subAdministrativeArea:(id)arg6 postalCode:(id)arg7 country:(id)arg8;	// IMP=0x0000000000056a30

@end

