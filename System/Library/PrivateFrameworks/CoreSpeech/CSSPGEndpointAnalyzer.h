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

- (void).cxx_destruct;	// IMP=0x00000000000d5a41
@property(nonatomic) __weak id <CSSPGEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getFrameDurationMs;	// IMP=0x00000000000d5a12
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000d5a0c
- (void)reset;	// IMP=0x00000000000d5a06
- (void)stop;	// IMP=0x00000000000d5a00
- (void)start;	// IMP=0x00000000000d59fa
- (id)initWithAnalyzeMode;	// IMP=0x00000000000d59ec
- (id)initWithEndpointThreshold:(float)arg1;	// IMP=0x00000000000d59de

@end
