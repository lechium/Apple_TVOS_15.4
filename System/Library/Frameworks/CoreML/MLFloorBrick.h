//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/EspressoBrick-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MLFloorBrick : NSObject <EspressoBrick>
{
    NSArray *_inputRanks;	// 8 = 0x8
    NSArray *_outputRanks;	// 16 = 0x10
    NSArray *_inputShapes;	// 24 = 0x18
    NSArray *_outputShapes;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a12da
@property(readonly, nonatomic) NSArray *outputShapes; // @synthesize outputShapes=_outputShapes;
@property(readonly, nonatomic) NSArray *inputShapes; // @synthesize inputShapes=_inputShapes;
@property(readonly, nonatomic) NSArray *outputRanks; // @synthesize outputRanks=_outputRanks;
@property(readonly, nonatomic) NSArray *inputRanks; // @synthesize inputRanks=_inputRanks;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;	// IMP=0x00000000000a10db
- (_Bool)hasGPUSupport;	// IMP=0x00000000000a10d3
- (id)initWithParameters:(id)arg1;	// IMP=0x00000000000a0f9a
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;	// IMP=0x00000000000a0f84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

