//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DEUtils : NSObject
{
}

+ (id)uniqueTemporaryDirectory;	// IMP=0x0000000000012c7b
+ (id)processErrorResponse:(id)arg1;	// IMP=0x0000000000012930
+ (id)findEntriesInDirectory:(id)arg1 createdAfter:(id)arg2 matchingPattern:(id)arg3;	// IMP=0x000000000001245e
+ (void)removeFile:(id)arg1;	// IMP=0x000000000001230e
+ (id)uniqueDateString;	// IMP=0x000000000001227f
+ (id)copyPaths:(id)arg1 toDestinationDir:(id)arg2 withZipName:(id)arg3;	// IMP=0x0000000000012092
+ (id)copyPath:(id)arg1 toDestinationDir:(id)arg2 zipped:(_Bool)arg3;	// IMP=0x00000000000119fa
+ (id)userFileAttributes;	// IMP=0x000000000001192c
+ (id)createUserOwnedDirectoryAtUrl:(id)arg1;	// IMP=0x0000000000011801
+ (id)userLibraryDirectoryForApp:(id)arg1;	// IMP=0x0000000000011681
+ (id)lsDir:(id)arg1;	// IMP=0x000000000001166d
+ (id)lsDir:(id)arg1 sorted:(_Bool)arg2;	// IMP=0x0000000000011273
+ (id)findAllfiles:(id)arg1;	// IMP=0x000000000001125f
+ (id)findAllItems:(id)arg1 includeDirs:(_Bool)arg2;	// IMP=0x0000000000010f03
+ (id)enumeratorForAllItems:(id)arg1;	// IMP=0x0000000000010d1f
+ (id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 keepComponent:(_Bool)arg3;	// IMP=0x0000000000010b3f
+ (_Bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2;	// IMP=0x0000000000010b2a
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2;	// IMP=0x0000000000010838
+ (id)copyAndReturn:(id)arg1 toDir:(id)arg2 withNewFileName:(id)arg3;	// IMP=0x0000000000010560
+ (_Bool)copyFile:(id)arg1 toDir:(id)arg2;	// IMP=0x0000000000010535
+ (id)copyItem:(id)arg1 toDestinationDir:(id)arg2 zipped:(_Bool)arg3;	// IMP=0x0000000000010173
+ (_Bool)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 keepSourceDir:(_Bool)arg3;	// IMP=0x000000000000f8ee
+ (_Bool)isValidDirectory:(id)arg1;	// IMP=0x000000000000f723
+ (id)dirForTarGz:(id)arg1;	// IMP=0x000000000000f65d
+ (id)tarGzForDirectoryUrl:(id)arg1 validatesUrl:(_Bool)arg2;	// IMP=0x000000000000f517
+ (id)tarGzForDirectoryUrl:(id)arg1;	// IMP=0x000000000000f500
+ (void)excludeFromBackup:(id)arg1;	// IMP=0x000000000000f40f
+ (unsigned long long)getDirectorySize:(id)arg1;	// IMP=0x000000000000ecb1
+ (unsigned long long)getFileSystemItemSize:(id)arg1;	// IMP=0x000000000000eabb

@end

