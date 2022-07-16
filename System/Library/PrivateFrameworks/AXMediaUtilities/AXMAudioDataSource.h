//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXMAudioDataSource : NSObject
{
    _Bool _circular;	// 8 = 0x8
    void *_sampleBuffer;	// 16 = 0x10
    unsigned long long _length;	// 24 = 0x18
    unsigned long long _currentSampleIndex;	// 32 = 0x20
    double _level;	// 40 = 0x28
    NSArray *_effectsChain;	// 48 = 0x30
    NSString *_name;	// 56 = 0x38
    double _sampleRate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000008913b
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *effectsChain; // @synthesize effectsChain=_effectsChain;
@property(nonatomic) double level; // @synthesize level=_level;
@property(nonatomic, getter=isCircular) _Bool circular; // @synthesize circular=_circular;
@property(nonatomic) unsigned long long currentSampleIndex; // @synthesize currentSampleIndex=_currentSampleIndex;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(readonly, nonatomic) void *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;
- (void)normalizeAudio;	// IMP=0x0000000000088fef
- (id)description;	// IMP=0x0000000000088f04
- (void)processEffects:(unsigned long long)arg1;	// IMP=0x0000000000088db2
- (void)removeEffectFromChain:(id)arg1;	// IMP=0x0000000000088cda
- (void)addEffectToChain:(id)arg1;	// IMP=0x0000000000088c01
- (void)dealloc;	// IMP=0x0000000000088a5d
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(_Bool)arg3;	// IMP=0x000000000008894a
- (id)init;	// IMP=0x0000000000088928

@end

