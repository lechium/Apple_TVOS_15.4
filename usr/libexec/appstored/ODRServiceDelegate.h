//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ODRServiceDelegate : NSObject
{
    NSString *_libraryPath;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSString *_legacyDatabasePath;	// 24 = 0x18
    NSString *_assetPacksPath;	// 32 = 0x20
}

+ (id)sharedDelegate;	// IMP=0x002000000022cf94
- (void).cxx_destruct;	// IMP=0x002000000022df2f
@property(retain, nonatomic) NSString *assetPacksPath; // @synthesize assetPacksPath=_assetPacksPath;
@property(retain, nonatomic) NSString *legacyDatabasePath; // @synthesize legacyDatabasePath=_legacyDatabasePath;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (void)syncApplicationTask:(CDUnknownBlockType)arg1;	// IMP=0x001000000022dde4
- (id)_applicationTaskLock;	// IMP=0x001000000022dd8f
- (_Bool)isAssetPacksDirectoryEmpty;	// IMP=0x001000000022dcad
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000022dbfc
- (_Bool)ensureAllLibraryPathsExist:(_Bool *)arg1;	// IMP=0x001000000022d5d9
- (id)baseURLForODRContent;	// IMP=0x001000000022d3c0
- (id)sentinelFileURL;	// IMP=0x001000000022d2dd
- (id)systemContainerURL;	// IMP=0x001000000022d140
@property(readonly, nonatomic) _Bool isDeviceInEduMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

