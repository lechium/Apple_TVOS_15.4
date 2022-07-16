//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzerCreating-Protocol.h>
#import <SoundAnalysis/SNRequest-Protocol.h>

@class AVAudioFile, NSString;

@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest>
{
    AVAudioFile *_referenceAudioFile;	// 8 = 0x8
    double _overlapFactor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000151f0
- (id)createAnalyzerWithError:(id *)arg1;	// IMP=0x00000000000150d9
@property double overlapFactor; // @synthesize overlapFactor=_overlapFactor;
- (id)initWithAudioFile:(id)arg1;	// IMP=0x0000000000014f00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

