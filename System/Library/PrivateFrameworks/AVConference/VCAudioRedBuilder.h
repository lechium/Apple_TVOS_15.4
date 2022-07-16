//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface VCAudioRedBuilder : NSObject
{
    int _redPayloadType;	// 8 = 0x8
    unsigned int _sampleRate;	// 12 = 0xc
    unsigned int _samplesPerFrame;	// 16 = 0x10
    unsigned int _numPayloads;	// 20 = 0x14
    unsigned int _maxDelay;	// 24 = 0x18
    _Bool _includeSequenceOffset;	// 28 = 0x1c
    struct tagVCAudioRedPayload _latestPrimaryPayload;	// 32 = 0x20
    NSPointerArray *_selectedRedPayloads;	// 64 = 0x40
    struct tagVCAudioRedPayload _redPayloadToSend;	// 72 = 0x48
    unsigned char _redPayloadBufferToSend[1472];	// 104 = 0x68
    struct tagVCAudioRedPayload _payloadHistory[9];	// 1576 = 0x628
    unsigned int _payloadHistoryCount;	// 1864 = 0x748
    char *_payloadBufferHistory;	// 1872 = 0x750
    int _payloadBufferHistoryIndex;	// 1880 = 0x758
}

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;	// IMP=0x00000000000d7e7d
@property(readonly, nonatomic) int redPayloadType; // @synthesize redPayloadType=_redPayloadType;
@property(nonatomic) unsigned int numPayloads; // @synthesize numPayloads=_numPayloads;
@property(nonatomic) unsigned int maxDelay; // @synthesize maxDelay=_maxDelay;
- (struct tagVCAudioRedPayload *)getPrimaryPayloadWithBuffer:(char *)arg1 length:(int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4 priority:(unsigned char)arg5;	// IMP=0x00000000000d7e8f
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(_Bool)arg6;	// IMP=0x00000000000d7d4a
- (void)dealloc;	// IMP=0x00000000000d7cd0
- (void)updatePayloadHistory:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x00000000000d7865
- (struct tagVCAudioRedPayload *)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x00000000000d7804
- (id)payloadHistoryDescription;	// IMP=0x00000000000d772b
- (id)redundantPayloadsDescription:(id)arg1;	// IMP=0x00000000000d764d
- (id)redPayloadDescription:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x00000000000d75e1
- (_Bool)redundantPayloads:(id)arg1 containsPointer:(void *)arg2;	// IMP=0x00000000000d7564
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x00000000000d6db9
- (struct tagVCAudioRedPayload *)nearestRedPayloadForTimestamp:(unsigned int)arg1;	// IMP=0x00000000000d6b03
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload *)arg1;	// IMP=0x00000000000d6ae8
- (_Bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload *)arg1 forTimestamp:(unsigned int)arg2;	// IMP=0x00000000000d699d
- (unsigned int)timestampOffsetForBlocks:(int)arg1;	// IMP=0x00000000000d6991
- (struct tagVCAudioRedPayload *)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload *)arg1 redPayloads:(id)arg2;	// IMP=0x00000000000d61d7

@end

