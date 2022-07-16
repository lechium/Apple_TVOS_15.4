//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BUZipArchive, BUZipEntry;

@interface BUContainedZipArchive
{
    BUZipArchive *_zipArchive;	// 8 = 0x8
    BUZipEntry *_entry;	// 16 = 0x10
}

+ (id)zipArchiveFromEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000002542c
- (void).cxx_destruct;	// IMP=0x0000000000025942
- (_Bool)isValid;	// IMP=0x0000000000025925
- (id)newArchiveReadChannel;	// IMP=0x00000000000258ec
- (unsigned long long)archiveLength;	// IMP=0x00000000000258cf
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;	// IMP=0x000000000002588f
- (id)readChannelForEntry:(id)arg1 validateCRC:(_Bool)arg2;	// IMP=0x000000000002584f
- (id)initWithEntry:(id)arg1 zipArchive:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000002577a

@end
