//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileCoordinator, NSURL;

@interface MFAttachmentSecurityScope : NSObject
{
    NSFileCoordinator *_fileCoordinator;	// 8 = 0x8
    NSURL *_securityScopedURL;	// 16 = 0x10
    NSData *_securityScopeToken;	// 24 = 0x18
    NSURL *_secureReadURL;	// 32 = 0x20
    _Bool _securedRead;	// 40 = 0x28
    NSURL *_secureWriteURL;	// 48 = 0x30
    _Bool _securedWrite;	// 56 = 0x38
}

+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;	// IMP=0x00000000000b07bc
+ (id)securityScopedURL:(id)arg1;	// IMP=0x00000000000b0784
- (_Bool)isBundle;	// IMP=0x00000000000b1358
- (_Bool)isReadable;	// IMP=0x00000000000b12e2
- (id)data;	// IMP=0x00000000000b1294
- (void)_attachSecurityScope;	// IMP=0x00000000000b1242
- (id)securityScopeToken;	// IMP=0x00000000000b119d
- (void)stopAccess;	// IMP=0x00000000000b1117
- (void)_removeTemporaryReadURL;	// IMP=0x00000000000b1015
- (id)_temporaryReadURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000b0e82
- (id)startReadAccess;	// IMP=0x00000000000b0b0f
- (id)startWriteAccess;	// IMP=0x00000000000b08df
- (void)dealloc;	// IMP=0x00000000000b0870
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;	// IMP=0x00000000000b07f7

@end

