//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPassColorAttachmentDescriptorInternal, MTLRenderPassDepthAttachmentDescriptorInternal, MTLRenderPassStencilAttachmentDescriptorInternal;

__attribute__((visibility("hidden")))
@interface MTLRenderPassColorAttachmentDescriptorArrayInternal
{
    MTLRenderPassColorAttachmentDescriptorInternal *_color_descriptors[8];	// 8 = 0x8
    MTLRenderPassDepthAttachmentDescriptorInternal *_depth_descriptor;	// 72 = 0x48
    MTLRenderPassStencilAttachmentDescriptorInternal *_stencil_descriptor;	// 80 = 0x50
}

- (id)_descriptorAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000078487
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;	// IMP=0x00000000000783c4
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000000078349
- (void)dealloc;	// IMP=0x00000000000782cd

@end

