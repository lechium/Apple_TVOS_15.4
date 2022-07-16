//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface CMAbsoluteAltitudeData
{
    double _altitudePrivate;	// 16 = 0x10
    double _altitude;	// 24 = 0x18
    double _accuracy;	// 32 = 0x20
    double _precision;	// 40 = 0x28
    double _absoluteAltitudeAccuracy;	// 48 = 0x30
    double _absoluteAltitudePrecision;	// 56 = 0x38
    long long _absoluteAltitudeStatusInfo;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016574e
@property(readonly, nonatomic) long long absoluteAltitudeStatusInfo; // @synthesize absoluteAltitudeStatusInfo=_absoluteAltitudeStatusInfo;
@property(readonly, nonatomic) double absoluteAltitudePrecision; // @synthesize absoluteAltitudePrecision=_absoluteAltitudePrecision;
@property(readonly, nonatomic) double absoluteAltitudeAccuracy; // @synthesize absoluteAltitudeAccuracy=_absoluteAltitudeAccuracy;
@property(readonly, nonatomic) double precision; // @synthesize precision=_precision;
@property(readonly, nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(readonly, nonatomic) double altitude; // @synthesize altitude=_altitude;
- (void)setAltitudeData:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 status:(long long)arg4;	// IMP=0x0000000000165a89
@property(readonly, nonatomic) NSNumber *absoluteAltitude;
- (id)description;	// IMP=0x00000000001659b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016593a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000165825
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000165756
- (void)dealloc;	// IMP=0x000000000016571f
- (id)initWithAltitude:(double)arg1 accuracy:(double)arg2 precision:(double)arg3 status:(long long)arg4 timestamp:(double)arg5;	// IMP=0x0000000000165672

@end

