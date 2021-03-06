//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder
{
    unsigned int _unknownStoreActions;	// 36 = 0x24
    struct atomic<unsigned long long> _attachmentWriteMask;	// 40 = 0x28
    MTLRenderPassDescriptor *_descriptor;	// 48 = 0x30
}

@property(readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;	// IMP=0x000000000006931c
- (id)description;	// IMP=0x0000000000069308
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000069272
- (void)endEncoding;	// IMP=0x0000000000068e8d
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000068de9
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000068d45
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000068c5f
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000068bbb
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000068b17
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000068a31
- (id)renderCommandEncoder;	// IMP=0x0000000000068996
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000000000688e1
- (void)mergeAttachmentWriteMask:(unsigned long long)arg1;	// IMP=0x00000000000688cf
- (void)dealloc;	// IMP=0x000000000006888d
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000068782

@end

