//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface USKUtility : NSObject
{
}

+ (id)meshUniqueAndTriangulate:(id)arg1 names:(id)arg2;	// IMP=0x000000000044a1ea
+ (id)meshGroupsWithNode:(id)arg1;	// IMP=0x0000000000449389
+ (id)targetPropertyWithProperty:(id)arg1;	// IMP=0x0000000000449051
+ (id)USDPreviewSurfaceDefaults;	// IMP=0x000000000044839a
+ (id)firstUVMeshAttributeNameInMaterial:(id)arg1;	// IMP=0x000000000044717a
+ (id)textureMaterialPropertiesWithMaterial:(id)arg1;	// IMP=0x0000000000446b89
+ (id)bufferMaterialPropertiesWithMaterial:(id)arg1;	// IMP=0x0000000000446462
+ (id)constantMaterialPropertiesWithMaterial:(id)arg1;	// IMP=0x0000000000445b09
+ (id)shaderNodeType:(id)arg1;	// IMP=0x00000000004440c8
+ (_Bool)isShaderOutputProperty:(id)arg1;	// IMP=0x0000000000443eb7
+ (_Bool)isTransformNode:(id)arg1;	// IMP=0x0000000000443de4
+ (_Bool)isSceneGraphNode:(id)arg1;	// IMP=0x0000000000443cac
+ (id)transformKeyTimesWithNode:(id)arg1;	// IMP=0x0000000000443984
+ (void)setLocalTransformWithNode:(id)arg1 transform:(CDStruct_f1db2b5e)arg2 time:(double)arg3;	// IMP=0x0000000000443687
+ (CDStruct_f1db2b5e)localTransformWithNode:(id)arg1 time:(double)arg2;	// IMP=0x0000000000443470

@end

