//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HapticServerConfig;

__attribute__((visibility("hidden")))
@interface HapticCommandConverter : NSObject
{
    HapticServerConfig *_serverConfig;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001731a
@property(readonly) HapticServerConfig *serverConfig; // @synthesize serverConfig=_serverConfig;
- (id)CHtoAVParameterCurve:(id)arg1;	// IMP=0x0000000000016caa
- (id)eventForParameterCurveEntry:(id)arg1;	// IMP=0x0000000000016ab3
- (id)eventForDynamicParameterEntry:(id)arg1;	// IMP=0x000000000001556f
- (id)eventForEventEntry:(id)arg1 engine:(id)arg2 privileged:(_Bool)arg3;	// IMP=0x00000000000145cc
- (id)eventForSPIEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000013cbc
- (id)eventForContinuousHapticEventType:(int)arg1 time:(double)arg2 params:(id)arg3 duration:(double)arg4;	// IMP=0x0000000000012fa7
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:(_Bool)arg1;	// IMP=0x0000000000012f2d
- (unsigned long long)continuousHapticEventTypeFromSharpness:(float)arg1 sustained:(_Bool)arg2;	// IMP=0x0000000000012e20
- (id)eventForLegacyTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x0000000000011db1
- (id)eventForTransientHapticAtTime:(double)arg1 params:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000110c5
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;	// IMP=0x0000000000011051
- (unsigned long long)transientHapticEventTypeFromSharpness:(float)arg1;	// IMP=0x0000000000010f69
- (id)eventForAudioEventType:(unsigned long long)arg1 time:(double)arg2 eventParams:(id)arg3 duration:(double)arg4;	// IMP=0x000000000001014b
- (id)initWithServerConfig:(id)arg1;	// IMP=0x00000000000100cc

@end

