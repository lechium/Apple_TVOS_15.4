//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface JSScript : NSObject
{
    struct WeakObjCPtr<JSVirtualMachine> m_virtualMachine;	// 8 = 0x8
    long long m_type;	// 16 = 0x10
    struct MappedFileData m_mappedSource;	// 24 = 0x18
    struct String m_source;	// 40 = 0x28
    struct RetainPtr<NSURL> m_sourceURL;	// 48 = 0x30
    struct RetainPtr<NSURL> m_cachePath;	// 56 = 0x38
    RefPtr_ba104a63 m_cachedBytecode;	// 64 = 0x40
}

+ (id)scriptOfType:(long long)arg1 memoryMappedFromASCIIFile:(id)arg2 withSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;	// IMP=0x00000000002e6dc0
+ (id)scriptOfType:(long long)arg1 withSource:(id)arg2 andSourceURL:(id)arg3 andBytecodeCache:(id)arg4 inVirtualMachine:(id)arg5 error:(out id *)arg6;	// IMP=0x00000000002e66d0
- (id).cxx_construct;	// IMP=0x00000000002e7da0
- (void).cxx_destruct;	// IMP=0x00000000002e7d10
- (long long)type;	// IMP=0x00000000002e7d00
- (id)sourceURL;	// IMP=0x00000000002e7cf0
- (_Bool)isUsingBytecodeCache;	// IMP=0x00000000002e7cd0
- (_Bool)cacheBytecodeWithError:(id *)arg1;	// IMP=0x00000000002e7bb0
- (void)readCache;	// IMP=0x00000000002e74f0
- (_Bool)writeCache:(void *)arg1;	// IMP=0x00000000002e8400
- (void *)jsSourceCode;	// IMP=0x00000000002e82a0
- (struct SourceCode)sourceCode;	// IMP=0x00000000002e7f40
- (RefPtr_ba104a63)cachedBytecode;	// IMP=0x00000000002e7f20
- (const void *)source;	// IMP=0x00000000002e7f10
- (unsigned int)hash;	// IMP=0x00000000002e7ee0
- (id)init;	// IMP=0x00000000002e7dd0

@end
