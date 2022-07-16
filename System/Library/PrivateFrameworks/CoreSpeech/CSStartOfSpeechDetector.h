//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSStartOfSpeechDetectorDelegate;

@interface CSStartOfSpeechDetector : NSObject
{
    id <CSStartOfSpeechDetectorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000eb641
@property(nonatomic) __weak id <CSStartOfSpeechDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endAudio;	// IMP=0x00000000000eb614
- (void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x00000000000eb60e
- (void)resetForNewRequest;	// IMP=0x00000000000eb608
- (id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5;	// IMP=0x00000000000eb577

@end

