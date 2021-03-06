//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSFileHandle, NSString;

@interface _HKZipArchiveExtractor : NSObject
{
    NSString *_pathname;	// 8 = 0x8
    NSData *_archiveData;	// 16 = 0x10
    NSFileHandle *_fileHandle;	// 24 = 0x18
    struct archive *_archive;	// 32 = 0x20
    struct archive_entry *_entry;	// 40 = 0x28
    _Bool _dataRead;	// 48 = 0x30
    NSData *_data;	// 56 = 0x38
    NSError *_lastError;	// 64 = 0x40
    _Bool _hasCalculatedNumberOfEntries;	// 72 = 0x48
    unsigned long long _numberOfEntries;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000006c1d8
- (void)_logError:(id)arg1;	// IMP=0x000000000006c15c
- (void)_clearState;	// IMP=0x000000000006c118
- (_Bool)_enumerateLinesInCurrentEntryWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006ba6f
- (_Bool)enumerateLinesInCurrentEntryWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000006b742
- (id)lastError;	// IMP=0x000000000006b734
- (unsigned long long)numberOfEntries;	// IMP=0x000000000006b6bc
- (void)enumerateEntriesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000006b2e6
- (id)getDataForCurrentEntryWithMaxSizeBytes:(unsigned long long)arg1;	// IMP=0x000000000006b109
- (id)getDataForCurrentEntry;	// IMP=0x000000000006b0f5
- (id)_getDataForCurrentEntryWithBufferingWithMaxSizeBytes:(unsigned long long)arg1;	// IMP=0x000000000006aeb2
- (id)_getDataForCurrentEntryWithSize:(unsigned long long)arg1;	// IMP=0x000000000006ac99
- (id)initWithData:(id)arg1;	// IMP=0x000000000006ab09
- (id)initWithFileHandle:(id)arg1 pathname:(id)arg2;	// IMP=0x000000000006a93d
- (id)initWithURL:(id)arg1;	// IMP=0x000000000006a745
- (id)initWithPathname:(id)arg1;	// IMP=0x000000000006a5ea

@end

