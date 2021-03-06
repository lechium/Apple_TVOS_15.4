//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;

@interface VSSpeechSynthesisCallbackResult : NSObject
{
    struct vector<unsigned char, std::allocator<unsigned char>> _samples;	// 8 = 0x8
    struct vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> _markers;	// 32 = 0x20
    struct vector<std::string, std::allocator<std::string>> _phonemeBuffer;	// 56 = 0x38
    _Bool _neuralDidFallback;	// 80 = 0x50
    _Bool _hasAlignmentStall;	// 81 = 0x51
    _Bool _hasAudioClick;	// 82 = 0x52
    long long _state;	// 88 = 0x58
    NSError *_error;	// 96 = 0x60
    unsigned long long _numOfPromptsTriggered;	// 104 = 0x68
    NSString *_text;	// 112 = 0x70
    long long _stopMark;	// 120 = 0x78
    CDUnknownBlockType _callback;	// 128 = 0x80
    NSMutableArray *_wordTimings;	// 136 = 0x88
    unsigned long long _samplesProcessed;	// 144 = 0x90
    unsigned long long _lastUTF8Offset;	// 152 = 0x98
    unsigned long long _lastUTF16Offset;	// 160 = 0xa0
    struct AudioStreamBasicDescription _asbd;	// 168 = 0xa8
}

- (id).cxx_construct;	// IMP=0x000000000001753c
- (void).cxx_destruct;	// IMP=0x00000000000174d0
@property(nonatomic) unsigned long long lastUTF16Offset; // @synthesize lastUTF16Offset=_lastUTF16Offset;
@property(nonatomic) unsigned long long lastUTF8Offset; // @synthesize lastUTF8Offset=_lastUTF8Offset;
@property(nonatomic) unsigned long long samplesProcessed; // @synthesize samplesProcessed=_samplesProcessed;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(retain, nonatomic) NSMutableArray *wordTimings; // @synthesize wordTimings=_wordTimings;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) long long stopMark; // @synthesize stopMark=_stopMark;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool hasAudioClick; // @synthesize hasAudioClick=_hasAudioClick;
@property(nonatomic) _Bool hasAlignmentStall; // @synthesize hasAlignmentStall=_hasAlignmentStall;
@property(nonatomic) _Bool neuralDidFallback; // @synthesize neuralDidFallback=_neuralDidFallback;
@property(nonatomic) unsigned long long numOfPromptsTriggered; // @synthesize numOfPromptsTriggered=_numOfPromptsTriggered;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)phonemes;	// IMP=0x000000000001727b
- (void *)phonemeBuffer;	// IMP=0x0000000000017271
- (id)wordTimingInfos;	// IMP=0x0000000000017260
- (void)processMarkerBuffer;	// IMP=0x0000000000017080
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)arg1;	// IMP=0x0000000000016f5d
- (unsigned long long)utf8BytesForChar:(unsigned short)arg1;	// IMP=0x0000000000016f26
- (void *)markerBuffer;	// IMP=0x0000000000016f1c
- (void *)sampleBuffer;	// IMP=0x0000000000016f12
- (id)mutablePCMData;	// IMP=0x0000000000016ee8
- (id)pcmData;	// IMP=0x0000000000016ebe
- (int)synthesisCallback:(int)arg1;	// IMP=0x0000000000016bde
- (id)initWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016b21

@end

