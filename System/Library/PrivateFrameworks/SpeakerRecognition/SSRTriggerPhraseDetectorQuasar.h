//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _EARSyncSpeechRecognizer;

@interface SSRTriggerPhraseDetectorQuasar : NSObject
{
    _EARSyncSpeechRecognizer *_syncRecognizer;	// 8 = 0x8
    NSString *_locale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019668
- (id)endAudio;	// IMP=0x0000000000019426
- (id)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x0000000000019196
- (void)reset;	// IMP=0x00000000000190d0
- (id)initWithLocale:(id)arg1 configPath:(id)arg2 resourcePath:(id)arg3;	// IMP=0x0000000000018f89

@end

