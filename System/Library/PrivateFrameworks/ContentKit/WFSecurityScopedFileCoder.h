//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WFSecurityScopedFileCoder
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e6993
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e6b7f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e6b79
- (id)sharedTemporaryDirectory;	// IMP=0x00000000000e6b60
- (id)sharedDirectory;	// IMP=0x00000000000e6b58
- (void)waitForFileAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e6b4d
- (id)decodeFileWithCoder:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool *)arg2 fileIsSecurityScoped:(_Bool *)arg3;	// IMP=0x00000000000e6a6f
- (void)archiveFileAtURL:(id)arg1 fileShouldBeDeletedOnDeallocation:(_Bool)arg2 withCoder:(id)arg3;	// IMP=0x00000000000e699b

@end

