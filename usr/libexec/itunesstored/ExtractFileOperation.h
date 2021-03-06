//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface ExtractFileOperation : ISOperation
{
    long long _activeFileBytesCopied;	// 96 = 0x60
    NSString *_activeFilePath;	// 104 = 0x68
    NSString *_destinationFilePath;	// 112 = 0x70
    NSDictionary *_fileAttributes;	// 120 = 0x78
    double _lastSnapshotTime;	// 128 = 0x80
    NSString *_sourceFilePath;	// 136 = 0x88
    int _sourceFileType;	// 144 = 0x90
}

@property int sourceFileType; // @synthesize sourceFileType=_sourceFileType;
@property(retain) NSString *sourceFilePath; // @synthesize sourceFilePath=_sourceFilePath;
@property(copy) NSDictionary *fileAttributes; // @synthesize fileAttributes=_fileAttributes;
@property(retain) NSString *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
- (MISSING_TYPE *)_updateProgressWithByteCount: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000081110
- (_Bool)_performBOMCopy:(id *)arg1;	// IMP=0x001000000008075d
- (id)_newBOMCopierOptions;	// IMP=0x00100000000806f9
- (void)_initializeProgress;	// IMP=0x0010000000080644
- (void)_copierUpdatedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x00100000000805d3
- (void)_copierStartedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x0010000000080570
- (void)_copierFinishedFileWithPath:(const char *)arg1 size:(long long)arg2;	// IMP=0x001000000008053b
- (_Bool)_applyFileAttributesToDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007fc35
- (void)run;	// IMP=0x001000000007fbac
- (void)dealloc;	// IMP=0x001000000007fb46

@end

