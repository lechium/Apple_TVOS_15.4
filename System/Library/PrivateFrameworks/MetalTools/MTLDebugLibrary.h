//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLCompileOptions, NSArray;

@interface MTLDebugLibrary
{
    unsigned long long _debugType;	// 40 = 0x28
    id _code;	// 48 = 0x30
    MTLCompileOptions *_compileOptions;	// 56 = 0x38
    NSArray *_imageFilterFunctions;	// 64 = 0x40
    CDStruct_dbc1e4aa *_imageFilterFunctionInfo;	// 72 = 0x48
}

@property(readonly, nonatomic) CDStruct_dbc1e4aa *imageFilterFunctionInfo; // @synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo;
@property(readonly, nonatomic) NSArray *imageFilterFunctions; // @synthesize imageFilterFunctions=_imageFilterFunctions;
@property(copy, nonatomic) MTLCompileOptions *compileOptions; // @synthesize compileOptions=_compileOptions;
@property(copy, nonatomic) id code; // @synthesize code=_code;
@property(nonatomic) unsigned long long debugType; // @synthesize debugType=_debugType;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2;	// IMP=0x000000000006760e
- (id)newFunctionWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000674e7
- (void)newFunctionWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006726a
- (id)copyConstantValues:(id)arg1;	// IMP=0x0000000000066f21
- (void)validateDescriptor:(id)arg1 expectedClass:(Class)arg2;	// IMP=0x0000000000066ea8
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000066d88
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000066cc7
- (id)newFunctionWithName:(id)arg1;	// IMP=0x0000000000066b4a
- (void)dealloc;	// IMP=0x0000000000066a4e
- (id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5;	// IMP=0x00000000000669b7

@end

