//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@class AVHapticPlayerParameterCurve;

@interface AVHapticEvent : NSObject <NSSecureCoding>
{
    double _time;	// 8 = 0x8
    double _duration;	// 16 = 0x10
    unsigned long long _eventCategory;	// 24 = 0x18
    union {
        unsigned long long _eventType;
        unsigned long long _paramType;
    } _u;	// 32 = 0x20
    struct AVHapticPlayerFixedParameter _fixedParams[8];	// 40 = 0x28
    AVHapticPlayerParameterCurve *_paramCurve;	// 168 = 0xa8
    long long _fixedParamCount;	// 176 = 0xb0
    float _value;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b81ef
+ (id)eventWithParameterCurve:(id)arg1;	// IMP=0x00000000000b8191
+ (id)eventWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;	// IMP=0x00000000000b8144
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4 duration:(double)arg5;	// IMP=0x00000000000b80e3
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4;	// IMP=0x00000000000b80c4
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;	// IMP=0x00000000000b8077
+ (id)eventWithEventType:(unsigned long long)arg1 time:(double)arg2;	// IMP=0x00000000000b805b
- (void).cxx_destruct;	// IMP=0x00000000000b7b7f
@property(readonly) float value; // @synthesize value=_value;
@property(readonly) long long fixedParamCount; // @synthesize fixedParamCount=_fixedParamCount;
@property(readonly) unsigned long long eventCategory; // @synthesize eventCategory=_eventCategory;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) double time; // @synthesize time=_time;
@property(readonly) AVHapticPlayerParameterCurve *parameterCurve;
@property(readonly) struct AVHapticPlayerFixedParameter *fixedParams;
@property(readonly) unsigned long long paramType;
@property(readonly) unsigned long long eventType;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b7888
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b7627
- (id)initWithParameterCurve:(id)arg1;	// IMP=0x00000000000b7540
- (id)initWithParameter:(unsigned long long)arg1 value:(float)arg2 time:(double)arg3;	// IMP=0x00000000000b74ae
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 parameters:(const struct AVHapticPlayerFixedParameter *)arg3 count:(long long)arg4 duration:(double)arg5;	// IMP=0x00000000000b73b4
- (id)initWithEventType:(unsigned long long)arg1 time:(double)arg2 duration:(double)arg3;	// IMP=0x00000000000b731d

@end

