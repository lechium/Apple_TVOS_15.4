//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding>
{
    float _percentUnlikely;	// 8 = 0x8
    float _percentLikely;	// 12 = 0xc
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018254c
@property(readonly, nonatomic) float percentLikely; // @synthesize percentLikely=_percentLikely;
@property(readonly, nonatomic) float percentUnlikely; // @synthesize percentUnlikely=_percentUnlikely;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)description;	// IMP=0x0000000000182718
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000182696
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018263f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000182554
- (void)dealloc;	// IMP=0x0000000000182502
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult *)arg1;	// IMP=0x000000000018244e
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentDyskinesiaUnlikely:(float)arg3 percentDyskinesiaLikely:(float)arg4;	// IMP=0x00000000001823c7

@end
