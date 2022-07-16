//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAirport-Protocol.h>

@class NSData, NSDictionary, NSString, NSTimeZone, SFLatLng;

@interface SFAirport : NSObject <SFAirport, NSSecureCoding, NSCopying>
{
    NSString *_code;	// 8 = 0x8
    NSTimeZone *_timezone;	// 16 = 0x10
    SFLatLng *_location;	// 24 = 0x18
    NSString *_city;	// 32 = 0x20
    NSString *_street;	// 40 = 0x28
    NSString *_district;	// 48 = 0x30
    NSString *_state;	// 56 = 0x38
    NSString *_postalCode;	// 64 = 0x40
    NSString *_countryCode;	// 72 = 0x48
    NSString *_country;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b1dd3
- (void).cxx_destruct;	// IMP=0x00000000001b2238
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) SFLatLng *location; // @synthesize location=_location;
@property(copy, nonatomic) NSTimeZone *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1fdc
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b1e8d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b1ddb
- (id)initWithProtobuf:(id)arg1;	// IMP=0x000000000018d978

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

