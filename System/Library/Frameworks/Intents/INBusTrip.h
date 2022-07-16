//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INBusTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>
{
    NSString *_provider;	// 8 = 0x8
    NSString *_busName;	// 16 = 0x10
    NSString *_busNumber;	// 24 = 0x18
    INDateComponentsRange *_tripDuration;	// 32 = 0x20
    CLPlacemark *_departureBusStopLocation;	// 40 = 0x28
    NSString *_departurePlatform;	// 48 = 0x30
    CLPlacemark *_arrivalBusStopLocation;	// 56 = 0x38
    NSString *_arrivalPlatform;	// 64 = 0x40
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x0000000000446070
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000446068
- (void).cxx_destruct;	// IMP=0x0000000000445ffe
@property(readonly, copy, nonatomic) NSString *arrivalPlatform; // @synthesize arrivalPlatform=_arrivalPlatform;
@property(readonly, copy, nonatomic) CLPlacemark *arrivalBusStopLocation; // @synthesize arrivalBusStopLocation=_arrivalBusStopLocation;
@property(readonly, copy, nonatomic) NSString *departurePlatform; // @synthesize departurePlatform=_departurePlatform;
@property(readonly, copy, nonatomic) CLPlacemark *departureBusStopLocation; // @synthesize departureBusStopLocation=_departureBusStopLocation;
@property(readonly, copy, nonatomic) INDateComponentsRange *tripDuration; // @synthesize tripDuration=_tripDuration;
@property(readonly, copy, nonatomic) NSString *busNumber; // @synthesize busNumber=_busNumber;
@property(readonly, copy, nonatomic) NSString *busName; // @synthesize busName=_busName;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (id)_dictionaryRepresentation;	// IMP=0x0000000000445c6e
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000445b92
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000044592a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000445845
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004454cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004454c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000445348
@property(readonly) unsigned long long hash;
- (id)initWithProvider:(id)arg1 busName:(id)arg2 busNumber:(id)arg3 tripDuration:(id)arg4 departureBusStopLocation:(id)arg5 departurePlatform:(id)arg6 arrivalBusStopLocation:(id)arg7 arrivalPlatform:(id)arg8;	// IMP=0x00000000004450ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

