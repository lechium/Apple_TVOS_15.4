//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString, _AUStaticParameterInfo;

@interface AUParameter <NSSecureCoding>
{
    struct atomic<bool> _localValueStale;	// 88 = 0x58
    struct atomic<int> _numUIObservers;	// 92 = 0x5c
    struct atomic<int> _numRecordingObservers;	// 96 = 0x60
    float _value;	// 100 = 0x64
    unsigned long long _address;	// 104 = 0x68
    NSArray *_dependentParameters;	// 112 = 0x70
    _AUStaticParameterInfo *_info;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000def1c
- (id).cxx_construct;	// IMP=0x00000000000dc20f
- (void).cxx_destruct;	// IMP=0x00000000000dc1de
@property(retain, nonatomic) _AUStaticParameterInfo *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) NSArray *dependentParameters; // @synthesize dependentParameters=_dependentParameters;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
- (void)_observersChanged:(_Bool)arg1 deltaCount:(int)arg2;	// IMP=0x00000000000dc165
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dbe39
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dbcc4
- (void)set_originalOrder:(unsigned int)arg1;	// IMP=0x00000000000dbca7
- (unsigned int)_originalOrder;	// IMP=0x00000000000dbc8a
- (void)set_defaultValue:(float)arg1;	// IMP=0x00000000000dbc6d
- (float)_defaultValue;	// IMP=0x00000000000dbc50
- (void)set_clumpID:(unsigned int)arg1;	// IMP=0x00000000000dbc33
- (unsigned int)_clumpID;	// IMP=0x00000000000dbc16
@property(readonly, copy, nonatomic) NSArray *valueStrings;
@property(readonly, nonatomic) unsigned int flags;
@property(readonly, copy, nonatomic) NSString *unitName;
@property(readonly, nonatomic) unsigned int unit;
@property(readonly, nonatomic) float maxValue;
@property(readonly, nonatomic) float minValue;
- (float)valueFromString:(id)arg1;	// IMP=0x00000000000db7dc
- (id)stringFromValue:(const float *)arg1;	// IMP=0x00000000000db660
- (void)setValue:(float)arg1 extOriginator:(struct AUParameterObserverExtendedToken)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;	// IMP=0x00000000000db495
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3 eventType:(unsigned int)arg4;	// IMP=0x00000000000db480
- (void)setValue:(float)arg1 originator:(void *)arg2 atHostTime:(unsigned long long)arg3;	// IMP=0x00000000000db468
- (void)setValue:(float)arg1 originator:(void *)arg2;	// IMP=0x00000000000db44e
@property(nonatomic) float value; // @synthesize value=_value;
- (float)_internalValue;	// IMP=0x00000000000db118
- (void)setLocalValueStale:(_Bool)arg1;	// IMP=0x00000000000db108
- (_Bool)localValueStale;	// IMP=0x00000000000db0f6
- (id)copyNodeWithOffset:(unsigned long long)arg1;	// IMP=0x00000000000dafc9
- (id)description;	// IMP=0x00000000000daec2
- (void)dealloc;	// IMP=0x00000000000dae93
- (id)initWithID:(id)arg1 name:(id)arg2 address:(unsigned long long)arg3 min:(float)arg4 max:(float)arg5 unit:(unsigned int)arg6 unitName:(id)arg7 flags:(unsigned int)arg8 valueStrings:(id)arg9 dependentParameters:(id)arg10;	// IMP=0x00000000000dac9b

@end

