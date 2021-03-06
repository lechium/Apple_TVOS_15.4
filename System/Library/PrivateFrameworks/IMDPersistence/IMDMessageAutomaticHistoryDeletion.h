//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IMDMessageAutomaticHistoryDeletion : NSObject
{
}

+ (_Bool)isOlderThanDays:(long long)arg1 fromDate:(id)arg2;	// IMP=0x000000000007d7df
+ (_Bool)isDirCreationDateAtPath:(id)arg1 olderThanDays:(long long)arg2;	// IMP=0x000000000007d6ef
+ (_Bool)isFileHeaderDateAtPath:(id)arg1 olderThanDays:(long long)arg2;	// IMP=0x000000000007d600
+ (_Bool)isFileAtDirPath:(id)arg1 olderThanDays:(long long)arg2;	// IMP=0x000000000007d551
+ (void)deleteDirectoryAtPath:(id)arg1;	// IMP=0x000000000007d4c4
+ (void)deleteSpolightArchivedFiles;	// IMP=0x000000000007d297
+ (void)cleanDatabase;	// IMP=0x000000000007d23a
+ (void)deleteMessagesAndAttachmentsAfterDays:(long long)arg1;	// IMP=0x000000000007d1b5
+ (void)cleanUpOrphanAttachments;	// IMP=0x000000000007d09e
+ (id)_getFilePathNotDSStore:(id)arg1;	// IMP=0x000000000007d9ec
+ (id)_getiChatFileMetadataForPath:(id)arg1;	// IMP=0x000000000007d8f5
+ (id)_getDirSubDirURLsForDirPath:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007d865
+ (id)_getPathAttributesForPath:(id)arg1;	// IMP=0x000000000007d82b

@end

