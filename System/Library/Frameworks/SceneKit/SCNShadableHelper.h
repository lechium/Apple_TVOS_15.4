//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, SCNProgram;

__attribute__((visibility("hidden")))
@interface SCNShadableHelper : NSObject <NSSecureCoding>
{
    id _owner;	// 8 = 0x8
    SCNProgram *_program;	// 16 = 0x10
    NSDictionary *_shaderModifiers;	// 24 = 0x18
    NSArray *_c3dShaderModifierCache;	// 32 = 0x20
    NSNumber *_minimumLanguageVersion;	// 40 = 0x28
    NSMutableArray *_argumentsNames;	// 48 = 0x30
    NSDictionary *_symbolToBinder;	// 56 = 0x38
    NSDictionary *_symbolToUnbinder;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002e9eff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e9d34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002e9cb1
- (void)_didDecodeSCNShadableHelper:(id)arg1;	// IMP=0x00000000002e9cab
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;	// IMP=0x00000000002e9c76
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;	// IMP=0x00000000002e9c4c
- (const void *)__CFObject;	// IMP=0x00000000002e9c36
- (void)_setC3DProgram;	// IMP=0x00000000002e9866
- (void)_setC3DProgramDelegate;	// IMP=0x00000000002e95cb
- (void)_updateAllC3DProgramInputs;	// IMP=0x00000000002e946d
- (void)_updateC3DProgramInputForSymbol:(id)arg1;	// IMP=0x00000000002e942d
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg1 forSymbol:(id)arg2;	// IMP=0x00000000002e923c
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(long long)arg1;	// IMP=0x00000000002e907e
- (struct __C3DFXTechnique *)_technique;	// IMP=0x00000000002e9057
- (void)_programDidChange:(id)arg1;	// IMP=0x00000000002e8f0d
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e8ec3
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e8e79
@property(retain, nonatomic) NSNumber *minimumLanguageVersion;
- (void)copyModifiersFrom:(id)arg1;	// IMP=0x00000000002e8c17
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)_parseAndSetShaderModifier:(id)arg1;	// IMP=0x00000000002e87e3
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;	// IMP=0x00000000002e875b
- (_Bool)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;	// IMP=0x00000000002e870c
- (_Bool)isOpaque;	// IMP=0x00000000002e86f6
@property(retain, nonatomic) SCNProgram *program;
- (void)_stopObservingProgram;	// IMP=0x00000000002e8569
- (void)_startObservingProgram;	// IMP=0x00000000002e8510
@property(readonly, nonatomic) id owner;
- (void)dealloc;	// IMP=0x00000000002e8476
@property(readonly, nonatomic) NSArray *shaderModifiersArgumentsNames;
- (void)ownerWillDie;	// IMP=0x00000000002e8433
- (id)initWithOwner:(id)arg1;	// IMP=0x00000000002e83dc
- (void)_commonInit;	// IMP=0x00000000002e839c

@end

