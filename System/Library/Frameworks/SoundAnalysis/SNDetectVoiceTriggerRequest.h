//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class MLModel, NSArray, NSString;

@interface SNDetectVoiceTriggerRequest : NSObject <SNAnalyzerCreating, SNRequest>
{
    MLModel *_model;	// 8 = 0x8
    double _sampleRate;	// 16 = 0x10
    long long _hopSizeSamples;	// 24 = 0x18
    long long _blocksBetweenTriggers;	// 32 = 0x20
    NSArray *_commands;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000585e0
@property(copy, nonatomic) NSArray *commands; // @synthesize commands=_commands;
@property(nonatomic) long long blocksBetweenTriggers; // @synthesize blocksBetweenTriggers=_blocksBetweenTriggers;
@property(nonatomic) long long hopSizeSamples; // @synthesize hopSizeSamples=_hopSizeSamples;
@property(readonly, nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToMeasureDetectVoiceTriggerRequest:(id)arg1;	// IMP=0x000000000005857b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000058500
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x00000000000584c6
- (id)initWithModel:(id)arg1 dictionary:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000057d41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

