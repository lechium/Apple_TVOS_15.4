//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface NSNullFileHandle
{
}

- (CDUnknownBlockType)readabilityHandler;	// IMP=0x000000000005bf39
- (void)setReadabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bf33
- (CDUnknownBlockType)writeabilityHandler;	// IMP=0x000000000005bf2b
- (void)setWriteabilityHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005bf25
- (int)fileDescriptor;	// IMP=0x000000000005bf1a
- (_Bool)closeAndReturnError:(out id *)arg1;	// IMP=0x000000000005bf12
- (void)closeFile;	// IMP=0x000000000005bf0c
- (_Bool)synchronizeAndReturnError:(out id *)arg1;	// IMP=0x000000000005bf04
- (void)synchronizeFile;	// IMP=0x000000000005befe
- (_Bool)truncateAtOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005bef6
- (void)truncateFileAtOffset:(unsigned long long)arg1;	// IMP=0x000000000005bef0
- (_Bool)seekToOffset:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005bee8
- (void)seekToFileOffset:(unsigned long long)arg1;	// IMP=0x000000000005bee2
- (_Bool)seekToEndReturningOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005bece
- (unsigned long long)seekToEndOfFile;	// IMP=0x000000000005bec6
- (_Bool)getOffset:(out unsigned long long *)arg1 error:(out id *)arg2;	// IMP=0x000000000005beb2
- (unsigned long long)offsetInFile;	// IMP=0x000000000005beaa
- (_Bool)writeData:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000005bea2
- (void)writeData:(id)arg1;	// IMP=0x000000000005be9c
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id *)arg2;	// IMP=0x000000000005be83
- (id)readDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000005be6a
- (id)readDataToEndOfFileAndReturnError:(out id *)arg1;	// IMP=0x000000000005be51
- (id)readDataToEndOfFile;	// IMP=0x000000000005be38
- (id)availableData;	// IMP=0x000000000005be1f

@end
