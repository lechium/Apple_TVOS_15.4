//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableIndexSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface PLSimpleDCIMDirectory : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    NSString *_subDirSuffix;	// 16 = 0x10
    unsigned long long _directoryLimit;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
    NSMutableIndexSet *_availableFileNameNumbers;	// 40 = 0x28
    NSURL *_currentSubDirectory;	// 48 = 0x30
    unsigned long long _currentSubDirectoryNumber;	// 56 = 0x38
    NSString *_userInfoPath;	// 64 = 0x40
    _Bool _hasLoadedUserInfo;	// 72 = 0x48
    _Bool _representsCameraRoll;	// 73 = 0x49
    NSObject<OS_dispatch_queue> *_isolation;	// 80 = 0x50
}

+ (id)cloudPlistName;	// IMP=0x0000000000091632
+ (id)cameraRollPlistName;	// IMP=0x0000000000091625
+ (id)migrateOldPlistToNewPlist:(id)arg1;	// IMP=0x000000000009144d
- (void).cxx_destruct;	// IMP=0x0000000000091280
@property(readonly) NSURL *directoryURL; // @synthesize directoryURL=_baseURL;
@property _Bool representsCameraRoll; // @synthesize representsCameraRoll=_representsCameraRoll;
- (void)reset;	// IMP=0x000000000009120d
- (id)nextAvailableFileURLWithExtension:(id)arg1;	// IMP=0x0000000000091047
- (id)init;	// IMP=0x0000000000091039
- (id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4;	// IMP=0x0000000000090dc0
- (_Bool)_ensureDirectoryExists:(id)arg1;	// IMP=0x0000000000092669
- (void)_loadUserInfoLastDirectoryNumber:(id *)arg1 lastFileNumber:(id *)arg2;	// IMP=0x000000000009258b
- (void)_saveUserInfo;	// IMP=0x0000000000092447
- (struct _NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1;	// IMP=0x00000000000923fb
- (id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1;	// IMP=0x0000000000091f67
- (id)subDirURLForNumber:(unsigned long long)arg1 create:(_Bool)arg2 didCreate:(_Bool *)arg3;	// IMP=0x0000000000091df6
@property(readonly, retain, nonatomic) NSURL *currentSubDirectory;

@end
