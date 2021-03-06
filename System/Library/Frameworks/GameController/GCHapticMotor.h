//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSCopying-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding>
{
    int _index;	// 8 = 0x8
    float _frequency;	// 12 = 0xc
    float _amplitude;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _features;	// 32 = 0x20
    NSMutableArray *_queuedTransients;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000267a4
- (void).cxx_destruct;	// IMP=0x0000000000026cf5
@property(retain, nonatomic) NSMutableArray *queuedTransients; // @synthesize queuedTransients=_queuedTransients;
@property(nonatomic) float amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000026c56
- (void)drainQueuedTransients;	// IMP=0x0000000000026c40
- (void)enqueueHapticTransientEvent:(id)arg1;	// IMP=0x0000000000026bdf
- (void)applyValuesFrom:(id)arg1;	// IMP=0x0000000000026b67
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026a87
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026988
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000268d0
- (id)init;	// IMP=0x00000000000268bc
- (id)initWithIndex:(int)arg1;	// IMP=0x00000000000268a5
- (id)initWithIndex:(int)arg1 name:(id)arg2;	// IMP=0x0000000000026890
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3;	// IMP=0x0000000000026875
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5;	// IMP=0x00000000000267ac

@end

