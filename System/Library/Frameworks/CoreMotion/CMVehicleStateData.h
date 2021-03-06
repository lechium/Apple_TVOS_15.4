//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying>
{
    CMMotionTimeRange *fTimeRange;	// 8 = 0x8
    NSString *fDeviceId;	// 16 = 0x10
    unsigned long long fVehicularState;	// 24 = 0x18
    unsigned long long fVehicularHints;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d86f8
@property(readonly, nonatomic) unsigned long long vehicularHints;
@property(readonly, nonatomic) unsigned long long vehicularState;
@property(readonly, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) CMMotionTimeRange *timeRange;
- (id)description;	// IMP=0x00000000000d8869
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d87e9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d8700
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d867e
- (void)dealloc;	// IMP=0x00000000000d8634
- (id)initWithTimestamp:(id)arg1 state:(unsigned long long)arg2 hints:(unsigned long long)arg3;	// IMP=0x00000000000d8569
- (id)initWithTimeRange:(id)arg1 deviceId:(id)arg2;	// IMP=0x00000000000d84f5

@end

