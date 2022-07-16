//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCMomentsHistoryBuffer : NSObject
{
    id _delegate;	// 8 = 0x8
    int _bufferLength;	// 16 = 0x10
    NSMutableArray *_timestampQueue;	// 24 = 0x18
    NSMutableDictionary *_sampleMap;	// 32 = 0x20
    unsigned int _lastTimestamp;	// 40 = 0x28
}

- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;	// IMP=0x00000000000b70a4
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x00000000000b6f9a
- (void)dequeueOneFrame;	// IMP=0x00000000000b6e61
- (id)delegate;	// IMP=0x00000000000b6e53
- (int)getCount;	// IMP=0x00000000000b6e3d
- (void)flushBuffer;	// IMP=0x00000000000b6de9
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;	// IMP=0x00000000000b6b66
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x00000000000b69e1
- (void)dealloc;	// IMP=0x00000000000b695c
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;	// IMP=0x00000000000b6871

@end

