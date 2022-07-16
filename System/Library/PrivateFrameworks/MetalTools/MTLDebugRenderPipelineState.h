//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState
{
    unsigned long long _maxVertexCount;	// 40 = 0x28
    unsigned long long _maxInstanceCount;	// 48 = 0x30
    unsigned long long _maxPatchCount;	// 56 = 0x38
    unsigned long long _rasterSampleCount;	// 64 = 0x40
    unsigned long long _colorPixelFormat[8];	// 72 = 0x48
    unsigned long long _depthPixelFormat;	// 136 = 0x88
    unsigned long long _stencilPixelFormat;	// 144 = 0x90
    unsigned long long _vertexDescriptorLayoutCount;	// 152 = 0x98
    struct {
        unsigned long long bufferIndex;
        unsigned long long bufferStride;
    } _vertexDescriptorLayouts[31];	// 160 = 0xa0
    _Bool _threadgroupSizeMatchesTileSize;	// 656 = 0x290
    unsigned long long _attachmentWriteMask;	// 664 = 0x298
    MTLRenderPipelineDescriptor *_descriptor;	// 672 = 0x2a0
    MTLRenderPipelineReflection *_reflection;	// 680 = 0x2a8
    MTLTileRenderPipelineDescriptor *_tileDescriptor;	// 688 = 0x2b0
}

@property(readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long attachmentWriteMask; // @synthesize attachmentWriteMask=_attachmentWriteMask;
- (id)getParameter:(id)arg1;	// IMP=0x000000000008680d
- (id)description;	// IMP=0x00000000000867f9
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000086770
- (void)_updateCachedPipelineState;	// IMP=0x000000000008638f
@property(readonly, nonatomic) _Bool rasterizationEnabled;
- (void)dealloc;	// IMP=0x00000000000862f3
- (_Bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;	// IMP=0x0000000000086227
- (id)outputImageBlockData;	// IMP=0x0000000000086175
- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(_Bool)arg2;	// IMP=0x000000000008606c
- (void)_updateCachedTilePipelineState;	// IMP=0x0000000000085fc2
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;	// IMP=0x0000000000085f0d
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;	// IMP=0x0000000000085e40

@end

