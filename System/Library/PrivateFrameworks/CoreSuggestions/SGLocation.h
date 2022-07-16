//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>
#import <CoreSuggestions/SGEventLocationForGeocode-Protocol.h>

@class NSData, NSString;

@interface SGLocation <SGEventLocationForGeocode, NSCopying, NSSecureCoding>
{
    unsigned long long _locationType;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSString *_address;	// 24 = 0x18
    double _latitude;	// 32 = 0x20
    double _longitude;	// 40 = 0x28
    double _accuracy;	// 48 = 0x30
    double _quality;	// 56 = 0x38
    NSString *_airportCode;	// 64 = 0x40
    NSData *_handle;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035d79
- (void).cxx_destruct;	// IMP=0x0000000000035d26
@property(readonly, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(readonly, nonatomic) double quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;	// IMP=0x0000000000035c0c
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;	// IMP=0x0000000000035a4e
- (id)geocodeHandle;	// IMP=0x0000000000035a3c
- (double)geocodeAccuracy;	// IMP=0x0000000000035a2a
- (double)geocodeLongitude;	// IMP=0x0000000000035a18
- (double)geocodeLatitude;	// IMP=0x0000000000035a06
- (_Bool)geocodeIsEnd;	// IMP=0x00000000000359ec
- (_Bool)geocodeIsStart;	// IMP=0x00000000000359d2
- (id)geocodeAirportCode;	// IMP=0x00000000000359c0
- (id)geocodeAddress;	// IMP=0x00000000000359ae
- (id)geocodeLabel;	// IMP=0x000000000003599c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isGeocoded) _Bool geocoded;
- (long long)compare:(id)arg1;	// IMP=0x00000000000357d4
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035703
- (_Bool)isEqualToLocation:(id)arg1;	// IMP=0x000000000003555d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000354f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035382
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035187
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9 quality:(double)arg10 handle:(id)arg11;	// IMP=0x0000000000034bec
- (id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5;	// IMP=0x0000000000034a77
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 airportCode:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9;	// IMP=0x0000000000034a55
- (id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 accuracy:(double)arg7 quality:(double)arg8;	// IMP=0x0000000000034a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
