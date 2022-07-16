//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedCollection;

@interface MusicKit_SoftLinking_MPSectionedCollection : NSObject
{
    MPSectionedCollection *_underlyingSectionedCollection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000715f
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000709b
- (void)enumerateSectionIdentifiersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006f35
- (void)enumerateItemIdentifiersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006d71
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000006d5b
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x0000000000006d45
- (long long)numberOfSections;	// IMP=0x0000000000006d2f
- (id)allItems;	// IMP=0x0000000000006d19
- (id)allSections;	// IMP=0x0000000000006d03
@property(readonly, nonatomic) CDUnknownBlockType sectionItemAtIndexPathBlock;
@property(readonly, nonatomic) CDUnknownBlockType itemAtIndexPathBlock;
@property(readonly, nonatomic) MPSectionedCollection *_underlyingSectionedCollection;
- (id)initWithUnderlyingSectionedCollection:(id)arg1;	// IMP=0x0000000000006bbc
- (id)init;	// IMP=0x0000000000006ac8

@end

