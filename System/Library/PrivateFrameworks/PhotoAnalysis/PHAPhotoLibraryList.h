//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PHAPhotoLibraryList : NSObject
{
    NSMutableDictionary *_photoLibrariesByPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000079d2f
@property(retain) NSMutableDictionary *photoLibrariesByPath; // @synthesize photoLibrariesByPath=_photoLibrariesByPath;
- (void)enumeratePhotoLibrariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000079c78
- (void)removeAllPhotoLibraries;	// IMP=0x0000000000079c2b
- (void)removePhotoLibraryAtURL:(id)arg1;	// IMP=0x0000000000079b51
- (void)addPhotoLibraryAtURL:(id)arg1;	// IMP=0x0000000000079a1a
- (void)saveToPersistentStorage;	// IMP=0x0000000000079768
@property(readonly) unsigned long long count;
- (id)init;	// IMP=0x0000000000079645

@end

