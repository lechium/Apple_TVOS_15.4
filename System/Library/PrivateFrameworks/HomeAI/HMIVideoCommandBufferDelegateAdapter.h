//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoCommandBufferDelegate-Protocol.h>

@class NSString;

@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate>
{
    CDUnknownBlockType _bufferWillHandleSampleBuffer;	// 8 = 0x8
    CDUnknownBlockType _bufferWillFlush;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000bc631
@property(copy) CDUnknownBlockType bufferWillFlush; // @synthesize bufferWillFlush=_bufferWillFlush;
@property(copy) CDUnknownBlockType bufferWillHandleSampleBuffer; // @synthesize bufferWillHandleSampleBuffer=_bufferWillHandleSampleBuffer;
- (void)bufferWillFlush:(id)arg1;	// IMP=0x00000000000bc563
- (void)buffer:(id)arg1 willHandleSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000bc4d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

