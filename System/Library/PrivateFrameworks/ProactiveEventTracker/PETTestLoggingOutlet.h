//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveEventTracker/PETLoggingOutlet-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet>
{
    NSString *_lastLoggedKey;	// 8 = 0x8
    unsigned long long _lastLoggedScalarValue;	// 16 = 0x10
    double _lastLoggedDistributionValue;	// 24 = 0x18
    NSString *_previousLoggedKey;	// 32 = 0x20
    unsigned long long _previousLoggedScalarValue;	// 40 = 0x28
    double _previousLoggedDistributionValue;	// 48 = 0x30
    NSMutableArray *_allLoggedKeys;	// 56 = 0x38
    NSMutableArray *_allLoggedValues;	// 64 = 0x40
    NSMutableDictionary *_keyValues;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000006e45
@property(readonly, nonatomic) NSMutableDictionary *keyValues; // @synthesize keyValues=_keyValues;
@property(readonly, nonatomic) NSMutableArray *allLoggedValues; // @synthesize allLoggedValues=_allLoggedValues;
@property(readonly, nonatomic) NSMutableArray *allLoggedKeys; // @synthesize allLoggedKeys=_allLoggedKeys;
@property(readonly, nonatomic) double previousLoggedDistributionValue; // @synthesize previousLoggedDistributionValue=_previousLoggedDistributionValue;
@property(readonly, nonatomic) unsigned long long previousLoggedScalarValue; // @synthesize previousLoggedScalarValue=_previousLoggedScalarValue;
@property(readonly, nonatomic) NSString *previousLoggedKey; // @synthesize previousLoggedKey=_previousLoggedKey;
@property(readonly, nonatomic) double lastLoggedDistributionValue; // @synthesize lastLoggedDistributionValue=_lastLoggedDistributionValue;
@property(readonly, nonatomic) unsigned long long lastLoggedScalarValue; // @synthesize lastLoggedScalarValue=_lastLoggedScalarValue;
@property(readonly, nonatomic) NSString *lastLoggedKey; // @synthesize lastLoggedKey=_lastLoggedKey;
- (id)getValueForKey:(id)arg1;	// IMP=0x0000000000006dd3
- (void)reset;	// IMP=0x0000000000006d45
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;	// IMP=0x0000000000006cf4
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;	// IMP=0x0000000000006ac2
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;	// IMP=0x00000000000068bf
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;	// IMP=0x0000000000006678
- (id)init;	// IMP=0x00000000000065c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

