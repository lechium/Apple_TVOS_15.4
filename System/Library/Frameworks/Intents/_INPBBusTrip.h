//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBusTrip-Protocol.h>

@class NSString, _INPBDateTimeRange, _INPBLocationValue;

@interface _INPBBusTrip : PBCodable <_INPBBusTrip, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBLocationValue *_arrivalBusStopLocation;	// 8 = 0x8
    NSString *_arrivalPlatform;	// 16 = 0x10
    NSString *_busName;	// 24 = 0x18
    NSString *_busNumber;	// 32 = 0x20
    _INPBLocationValue *_departureBusStopLocation;	// 40 = 0x28
    NSString *_departurePlatform;	// 48 = 0x30
    NSString *_provider;	// 56 = 0x38
    _INPBDateTimeRange *_tripDuration;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000443360
- (void).cxx_destruct;	// IMP=0x0000000000442f55
@property(retain, nonatomic) _INPBDateTimeRange *tripDuration; // @synthesize tripDuration=_tripDuration;
@property(copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
@property(copy, nonatomic) NSString *departurePlatform; // @synthesize departurePlatform=_departurePlatform;
@property(retain, nonatomic) _INPBLocationValue *departureBusStopLocation; // @synthesize departureBusStopLocation=_departureBusStopLocation;
@property(copy, nonatomic) NSString *busNumber; // @synthesize busNumber=_busNumber;
@property(copy, nonatomic) NSString *busName; // @synthesize busName=_busName;
@property(copy, nonatomic) NSString *arrivalPlatform; // @synthesize arrivalPlatform=_arrivalPlatform;
@property(retain, nonatomic) _INPBLocationValue *arrivalBusStopLocation; // @synthesize arrivalBusStopLocation=_arrivalBusStopLocation;
- (id)dictionaryRepresentation;	// IMP=0x0000000000442b89
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004421c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000441fc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000441f36
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000441e37
- (void)writeTo:(id)arg1;	// IMP=0x0000000000441bb3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000441ba6
@property(readonly, nonatomic) _Bool hasTripDuration;
@property(readonly, nonatomic) _Bool hasProvider;
@property(readonly, nonatomic) _Bool hasDeparturePlatform;
@property(readonly, nonatomic) _Bool hasDepartureBusStopLocation;
@property(readonly, nonatomic) _Bool hasBusNumber;
@property(readonly, nonatomic) _Bool hasBusName;
@property(readonly, nonatomic) _Bool hasArrivalPlatform;
@property(readonly, nonatomic) _Bool hasArrivalBusStopLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

