//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (IMSharedUtilities)
- (_Bool)__im_makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;	// IMP=0x000000000007a8be
- (_Bool)__im_isPathOnMissingVolume:(id)arg1;	// IMP=0x000000000007a80d
- (_Bool)__im_getItemsRemovedFromiCloudBackupsAtDirectoryPath:(id)arg1 outPaths:(id *)arg2 outRemovedPaths:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000007a4b6
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onDirectoryAndChildrenAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a1ea
- (_Bool)__im_setiCloudBackupAttribute:(_Bool)arg1 onItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007a059
- (_Bool)__im_getiCloudBackupAttributeForItemAtPath:(id)arg1 attributeValue:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0000000000079f35
@end

