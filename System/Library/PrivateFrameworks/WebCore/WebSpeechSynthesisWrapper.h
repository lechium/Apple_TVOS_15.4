//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebCore/AVSpeechSynthesizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate>
{
    void *m_synthesizerObject;	// 8 = 0x8
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> m_utterance;	// 16 = 0x10
    struct RetainPtr<AVSpeechSynthesizer> m_synthesizer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000122ed0
- (void).cxx_destruct;	// IMP=0x0000000000122e10
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;	// IMP=0x0000000000122de0
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;	// IMP=0x0000000000122c30
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;	// IMP=0x0000000000122c00
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;	// IMP=0x0000000000122bd0
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;	// IMP=0x0000000000122a20
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;	// IMP=0x0000000000122a00
- (void)cancel;	// IMP=0x00000000001229a0
- (void)resetState;	// IMP=0x00000000001228f0
- (void)resume;	// IMP=0x0000000000122890
- (void)pause;	// IMP=0x0000000000122830
- (void)speakUtterance:(void *)arg1;	// IMP=0x0000000000122550
- (float)mapSpeechRateToPlatformRate:(float)arg1;	// IMP=0x0000000000122450
- (id)initWithSpeechSynthesizer:(void *)arg1;	// IMP=0x0000000000122400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

