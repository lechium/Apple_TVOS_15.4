//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo
{
    PLPhotoLibrary *_photoLibrary;	// 8 = 0x8
    long long _countOfItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000067fe0b
@property(readonly, nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
- (id)photoLibrary;	// IMP=0x000000000067fde9
- (id)captionForItemAtIndex:(long long)arg1;	// IMP=0x000000000067fdc4
- (long long)numberOfItems;	// IMP=0x000000000067fdb2
- (id)albumTitle;	// IMP=0x000000000067fda5
- (id)date;	// IMP=0x000000000067fd8c
- (_Bool)isLoaded;	// IMP=0x000000000067fd84
- (long long)sectionType;	// IMP=0x000000000067fd7c
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000067fcef

@end

