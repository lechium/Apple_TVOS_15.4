//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioCompressedBuffer, AVAudioConverter, AVAudioFormat;

@interface VSOpusEncoder : NSObject
{
    CDUnknownBlockType _opusDataHandler;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
    AVAudioFormat *_fromFormat;	// 24 = 0x18
    AVAudioFormat *_toFormat;	// 32 = 0x20
    AVAudioConverter *_converter;	// 40 = 0x28
    AVAudioCompressedBuffer *_outputBuffer;	// 48 = 0x30
    long long _opusDataOffset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000023b9a
@property(nonatomic) long long opusDataOffset; // @synthesize opusDataOffset=_opusDataOffset;
@property(retain, nonatomic) AVAudioCompressedBuffer *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(retain, nonatomic) AVAudioConverter *converter; // @synthesize converter=_converter;
@property(retain, nonatomic) AVAudioFormat *toFormat; // @synthesize toFormat=_toFormat;
@property(retain, nonatomic) AVAudioFormat *fromFormat; // @synthesize fromFormat=_fromFormat;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType opusDataHandler; // @synthesize opusDataHandler=_opusDataHandler;
- (void)endEncoding;	// IMP=0x0000000000023ad5
- (void)encodeChunk:(id)arg1;	// IMP=0x0000000000023614
- (void)beginEncoding;	// IMP=0x00000000000235eb
- (id)initWithSourceASBD:(struct AudioStreamBasicDescription)arg1;	// IMP=0x00000000000233e6

@end

