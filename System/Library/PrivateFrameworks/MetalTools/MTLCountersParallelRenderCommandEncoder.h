//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassDescriptor;

@interface MTLCountersParallelRenderCommandEncoder
{
    MTLRenderPassDescriptor *_descriptor;	// 40 = 0x28
}

- (void)endEncoding;	// IMP=0x0000000000036fcc
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000036f9b
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x0000000000036f6a
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000036f2a
- (id)renderCommandEncoder;	// IMP=0x0000000000036e8f
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x0000000000036dda
- (void)dealloc;	// IMP=0x0000000000036d98
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;	// IMP=0x0000000000036d3a

@end
