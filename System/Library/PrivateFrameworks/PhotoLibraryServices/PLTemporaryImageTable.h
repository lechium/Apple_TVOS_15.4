//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol PLThumbPersistenceManager;

@interface PLTemporaryImageTable : NSObject
{
    id <PLThumbPersistenceManager> _imageTable;	// 8 = 0x8
    unsigned long long _nextTableEntryIndex;	// 16 = 0x10
    NSMutableArray *_itemIndexToThumbEntryMapping;	// 24 = 0x18
    NSString *_imageTablePath;	// 32 = 0x20
    unsigned short _imageFormatID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000039c3ce
- (void)dealloc;	// IMP=0x000000000039c37b
- (void)reset;	// IMP=0x000000000039c2e5
- (void)_cleanup;	// IMP=0x000000000039c25d
- (void)removeItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c1a3
- (void)insertItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c128
- (id)imageForItemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039c0b5
- (unsigned long long)_imageTableIndexForItemIndex:(unsigned long long)arg1;	// IMP=0x000000000039c010
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000039be34
- (id)initWithWithPath:(id)arg1 imageFormat:(unsigned short)arg2;	// IMP=0x000000000039bda4
- (void)_positional_setThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;	// IMP=0x000000000039bbe4
- (_Bool)_writeBGRAThumbnailDataForImage:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000039b92c
- (_Bool)_writeCompressedThumbnailDataForImage:(id)arg1 intoTable:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000039b678

@end

