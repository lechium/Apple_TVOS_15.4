//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class NSData;

@interface CLLocationMatchInfo : NSObject <NSCopying, NSSecureCoding>
{
    id _internal;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d877
@property(readonly, copy, nonatomic) NSData *matchDataArray;
@property(readonly, nonatomic, getter=isMatchShifted) _Bool matchShifted;
@property(readonly, nonatomic) int matchRoadClass;
@property(readonly, nonatomic) int matchFormOfWay;
@property(readonly, nonatomic) double matchCourse;
@property(readonly, nonatomic) struct CLLocationCoordinate2D matchCoordinate;
@property(readonly, nonatomic) long long matchQuality;
- (id)shortDescription;	// IMP=0x000000000002db5c
- (id)description;	// IMP=0x000000000002db0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002daba
- (void)dealloc;	// IMP=0x000000000002da7f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d9a1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d87f
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6;	// IMP=0x000000000002d7cc
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6 matchDataArray:(id)arg7;	// IMP=0x000000000002d721

@end

