//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNMTLShaderBindingsGenerator : NSObject
{
    struct os_unfair_lock_s _generateLock;	// 8 = 0x8
    struct {
        int stage;
        NSArray *arguments;
        NSDictionary *customBlocks;
        struct __C3DFXPass *pass;
    } _current;	// 16 = 0x10
    NSMutableDictionary *_nodeBindings;	// 48 = 0x30
    NSMutableDictionary *_frameBindings;	// 56 = 0x38
    NSMutableDictionary *_shadableBindings;	// 64 = 0x40
    NSMutableDictionary *_passBindings;	// 72 = 0x48
    NSMutableDictionary *_lightBindings;	// 80 = 0x50
    CDStruct_21854d8c _sceneBuffer;	// 88 = 0x58
}

+ (void)registerShadableArgumentBindingBlockForBuffers:(CDUnknownBlockType)arg1 textures:(CDUnknownBlockType)arg2 samplers:(CDUnknownBlockType)arg3;	// IMP=0x00000000002706c4
+ (void)registerUserBlockTrampoline:(CDUnknownBlockType)arg1;	// IMP=0x00000000002706af
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000270601
+ (void)registerArgument:(id)arg1 frequency:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000270560
+ (void)registerSemantic:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002704e5
+ (void)deallocateRegistry;	// IMP=0x0000000000270481
+ (void)allocateRegistry;	// IMP=0x00000000002703fe
- (_Bool)addPassResourceBindingsForArgument:(id)arg1;	// IMP=0x0000000000271e1c
- (void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000271b8b
- (void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2;	// IMP=0x0000000000271ac8
- (id)_dictionaryForFrequency:(int)arg1;	// IMP=0x0000000000271aab
- (void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(struct __C3DFXMetalProgram *)arg3 material:(struct __C3DMaterial *)arg4 geometry:(struct __C3DGeometry *)arg5 pass:(struct __C3DFXPass *)arg6;	// IMP=0x00000000002717b8
- (void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3;	// IMP=0x0000000000270b36
- (long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x0000000000270855
- (void)dealloc;	// IMP=0x00000000002707f6
- (id)init;	// IMP=0x0000000000270703

@end

