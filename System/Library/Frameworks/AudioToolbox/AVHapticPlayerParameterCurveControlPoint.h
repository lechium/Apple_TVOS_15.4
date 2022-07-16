//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding>
{
    float _value;	// 8 = 0x8
    double _time;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b804b
@property float value; // @synthesize value=_value;
@property double time; // @synthesize time=_time;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7f98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b7f27
- (id)initWithTime:(double)arg1 value:(float)arg2;	// IMP=0x00000000000b7e96

@end
