//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENArchive : NSObject
{
    struct archive *_archive;	// 8 = 0x8
    struct archive_entry *_entry;	// 16 = 0x10
    struct __sFILE *_fileHandle;	// 24 = 0x18
    _Bool _endOfArchive;	// 32 = 0x20
}

@property(readonly, nonatomic) _Bool endOfArchive; // @synthesize endOfArchive=_endOfArchive;
- (_Bool)skipBytes:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000031aba
- (_Bool)resetToCurrentEntryAndReturnError:(id *)arg1;	// IMP=0x00000000000318e9
- (_Bool)resetAndReturnError:(id *)arg1;	// IMP=0x000000000003186d
- (long long)readDataIntoBuffer:(void *)arg1 maxLength:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000317d9
- (_Bool)readDataIntoBuffer:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000031768
- (_Bool)_checkEntryAndReturnError:(id *)arg1;	// IMP=0x00000000000316f2
- (void)_closeArchive;	// IMP=0x00000000000316ca
- (void)close;	// IMP=0x0000000000031697
- (_Bool)advanceEntryAndReturnError:(id *)arg1;	// IMP=0x000000000003162a
@property(readonly, nonatomic) unsigned short entryFileType;
@property(readonly, copy, nonatomic) NSString *entryPath;
- (void)dealloc;	// IMP=0x0000000000031546
- (_Bool)_openArchiveAndReturnError:(id *)arg1;	// IMP=0x00000000000312a4
- (id)initWithFD:(int)arg1 error:(id *)arg2;	// IMP=0x000000000003118e
- (id)initWithPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000030fe9

@end
