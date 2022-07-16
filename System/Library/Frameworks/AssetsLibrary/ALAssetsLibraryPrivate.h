//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ALAssetsLibrary, NSHashTable, NSMutableDictionary, PLPhotoLibrary;

__attribute__((visibility("hidden")))
@interface ALAssetsLibraryPrivate : NSObject
{
    ALAssetsLibrary *_assetsLibrary;	// 8 = 0x8
    PLPhotoLibrary *_photoLibrary;	// 16 = 0x10
    NSHashTable *_assetGroupInternals;	// 24 = 0x18
    NSMutableDictionary *_groupURLSByAlbumOID;	// 32 = 0x20
    _Bool _isValid;	// 40 = 0x28
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void)dealloc;	// IMP=0x000000000000b35f
- (void)registerAlbum:(id)arg1 assetGroupPrivate:(id)arg2;	// IMP=0x000000000000b28b
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x000000000000a9e4
@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)initWithAssetsLibrary:(id)arg1;	// IMP=0x000000000000a8bd

@end

