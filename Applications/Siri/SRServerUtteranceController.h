//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUIAceObjectViewController.h>

@class NSString, SRServerUtteranceView;

@interface SRServerUtteranceController : SiriUIAceObjectViewController
{
    SRServerUtteranceView *_utteranceView;	// 8 = 0x8
    NSString *_utterance;	// 16 = 0x10
    NSString *_utterancePrefix;	// 24 = 0x18
    _Bool _isTip;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000005f4fd
- (double)_insertionAnimatedZPosition;	// IMP=0x001000000005f4e4
- (long long)_replacementAnimation;	// IMP=0x001000000005f4d9
- (long long)_insertionAnimation;	// IMP=0x001000000005f4ce
- (long long)_pinAnimationType;	// IMP=0x001000000005f4c3
- (_Bool)_shouldSkipAnimationsInAlternateSpeeds;	// IMP=0x001000000005f4bb
- (double)_scaledTopPadding;	// IMP=0x001000000005f45c
- (double)_extendedTopPadding;	// IMP=0x001000000005f3c0
- (double)baselineOffsetFromBottom;	// IMP=0x001000000005f3a3
- (double)desiredTopPaddingBelowController:(id)arg1;	// IMP=0x001000000005f278
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x001000000005f216
- (id)description;	// IMP=0x001000000005f197
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000005f0a7
- (void)loadView;	// IMP=0x001000000005edd8
- (void)_loadFromObject:(id)arg1;	// IMP=0x001000000005ebc2
- (void)setAceObject:(id)arg1;	// IMP=0x001000000005eb2c

@end

