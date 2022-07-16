//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding>
{
    int _index;	// 8 = 0x8
    float _frequency;	// 12 = 0xc
    float _amplitude;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _features;	// 32 = 0x20
    NSMutableArray *_queuedTransients;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000026df
- (void).cxx_destruct;	// IMP=0x0000000000002c30
@property(retain, nonatomic) NSMutableArray *queuedTransients; // @synthesize queuedTransients=_queuedTransients;
@property(nonatomic) float amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000002b91
- (void)drainQueuedTransients;	// IMP=0x0000000000002b7b
- (void)enqueueHapticTransientEvent:(id)arg1;	// IMP=0x0000000000002b1a
- (void)applyValuesFrom:(id)arg1;	// IMP=0x0000000000002aa2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000029c2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000028c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000280b
- (id)init;	// IMP=0x00000000000027f7
- (id)initWithIndex:(int)arg1;	// IMP=0x00000000000027e0
- (id)initWithIndex:(int)arg1 name:(id)arg2;	// IMP=0x00000000000027cb
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3;	// IMP=0x00000000000027b0
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5;	// IMP=0x00000000000026e7

@end

