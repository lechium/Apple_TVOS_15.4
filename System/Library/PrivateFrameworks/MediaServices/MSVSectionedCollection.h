//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaServices/NSCopying-Protocol.h>
#import <MediaServices/NSMutableCopying-Protocol.h>
#import <MediaServices/NSObject-Protocol.h>
#import <MediaServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MSVSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSObject>
{
    NSArray *_sectionedItems;	// 8 = 0x8
    NSArray *_sections;	// 16 = 0x10
}

+ (Class)msv_immutableClass;	// IMP=0x0000000000028844
+ (Class)msv_mutableClass;	// IMP=0x0000000000028833
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002882b
- (void).cxx_destruct;	// IMP=0x000000000002795c
- (void)_initializeAsEmptySectionedCollection;	// IMP=0x000000000002791f
- (id)_stateDumpObject;	// IMP=0x00000000000276ae
@property(readonly, nonatomic) long long totalItemCount;
@property(readonly, nonatomic) id lastSection;
- (_Bool)hasSameContentAsSectionedCollection:(id)arg1;	// IMP=0x0000000000027629
- (id)itemsInSectionAtIndex:(long long)arg1;	// IMP=0x0000000000027613
- (id)indexPathForGlobalIndex:(long long)arg1;	// IMP=0x00000000000274fa
- (long long)globalIndexForIndexPath:(id)arg1;	// IMP=0x0000000000027430
@property(readonly, nonatomic) id firstSection;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002733a
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000271a0
- (void)enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002702e
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x0000000000026f84
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x0000000000026f3c
- (id)sectionAtIndex:(long long)arg1;	// IMP=0x0000000000026f26
- (long long)numberOfSections;	// IMP=0x0000000000026f10
- (id)allSections;	// IMP=0x0000000000026ef2
- (id)allItems;	// IMP=0x0000000000026d6f
@property(readonly, nonatomic) id lastItem;
@property(readonly, nonatomic) id firstItem;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026abf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000026ab4
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026594
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000264ba
- (id)init;	// IMP=0x000000000002646e

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
