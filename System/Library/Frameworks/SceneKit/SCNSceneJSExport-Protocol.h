//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/JSExport-Protocol.h>

@class MDLAsset, NSArray, NSDictionary, NSString, NSURL, SCNMaterialProperty, SCNNode, SCNParticleSystem, SCNPhysicsWorld;
@protocol SCNSceneExportDelegate;

@protocol SCNSceneJSExport <JSExport>
+ (id)sceneWithMDLAsset:(MDLAsset *)arg1;
+ (id)sceneWithURL:(NSURL *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
+ (id)sceneNamed:(NSString *)arg1 inDirectory:(NSString *)arg2 options:(NSDictionary *)arg3;
+ (id)sceneNamed:(NSString *)arg1;
+ (id)scene;
@property(nonatomic) double frameRate;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) double screenSpaceReflectionStride;
@property(nonatomic) double screenSpaceReflectionMaximumDistance;
@property(nonatomic) long long screenSpaceReflectionSampleCount;
@property(nonatomic) _Bool wantsScreenSpaceReflection;
@property(retain, nonatomic) id fogColor;
@property(nonatomic) double fogDensityExponent;
@property(nonatomic) double fogEndDistance;
@property(nonatomic) double fogStartDistance;
@property(readonly, nonatomic) SCNMaterialProperty *lightingEnvironment;
@property(readonly, nonatomic) SCNMaterialProperty *background;
@property(readonly, nonatomic) SCNPhysicsWorld *physicsWorld;
@property(readonly, nonatomic) SCNNode *rootNode;
@property(readonly) NSArray *particleSystems;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (_Bool)writeToURL:(NSURL *)arg1 options:(NSDictionary *)arg2 delegate:(id <SCNSceneExportDelegate>)arg3 progressHandler:(void (^)(float, NSError *, _Bool *))arg4;
- (void)setAttribute:(id)arg1 forKey:(NSString *)arg2;
- (id)attributeForKey:(NSString *)arg1;
- (void)removeParticleSystem:(SCNParticleSystem *)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(SCNParticleSystem *)arg1 withTransform:(struct SCNMatrix4)arg2;
@end

