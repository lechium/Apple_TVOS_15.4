//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMVehicleConnectionData : NSObject <NSSecureCoding, NSCopying>
{
    NSDate *fStartDate;	// 8 = 0x8
    NSDate *fEndDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000187897
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (id)description;	// IMP=0x00000000001879a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000187955
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018789f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000187826
- (void)dealloc;	// IMP=0x00000000001877dc
- (id)initWithStartDate:(double)arg1 endDate:(double)arg2;	// IMP=0x0000000000187744

@end
