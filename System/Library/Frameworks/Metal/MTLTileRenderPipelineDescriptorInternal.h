//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;	// 16 = 0x10
}

- (id)newSerializedTileDataWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000002fb7
- (void)validateWithDevice:(id)arg1;	// IMP=0x0000000000002f81
- (_Bool)validateWithDevice:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002a23
- (id)colorAttachments;	// IMP=0x0000000000002a12
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002821
- (unsigned long long)hash;	// IMP=0x000000000000268f
- (void)setInsertLibraries:(id)arg1;	// IMP=0x0000000000002671
- (id)insertLibraries;	// IMP=0x000000000000265f
- (void)setPreloadedLibraries:(id)arg1;	// IMP=0x0000000000002618
- (id)preloadedLibraries;	// IMP=0x0000000000002606
- (void)setLinkedFunctions:(id)arg1;	// IMP=0x0000000000002574
- (id)linkedFunctions;	// IMP=0x0000000000002525
- (id)binaryArchives;	// IMP=0x0000000000002513
- (void)setBinaryArchives:(id)arg1;	// IMP=0x00000000000024cc
- (long long)textureWriteRoundingMode;	// IMP=0x00000000000024ba
- (void)setTextureWriteRoundingMode:(long long)arg1;	// IMP=0x00000000000024a8
- (unsigned long long)maxTotalThreadsPerThreadgroup;	// IMP=0x0000000000002496
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;	// IMP=0x000000000000244a
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;	// IMP=0x000000000000243a
- (_Bool)threadgroupSizeMatchesTileSize;	// IMP=0x0000000000002429
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;	// IMP=0x0000000000002418
- (id)tileFunction;	// IMP=0x0000000000002406
- (void)setTileFunction:(id)arg1;	// IMP=0x000000000000237c
- (void)setLabel:(id)arg1;	// IMP=0x00000000000022dd
- (id)label;	// IMP=0x00000000000022cb
- (void)reset;	// IMP=0x00000000000021da
- (id)tileBuffers;	// IMP=0x00000000000021c8
- (void)setColorSampleCount:(unsigned long long)arg1;	// IMP=0x00000000000021b6
- (unsigned long long)colorSampleCount;	// IMP=0x00000000000021a4
- (void)setPluginData:(id)arg1;	// IMP=0x0000000000002164
- (id)pluginData;	// IMP=0x0000000000002152
- (void)setRasterSampleCount:(unsigned long long)arg1;	// IMP=0x0000000000002140
- (unsigned long long)rasterSampleCount;	// IMP=0x000000000000212e
- (void)setSampleCount:(unsigned long long)arg1;	// IMP=0x000000000000211c
- (unsigned long long)sampleCount;	// IMP=0x000000000000210a
- (id)description;	// IMP=0x00000000000020f6
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000001b72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000019d9
- (void)dealloc;	// IMP=0x0000000000001953
- (id)init;	// IMP=0x00000000000018a4

@end

