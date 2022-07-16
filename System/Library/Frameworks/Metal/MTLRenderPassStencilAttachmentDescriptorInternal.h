//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLRenderPassStencilAttachmentDescriptorInternal
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;	// 8 = 0x8
}

+ (id)attachmentDescriptor;	// IMP=0x000000000007793d
- (const struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;	// IMP=0x0000000000078253
- (void)setStoreActionOptions:(unsigned long long)arg1;	// IMP=0x0000000000078241
- (unsigned long long)storeActionOptions;	// IMP=0x000000000007822f
- (void)setStoreAction:(unsigned long long)arg1;	// IMP=0x000000000007821d
- (unsigned long long)storeAction;	// IMP=0x000000000007820b
- (void)setLoadAction:(unsigned long long)arg1;	// IMP=0x00000000000781f9
- (unsigned long long)loadAction;	// IMP=0x00000000000781e7
- (_Bool)yInvert;	// IMP=0x00000000000781d3
- (void)setYInvert:(_Bool)arg1;	// IMP=0x00000000000781bf
- (unsigned long long)resolveDepthPlane;	// IMP=0x00000000000781aa
- (void)setResolveDepthPlane:(unsigned long long)arg1;	// IMP=0x0000000000078195
- (unsigned long long)resolveSlice;	// IMP=0x0000000000078180
- (void)setResolveSlice:(unsigned long long)arg1;	// IMP=0x000000000007816b
- (unsigned long long)resolveLevel;	// IMP=0x0000000000078159
- (void)setResolveLevel:(unsigned long long)arg1;	// IMP=0x0000000000078147
- (void)setStencilResolveFilter:(unsigned long long)arg1;	// IMP=0x0000000000078135
- (unsigned long long)stencilResolveFilter;	// IMP=0x0000000000078123
- (unsigned int)clearStencil;	// IMP=0x0000000000078112
- (void)setClearStencil:(unsigned int)arg1;	// IMP=0x0000000000078101
- (unsigned long long)depthPlane;	// IMP=0x00000000000780ef
- (void)setDepthPlane:(unsigned long long)arg1;	// IMP=0x00000000000780dd
- (unsigned long long)slice;	// IMP=0x00000000000780cb
- (void)setSlice:(unsigned long long)arg1;	// IMP=0x00000000000780b9
- (unsigned long long)level;	// IMP=0x00000000000780a7
- (void)setLevel:(unsigned long long)arg1;	// IMP=0x0000000000078095
- (id)resolveTexture;	// IMP=0x0000000000078083
- (void)setResolveTexture:(id)arg1;	// IMP=0x0000000000077ff9
- (id)texture;	// IMP=0x0000000000077fe8
- (void)setTexture:(id)arg1;	// IMP=0x0000000000077f60
- (id)description;	// IMP=0x0000000000077f4c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000077b00
- (unsigned long long)hash;	// IMP=0x0000000000077ae7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077a88
- (void)dealloc;	// IMP=0x0000000000077a32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000779d3
- (id)init;	// IMP=0x000000000007794f

@end

