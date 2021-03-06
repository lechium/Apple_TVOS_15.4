//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLCompiler : NSObject
{
}

+ (id)compiledVersionForModelAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e3bbb
+ (_Bool)canAddMLProgramToCompiledModelAtURL:(id)arg1;	// IMP=0x00000000000e397e
+ (id)addMLProgramToCompiledModelAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e38f4
+ (id)compileModelAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e3785
+ (id)compiledVersionForSpecification:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e3557
+ (id)compiledVersionForSpecificationAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e32f7
+ (id)compileSpecification:(void *)arg1 toArchive:(void *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000e2955
+ (_Bool)fingerprintSpecificationAtURL:(id)arg1 toArchive:(void *)arg2 error:(id *)arg3;	// IMP=0x00000000000e25fe
+ (id)contentsOfDirectoryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e212e
+ (_Bool)storeEncryptionInfoInCompiledArchive:(void *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e1558
+ (_Bool)encryptFileAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e0ceb
+ (id)versionInfo;	// IMP=0x00000000000e0c29
+ (_Bool)encryptCompiledModelAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000e048c
+ (id)_compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 compiledModelName:(id)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000df97b
+ (id)compileSpecificationAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000df944
+ (id)addMLProgramToCompiledModelAtURL:(id)arg1 withCompilationMode:(int)arg2 dryRun:(_Bool)arg3 oarchiveForModelCompilation:(void *)arg4 error:(id *)arg5;	// IMP=0x00000000000e5c50

@end

