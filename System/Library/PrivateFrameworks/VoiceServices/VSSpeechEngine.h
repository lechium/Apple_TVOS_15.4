//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString, VSSpeechSynthesisCallbackResult;

@interface VSSpeechEngine : NSObject
{
    float _rate;	// 8 = 0x8
    float _pitch;	// 12 = 0xc
    float _volume;	// 16 = 0x10
    NSString *_voicePath;	// 24 = 0x18
    unsigned long long _pcmBufferSize;	// 32 = 0x20
    void *_synthesizer;	// 40 = 0x28
    VSSpeechSynthesisCallbackResult *_currentCallbackResult;	// 48 = 0x30
    NSLock *_synthesisLock;	// 56 = 0x38
    struct AudioStreamBasicDescription _asbd;	// 64 = 0x40
}

+ (id)mimeForFileExtension:(id)arg1;	// IMP=0x0000000000019a13
+ (_Bool)hasPhaticResponses:(id)arg1;	// IMP=0x000000000001997e
+ (_Bool)isUserCancelError:(id)arg1;	// IMP=0x00000000000198d0
+ (long long)engineCurrentCompatibility;	// IMP=0x000000000001756d
+ (long long)engineMinimumCompatibility;	// IMP=0x0000000000017560
- (void).cxx_destruct;	// IMP=0x0000000000019b57
@property(retain, nonatomic) NSLock *synthesisLock; // @synthesize synthesisLock=_synthesisLock;
@property(retain, nonatomic) VSSpeechSynthesisCallbackResult *currentCallbackResult; // @synthesize currentCallbackResult=_currentCallbackResult;
@property(nonatomic) void *synthesizer; // @synthesize synthesizer=_synthesizer;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(nonatomic) unsigned long long pcmBufferSize; // @synthesize pcmBufferSize=_pcmBufferSize;
@property(retain, nonatomic) NSString *voicePath; // @synthesize voicePath=_voicePath;
- (void)preheat;	// IMP=0x00000000000197db
- (void)stopAtMarker:(long long)arg1;	// IMP=0x0000000000019724
- (id)synthesizeText:(id)arg1 loggable:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000001894c
- (void)unloadResource:(id)arg1;	// IMP=0x00000000000187e0
- (id)loadResource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001843c
- (id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000018092
- (void)dealloc;	// IMP=0x0000000000017e64
- (_Bool)initializeWithResourcePath:(id)arg1;	// IMP=0x0000000000017a9b
- (id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2;	// IMP=0x000000000001757c

@end
