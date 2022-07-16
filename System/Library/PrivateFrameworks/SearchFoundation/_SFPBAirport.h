//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBAirport-Protocol.h>

@class NSData, NSString, _SFPBLatLng, _SFPBTimeZone;

@interface _SFPBAirport : PBCodable <_SFPBAirport, NSSecureCoding>
{
    NSString *_code;	// 8 = 0x8
    _SFPBTimeZone *_timezone;	// 16 = 0x10
    _SFPBLatLng *_location;	// 24 = 0x18
    NSString *_city;	// 32 = 0x20
    NSString *_street;	// 40 = 0x28
    NSString *_district;	// 48 = 0x30
    NSString *_state;	// 56 = 0x38
    NSString *_postalCode;	// 64 = 0x40
    NSString *_countryCode;	// 72 = 0x48
    NSString *_country;	// 80 = 0x50
    NSString *_name;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000073cbb
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) _SFPBLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) _SFPBTimeZone *timezone; // @synthesize timezone=_timezone;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000007364a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000007358c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000072fcb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000722ed
- (void)writeTo:(id)arg1;	// IMP=0x000000000007204b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007203e
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000018d48a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
