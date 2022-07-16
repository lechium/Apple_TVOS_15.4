//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLDepthStencilDescriptorInternal
{
    struct MTLDepthStencilDescriptorPrivate _private;	// 8 = 0x8
}

- (void)setLabel:(id)arg1;	// IMP=0x00000000000959f7
- (id)label;	// IMP=0x00000000000959e5
- (void)setBackFaceStencil:(id)arg1;	// IMP=0x0000000000095958
- (id)backFaceStencil;	// IMP=0x0000000000095927
- (void)setFrontFaceStencil:(id)arg1;	// IMP=0x000000000009589d
- (id)frontFaceStencil;	// IMP=0x000000000009586e
- (void)setDepthWriteEnabled:(_Bool)arg1;	// IMP=0x000000000009585d
- (_Bool)isDepthWriteEnabled;	// IMP=0x000000000009584c
- (void)setDepthCompareFunction:(unsigned long long)arg1;	// IMP=0x000000000009583a
- (unsigned long long)depthCompareFunction;	// IMP=0x0000000000095828
- (id)description;	// IMP=0x0000000000095814
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000954ba
@property(readonly) const struct MTLDepthStencilDescriptorPrivate *depthStencilPrivate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000953e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000952bd
- (unsigned long long)hash;	// IMP=0x000000000009520f
- (void)dealloc;	// IMP=0x00000000000951b1
- (id)init;	// IMP=0x000000000009515f

@end

