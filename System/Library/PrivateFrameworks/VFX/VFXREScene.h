//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, _TtC3VFX8VFXScene;

@interface VFXREScene : NSObject
{
    MISSING_TYPE *scene;	// 8 = 0x8
    MISSING_TYPE *effect;	// 16 = 0x10
    MISSING_TYPE *transientDrawCall;	// 24 = 0x18
    MISSING_TYPE *rootEntity;	// 32 = 0x20
    MISSING_TYPE *cameraEntity;	// 44 = 0x2c
    MISSING_TYPE *device;	// 56 = 0x38
    MISSING_TYPE *cancellables;	// 64 = 0x40
    MISSING_TYPE *uuid;	// 72 = 0x48
    MISSING_TYPE *reloadBlock;	// 80 = 0x50
    MISSING_TYPE *remappingTable;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000006ed0
- (id)init;	// IMP=0x0000000000006e90
@property(nonatomic, readonly) _Bool needsCollisionPlanes;
- (void)removeCollisionPlaneWithId:(long long)arg1;	// IMP=0x0000000000006d10
- (void)updateCollisionPlaneWithId:(long long)arg1 center:(CDStruct_f1db2b5e)arg2 extents:transform: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000006bb0
- (long long)addCollisionPlaneWithCenter:(CDStruct_f1db2b5e)arg1 extents:transform: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000068c0
- (void)setREMeshDataBinding:(id)arg1 positionData:(id)arg2 normalData:(id)arg3 colorData:(id)arg4;	// IMP=0x0000000000006670
- (id)createREMeshDataBinding;	// IMP=0x00000000000065a0
- (id)getREMeshAssetPath:(id)arg1;	// IMP=0x00000000000064f0
- (id)REMeshAssetBindings;	// IMP=0x0000000000006400
- (void)setCameraEntityTransformProjection::::::: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000005d70
- (void)setRootEntityTransform::: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000005be0
- (CDUnknownBlockType)recycleBuffersGetCompletion;	// IMP=0x0000000000005740
- (void)tickWithDeltaTime:(double)arg1;	// IMP=0x00000000000055e0
- (void)tick;	// IMP=0x00000000000054d0
- (void)copyBindingValueWithObjectName:(id)arg1 bindingName:(id)arg2 action:(long long)arg3 storageGetterBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000052c0
- (void)clear;	// IMP=0x0000000000004b00
- (id)neededModelsAndReturnError:(id *)arg1;	// IMP=0x0000000000004a60
- (id)generateMaterialsAndReturnError:(id *)arg1;	// IMP=0x00000000000047c0
- (id)initWithDevice:(id)arg1 contentsOf:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004180
- (id)initWithDevice:(id)arg1 model:(id)arg2;	// IMP=0x0000000000003150
- (id)initWithDevice:(id)arg1 model:(id)arg2 options:(id)arg3;	// IMP=0x0000000000003040
@property(nonatomic, readonly) float deltaTime;
@property(nonatomic, readonly) void *opaqueECS;
@property(nonatomic, copy) CDUnknownBlockType reloadBlock;
@property(nonatomic) long long uuid; // @synthesize uuid;
@property(nonatomic, retain) id transientDrawCall; // @synthesize transientDrawCall;
@property(nonatomic, retain) _TtC3VFX8VFXScene *scene; // @synthesize scene;

@end

