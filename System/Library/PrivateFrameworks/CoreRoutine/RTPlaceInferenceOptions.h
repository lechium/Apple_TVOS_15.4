//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, RTLocation;

@interface RTPlaceInferenceOptions : NSObject <NSSecureCoding>
{
    _Bool _useBackground;	// 8 = 0x8
    unsigned long long _fidelityPolicy;	// 16 = 0x10
    NSArray *_locations;	// 24 = 0x18
    NSArray *_accessPoints;	// 32 = 0x20
    RTLocation *_location;	// 40 = 0x28
    double _distance;	// 48 = 0x30
    NSDate *_startDate;	// 56 = 0x38
    NSDate *_endDate;	// 64 = 0x40
    long long _limit;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001af2
- (void).cxx_destruct;	// IMP=0x0000000000001fda
@property(readonly, nonatomic) _Bool useBackground; // @synthesize useBackground=_useBackground;
@property(readonly, nonatomic) long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) unsigned long long fidelityPolicy; // @synthesize fidelityPolicy=_fidelityPolicy;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001e00
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001afa
- (id)initWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;	// IMP=0x0000000000001ac1
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3;	// IMP=0x0000000000001a88
- (id)initWithFidelityPolicy:(unsigned long long)arg1 locations:(id)arg2 accessPoints:(id)arg3 distance:(double)arg4 location:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 limit:(long long)arg8 useBackground:(_Bool)arg9;	// IMP=0x00000000000018d3
- (id)init;	// IMP=0x00000000000018a4

@end

