//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLCompiledModelLoader-Protocol.h>
#import <CoreML/MLSpecificationCompiler-Protocol.h>

@class NSString;

@interface MLPipelineLoader : NSObject <MLCompiledModelLoader, MLSpecificationCompiler>
{
}

+ (id)loadModelFromCompiledArchive:(void *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x000000000011bb35
+ (id)compiledVersionForSpecification:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011bb0c
+ (id)compileSpecification:(void *)arg1 toArchive:(void *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000011ba50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

