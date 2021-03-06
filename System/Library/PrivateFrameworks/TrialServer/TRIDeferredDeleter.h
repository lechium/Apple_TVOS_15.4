//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TRIDeferredDeleter : NSObject
{
    NSString *_rootDir;	// 8 = 0x8
}

+ (_Bool)_removeDeferredDeletedItemWithLink:(id)arg1 externalReferenceStore:(id)arg2 wasDeleted:(_Bool *)arg3;	// IMP=0x00000000000a9d6f
+ (_Bool)_createSymlinkIfNonExistentAtPath:(id)arg1 withDestinationPath:(id)arg2;	// IMP=0x00000000000a9139
- (void).cxx_destruct;	// IMP=0x00000000000aa06a
- (id)_deferredDeletedLinksDir;	// IMP=0x00000000000aa021
- (id)_linkPathForDeferredDeletedItemAtPath:(id)arg1;	// IMP=0x00000000000a9f9e
- (id)_collectRelativeLinkPathsWithLinksDirLockWitness:(const struct TRIFlockWitness_ *)arg1;	// IMP=0x00000000000a9aab
- (_Bool)_cleanupWithLinksDirLockWitness:(const struct TRIFlockWitness_ *)arg1 externalReferenceStore:(id)arg2;	// IMP=0x00000000000a9884
- (_Bool)collectGarbageWithRootDirLockWitness:(const struct TRIFlockWitness_ *)arg1 externalReferenceStore:(id)arg2;	// IMP=0x00000000000a93b0
- (_Bool)unmarkItemAtRelativePath:(id)arg1;	// IMP=0x00000000000a9215
- (_Bool)markItemAtRelativePath:(id)arg1;	// IMP=0x00000000000a8f55
- (id)initForRootDir:(id)arg1;	// IMP=0x00000000000a8eda

@end

