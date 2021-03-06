//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LogDumpUtility : NSObject
{
}

+ (void)removeOldFilesInDefaultLogDumpPath;	// IMP=0x0000000000356fbc
+ (void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2;	// IMP=0x00000000003564a5
+ (id)createFileListSortedByTimestamp:(id)arg1;	// IMP=0x0000000000356053
+ (id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5;	// IMP=0x0000000000355ef9
+ (_Bool)createDirectory:(id)arg1;	// IMP=0x0000000000355edc
+ (id)getDefaultLogDumpPath;	// IMP=0x0000000000355ea3
+ (id)getCachesDirectoryPath;	// IMP=0x0000000000355e82

@end

