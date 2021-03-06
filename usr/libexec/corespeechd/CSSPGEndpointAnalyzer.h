//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject
{
    id <CSSPGEndpointAnalyzerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b13a2
@property(nonatomic) __weak id <CSSPGEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getFrameDurationMs;	// IMP=0x00100000000b1373
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00100000000b136d
- (void)reset;	// IMP=0x00100000000b1367
- (void)stop;	// IMP=0x00100000000b1361
- (void)start;	// IMP=0x00100000000b135b
- (id)initWithAnalyzeMode;	// IMP=0x00100000000b134d
- (id)initWithEndpointThreshold:(float)arg1;	// IMP=0x00100000000b133f

@end

