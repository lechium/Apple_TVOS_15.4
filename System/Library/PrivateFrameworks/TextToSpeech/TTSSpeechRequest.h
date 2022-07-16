//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString, NSURL, TTSSpeechChannel;
@protocol TTSSpeechRequestDelegate;

@interface TTSSpeechRequest : NSObject <NSSecureCoding>
{
    id <TTSSpeechRequestDelegate> _delegate;	// 8 = 0x8
    TTSSpeechChannel *_speechChannel;	// 16 = 0x10
    _Bool _maintainsInput;	// 24 = 0x18
    _Bool _supportsAccurateWordCallbacks;	// 25 = 0x19
    _Bool _skipLuthorRules;	// 26 = 0x1a
    _Bool _audioSessionIDIsValid;	// 27 = 0x1b
    _Bool _useMonarchStyleRate;	// 28 = 0x1c
    _Bool _synthesizeSilently;	// 29 = 0x1d
    unsigned int _audioSessionID;	// 32 = 0x20
    unsigned int _audioQueueFlags;	// 36 = 0x24
    NSString *_text;	// 40 = 0x28
    NSAttributedString *_attributedText;	// 48 = 0x30
    NSString *_languageCode;	// 56 = 0x38
    long long _gender;	// 64 = 0x40
    NSURL *_outputPath;	// 72 = 0x48
    double _rate;	// 80 = 0x50
    double _pitch;	// 88 = 0x58
    double _volume;	// 96 = 0x60
    double _latency;	// 104 = 0x68
    double _dispatchTime;	// 112 = 0x70
    double _handledTime;	// 120 = 0x78
    NSArray *_channels;	// 128 = 0x80
    unsigned long long _synthesizerInstanceID;	// 136 = 0x88
    void *_clientContext;	// 144 = 0x90
    CDUnknownBlockType _audioBufferCallback;	// 152 = 0x98
    NSString *_originalString;	// 160 = 0xa0
    NSMutableArray *_originalWordRanges;	// 168 = 0xa8
    NSMutableArray *_processedWordRanges;	// 176 = 0xb0
    NSMutableArray *_replacedWords;	// 184 = 0xb8
    long long _wordRangeCallbacksDispatched;	// 192 = 0xc0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a537
@property(nonatomic) _Bool synthesizeSilently; // @synthesize synthesizeSilently=_synthesizeSilently;
@property(nonatomic) long long wordRangeCallbacksDispatched; // @synthesize wordRangeCallbacksDispatched=_wordRangeCallbacksDispatched;
@property(retain, nonatomic) NSMutableArray *replacedWords; // @synthesize replacedWords=_replacedWords;
@property(retain, nonatomic) NSMutableArray *processedWordRanges; // @synthesize processedWordRanges=_processedWordRanges;
@property(retain, nonatomic) NSMutableArray *originalWordRanges; // @synthesize originalWordRanges=_originalWordRanges;
@property(retain, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
@property(copy, nonatomic) CDUnknownBlockType audioBufferCallback; // @synthesize audioBufferCallback=_audioBufferCallback;
@property(nonatomic) void *clientContext; // @synthesize clientContext=_clientContext;
@property(nonatomic) unsigned long long synthesizerInstanceID; // @synthesize synthesizerInstanceID=_synthesizerInstanceID;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;
@property(nonatomic) _Bool useMonarchStyleRate; // @synthesize useMonarchStyleRate=_useMonarchStyleRate;
@property(nonatomic) double handledTime; // @synthesize handledTime=_handledTime;
@property(nonatomic) double dispatchTime; // @synthesize dispatchTime=_dispatchTime;
@property(nonatomic) double latency; // @synthesize latency=_latency;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) _Bool audioSessionIDIsValid; // @synthesize audioSessionIDIsValid=_audioSessionIDIsValid;
@property(nonatomic) _Bool skipLuthorRules; // @synthesize skipLuthorRules=_skipLuthorRules;
@property(nonatomic) _Bool supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property(nonatomic) _Bool maintainsInput; // @synthesize maintainsInput=_maintainsInput;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSURL *outputPath; // @synthesize outputPath=_outputPath;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TTSSpeechChannel *speechChannel; // @synthesize speechChannel=_speechChannel;
- (void)speechRequestDidSynthesizeSilentlyToURL:(id)arg1 forService:(id)arg2;	// IMP=0x000000000000ab34
- (void)speechRequestDidStopWithSuccess:(_Bool)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4;	// IMP=0x000000000000aad5
- (void)speechRequestMark:(long long)arg1 didStartForRange:(struct _NSRange)arg2 forService:(id)arg3;	// IMP=0x000000000000aa76
- (void)speechRequestDidContinueForService:(id)arg1;	// IMP=0x000000000000aa36
- (void)speechRequestDidPauseForService:(id)arg1;	// IMP=0x000000000000a9f6
- (void)speechRequestDidStartForService:(id)arg1;	// IMP=0x000000000000a9b6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a71e
- (id)initWithSpeechChannel:(id)arg1;	// IMP=0x000000000000a6c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a53f
- (id)description;	// IMP=0x000000000000a44e
- (void)dealloc;	// IMP=0x000000000000a370
- (id)delegate;	// IMP=0x000000000000a366
- (void)setDelegate:(id)arg1;	// IMP=0x000000000000a35c
- (long long)vocalizerGender;	// IMP=0x0000000000007f34
- (long long)vocalizerFootprint;	// IMP=0x0000000000007ebe

@end

