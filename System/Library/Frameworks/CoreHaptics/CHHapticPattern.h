//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHaptics/CHHapticPlayable-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface CHHapticPattern : NSObject <CHHapticPlayable>
{
    NSNumber *_version;	// 8 = 0x8
    NSString *_patternID;	// 16 = 0x10
    NSDictionary *_configurationDictionary;	// 24 = 0x18
    NSMutableArray *_embeddedResourceInfo;	// 32 = 0x20
    NSMutableArray *_events;	// 40 = 0x28
    NSMutableArray *_parameters;	// 48 = 0x30
    NSMutableArray *_parameterCurves;	// 56 = 0x38
}

+ (id)patternForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001de17
+ (id)eventListFromEvents:(id)arg1 parameters:(id)arg2 parameterCurves:(id)arg3 engine:(id)arg4 privileged:(_Bool)arg5;	// IMP=0x000000000001d7ee
- (void).cxx_destruct;	// IMP=0x000000000001e9df
@property(readonly, nonatomic) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (id)eventListFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001de0f
- (id)resolveExternalResources:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d0ab
@property(readonly, nonatomic) double duration;
- (id)exportDictionaryWithConfigurationAndReturnError:(id *)arg1;	// IMP=0x000000000001c37c
- (id)exportDictionaryAndReturnError:(id *)arg1;	// IMP=0x000000000001c273
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bd58
- (id)initWithEvents:(id)arg1 parameterCurves:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001bbab
- (id)initWithEvents:(id)arg1 parameters:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b9fe
- (id)init;	// IMP=0x000000000001b9f0
@property(readonly) NSString *audioPowerUsage;
@property(readonly) NSString *hapticPowerUsage;
@property(readonly) NSString *priority;
@property(readonly) NSString *locality;
@property(readonly) float version;
@property(readonly) NSString *patternID;
@property(readonly) NSArray *parameterCurves;
@property(readonly) NSArray *parameters;
@property(readonly) NSArray *events;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
