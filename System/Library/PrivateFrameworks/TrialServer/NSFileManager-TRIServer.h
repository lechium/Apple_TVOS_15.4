//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TRIServer)
+ (id)triDiskUsageForDirectory:(id)arg1;	// IMP=0x0000000000114f69
+ (unsigned long long)triCompressedSizeForFileAtPath:(id)arg1 shouldFault:(_Bool *)arg2;	// IMP=0x0000000000114e25
+ (_Bool)triRemoveFileProtectionIfPresentForPath:(id)arg1;	// IMP=0x0000000000114b53
+ (id)triTargetPathForSymlink:(id)arg1;	// IMP=0x00000000001149bb
+ (_Bool)triForceRenameWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x0000000000114899
+ (_Bool)triRenameOrFaultWithSourcePath:(id)arg1 destPath:(id)arg2;	// IMP=0x00000000001147c2
+ (id)triPostOrderDescendantDirectoryPathsAtPath:(id)arg1;	// IMP=0x000000000011421f
- (_Bool)triRemoveCachedANEBinariesForModelsFromPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001147ba
- (_Bool)triRemoveNestedEmptyDirectoriesAtPath:(id)arg1;	// IMP=0x000000000011460f
- (_Bool)triForceRemoveItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000114151
- (_Bool)triRemoveDirectoryForPath:(id)arg1 isDirectory:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000001140ae
@end
