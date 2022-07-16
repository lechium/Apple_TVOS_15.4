//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOMultiSectionFeature, NSString;

@interface GEORoadMatch : NSObject <NSSecureCoding>
{
    GEOMultiSectionFeature *_roadFeature;	// 8 = 0x8
    NSString *_roadName;	// 16 = 0x10
    CDStruct_071ac149 _coordinateOnRoad;	// 24 = 0x18
    double _courseOnRoad;	// 48 = 0x30
    double _distanceFromRoad;	// 56 = 0x38
    double _roadWidth;	// 64 = 0x40
    double _distanceFromJunction;	// 72 = 0x48
    double _junctionRadius;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000106549c
- (void).cxx_destruct;	// IMP=0x00000000010656e9
@property(nonatomic) double junctionRadius; // @synthesize junctionRadius=_junctionRadius;
@property(nonatomic) double distanceFromJunction; // @synthesize distanceFromJunction=_distanceFromJunction;
@property(nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) double distanceFromRoad; // @synthesize distanceFromRoad=_distanceFromRoad;
@property(nonatomic) double courseOnRoad; // @synthesize courseOnRoad=_courseOnRoad;
@property(nonatomic) CDStruct_39925896 coordinateOnRoad; // @synthesize coordinateOnRoad=_coordinateOnRoad;
@property(copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property(readonly, nonatomic) GEOMultiSectionFeature *roadFeature; // @synthesize roadFeature=_roadFeature;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000010655b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010654a4
- (void)setRoadFeature:(id)arg1;	// IMP=0x000000000106548b
- (id)initWithCoordinateOnRoad:(CDStruct_39925896)arg1 courseOnRoad:(double)arg2;	// IMP=0x0000000001065435

@end

