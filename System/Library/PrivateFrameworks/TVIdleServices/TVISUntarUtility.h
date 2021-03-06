//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVISUntarUtility : NSObject
{
}

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000006050
+ (void)_cleanupReadArchive:(struct archive **)arg1 writeArchive:(struct archive **)arg2;	// IMP=0x0000000000006010
+ (_Bool)_writeFinishEntryOnArchive:(struct archive **)arg1 error:(id *)arg2;	// IMP=0x0000000000005e70
+ (_Bool)_writeDataToDiskFromArchive:(struct archive **)arg1 usingWriteArchive:(struct archive **)arg2 error:(id *)arg3;	// IMP=0x0000000000005bd0
+ (_Bool)_writeHeaderToArchive:(struct archive **)arg1 withEntry:(struct archive_entry **)arg2 usingDestination:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000059b0
+ (void)_setFileDestinationPath:(id)arg1 forEntry:(struct archive_entry **)arg2;	// IMP=0x00000000000058b0
+ (unsigned long long)_readNextHeaderInArchive:(struct archive **)arg1 toEntry:(struct archive_entry **)arg2 error:(id *)arg3;	// IMP=0x0000000000005740
+ (void)_setupWriteArchive:(struct archive **)arg1 withOptions:(int)arg2;	// IMP=0x00000000000056f0
+ (_Bool)_readFile:(id)arg1 toArchive:(struct archive **)arg2 error:(id *)arg3;	// IMP=0x00000000000054c0
+ (_Bool)deflateArchive:(id)arg1 toDestination:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000005150

@end

