//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface MDLVoxelArray
{
    struct unordered_map<unsigned long long, int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, int>>> _voxels;	// 8 = 0x8
    struct {
        MISSING_TYPE *minimumExtent__maximumExtent;
    } _extent;	// 48 = 0x30
    struct MDLAABB _bounds;	// 80 = 0x50
    float _voxelExtent;	// 112 = 0x70
    struct MortonCode mortonCoder;	// 120 = 0x78
    struct unique_ptr<ModelIO::Octree, std::default_delete<ModelIO::Octree>> _octreeData;	// 192 = 0xc0
    _Bool _levelSet;	// 200 = 0xc8
    float _interiorThickness;	// 204 = 0xcc
    float _exteriorThickness;	// 208 = 0xd0
    MISSING_TYPE *_originatingOffset;	// 224 = 0xe0
}

- (id).cxx_construct;	// IMP=0x000000000040093b
- (void).cxx_destruct;	// IMP=0x00000000004008cb
@property(nonatomic) float shellFieldExteriorThickness; // @synthesize shellFieldExteriorThickness=_exteriorThickness;
@property(nonatomic) float shellFieldInteriorThickness; // @synthesize shellFieldInteriorThickness=_interiorThickness;
@property(readonly, nonatomic) struct voxelIndexExtent; // @synthesize voxelIndexExtent=_extent;
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;	// IMP=0x00000000004005b5
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;	// IMP=0x000000000040024f
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorNBWidth:(float)arg3 exteriorNBWidth:(float)arg4 patchRadius:(float)arg5;	// IMP=0x00000000003fff4c
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 interiorShells:(int)arg3 exteriorShells:(int)arg4 patchRadius:(float)arg5;	// IMP=0x00000000003ffbe7
- (vector_1d76f7fb)boxesPerLayer;	// IMP=0x00000000003ffbc0
- (id)coarseVoxelMeshWithStyle:(unsigned long long)arg1;	// IMP=0x00000000003ffb7e
- (id)meshUsingAllocator:(id)arg1;	// IMP=0x00000000003fe9dc
- (id)coarseMesh;	// IMP=0x00000000003fe9c8
- (id)coarseMeshUsingAllocator:(id)arg1;	// IMP=0x00000000003f5b18
- (void)erodeNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2 selector:(SEL)arg3;	// IMP=0x00000000003f591a
- (void)dilateNarrowBandInteriorWidthTo:(float)arg1 AndExteriorWidthTo:(float)arg2;	// IMP=0x00000000003f5844
@property(readonly, nonatomic) _Bool isValidSignedShellField;
- (void)convertToSignedShellField;	// IMP=0x00000000003f552d
- (struct)voxelBoundingBoxAtIndex: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003f54df
- (MISSING_TYPE *)spatialLocationOfIndex: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003f5490
- (MISSING_TYPE *)indexOfSpatialLocation: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003f53fb
@property(readonly, nonatomic) struct boundingBox;
- (void)differenceWithVoxels:(id)arg1;	// IMP=0x00000000003f529b
- (void)intersectWithVoxels:(id)arg1;	// IMP=0x00000000003f515b
- (void)unionWithVoxels:(id)arg1;	// IMP=0x00000000003f5003
- (void)setVoxelsForMesh:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;	// IMP=0x00000000003f4d25
- (void)setVoxelAtIndex: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003f4c20
- (id)voxelIndices;	// IMP=0x00000000003f4ae9
- (id)voxelsWithinExtent:(struct)arg1;	// IMP=0x00000000003f482e
- (_Bool)voxelExistsAtIndex:(_Bool)arg1 allowAnyX:(_Bool)arg2 allowAnyY:(_Bool)arg3 allowAnyZ:(_Bool)arg4 allowAnyShell: /* Error: Ran out of types for this method. */;	// IMP=0x00000000003f4676
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithData:(id)arg1 boundingBox:(struct)arg2 voxelExtent:(float)arg3;	// IMP=0x00000000003f4163
- (id)initWithAsset:(id)arg1 divisions:(int)arg2 patchRadius:(float)arg3;	// IMP=0x00000000003f3d10
- (id)init;	// IMP=0x00000000003f3add
- (void)recalculateExtents;	// IMP=0x00000000003f382f

@end

