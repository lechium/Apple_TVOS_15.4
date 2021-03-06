//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface DACPLogDFile : NSObject
{
    NSString *_folder;	// 8 = 0x8
    NSString *_baseName;	// 16 = 0x10
    NSString *_UUID;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
    int _fd;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_fileEventDispatchSource;	// 48 = 0x30
    _Bool _fileWasDeleted;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001c64a
@property(readonly, retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, retain, nonatomic) NSString *baseName; // @synthesize baseName=_baseName;
@property(readonly, retain, nonatomic) NSString *folder; // @synthesize folder=_folder;
- (void)cullFilesMaxFileCount:(long long)arg1;	// IMP=0x000000000001c359
- (void)checkForMaximumFileSize:(long long)arg1 wantsCompressed:(_Bool)arg2 outDidCreateNewFile:(_Bool *)arg3 outNewFilePath:(id *)arg4;	// IMP=0x000000000001bd3e
- (id)startNewFile;	// IMP=0x000000000001bcfa
- (_Bool)logData:(id)arg1 outDidCreateNewFile:(_Bool *)arg2 outNewFilePath:(id *)arg3;	// IMP=0x000000000001bbeb
- (id)_startNewFile;	// IMP=0x000000000001b10f
- (void)_closeFileWithFileEventDispatchSource:(id)arg1;	// IMP=0x000000000001b019
- (void)_beginWatchingFile;	// IMP=0x000000000001ab63
- (void)_openFileOutDidCreateNewFile:(_Bool *)arg1 outNewFilePath:(id *)arg2;	// IMP=0x000000000001a841
- (id)_getLatestMatchingFilePath;	// IMP=0x000000000001a7d0
- (id)_filePathsMatchingPattern:(id)arg1;	// IMP=0x000000000001a5c2
- (id)initWithFolder:(id)arg1 baseName:(id)arg2;	// IMP=0x000000000001a4f8

@end

