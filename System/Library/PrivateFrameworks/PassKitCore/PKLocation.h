//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKLocation : NSObject <NSSecureCoding>
{
    _Bool _hasAltitude;	// 8 = 0x8
    _Atomic _Bool _hashComputed;	// 9 = 0x9
    _Atomic unsigned long long _hash;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_relevantText;	// 32 = 0x20
    double _latitude;	// 40 = 0x28
    double _longitude;	// 48 = 0x30
    double _altitude;	// 56 = 0x38
    double _maxDistance;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004389de
- (void).cxx_destruct;	// IMP=0x0000000000439229
@property(nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(nonatomic) double altitude; // @synthesize altitude=_altitude;
@property(readonly, nonatomic) _Bool hasAltitude; // @synthesize hasAltitude=_hasAltitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *relevantText; // @synthesize relevantText=_relevantText;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)CLLocation;	// IMP=0x0000000000439198
- (unsigned long long)hash;	// IMP=0x0000000000439073
- (_Bool)hasEqualCoordinatesToLocation:(id)arg1;	// IMP=0x0000000000439001
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000438e82
- (id)description;	// IMP=0x0000000000438dee
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000438bd0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004389e6
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000438833
- (id)init;	// IMP=0x0000000000438804

@end

