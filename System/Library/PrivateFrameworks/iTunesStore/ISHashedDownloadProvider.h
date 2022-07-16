//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/NSCopying-Protocol.h>

@class ISHashError, NSArray, NSString;

@interface ISHashedDownloadProvider <NSCopying>
{
    int _fileDescriptor;	// 80 = 0x50
    NSArray *_hashes;	// 88 = 0x58
    ISHashError *_lastHashError;	// 96 = 0x60
    NSString *_localFilePath;	// 104 = 0x68
    struct CC_MD5state_st _md5Context;	// 112 = 0x70
    long long _numberOfBytesToHash;	// 208 = 0xd0
    _Bool _shouldResumeFromLocalBytes;	// 216 = 0xd8
    long long _totalBytesWritten;	// 224 = 0xe0
    long long _validatedBytes;	// 232 = 0xe8
}

@property long long validatedBytes; // @synthesize validatedBytes=_validatedBytes;
@property long long streamedBytes; // @synthesize streamedBytes=_totalBytesWritten;
@property _Bool shouldResumeFromLocalBytes; // @synthesize shouldResumeFromLocalBytes=_shouldResumeFromLocalBytes;
@property long long numberOfBytesToHash; // @synthesize numberOfBytesToHash=_numberOfBytesToHash;
@property(retain) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(copy) ISHashError *lastHashError; // @synthesize lastHashError=_lastHashError;
@property(retain) NSArray *hashes; // @synthesize hashes=_hashes;
- (_Bool)_writeDataWithoutHashing:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000003bc1a
- (_Bool)_writeDataWithHashing:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000003b899
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)arg1;	// IMP=0x000000000003b774
- (_Bool)_truncateToSize:(long long)arg1;	// IMP=0x000000000003b713
- (_Bool)_openFile;	// IMP=0x000000000003b621
- (void)_closeFile;	// IMP=0x000000000003b5f5
- (_Bool)_checkHashForByteCount:(long long)arg1;	// IMP=0x000000000003b2f2
- (void)setup;	// IMP=0x000000000003afe9
- (void)resetStream;	// IMP=0x000000000003af95
- (_Bool)parseData:(id)arg1 returningError:(id *)arg2;	// IMP=0x000000000003ad78
- (_Bool)isStream;	// IMP=0x000000000003ad70
- (id)closeStream;	// IMP=0x000000000003ad32
- (_Bool)canStreamContentLength:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000003a963
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003a8af
- (void)dealloc;	// IMP=0x000000000003a83c
- (id)init;	// IMP=0x000000000003a7d8

@end

