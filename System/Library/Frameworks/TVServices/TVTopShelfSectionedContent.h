//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/BSDescriptionProviding-Protocol.h>
#import <TVServices/NSSecureCoding-Protocol.h>
#import <TVServices/TVTopShelfContent-Protocol.h>
#import <TVServices/TVTopShelfContentPrivate-Protocol.h>

@class NSArray, NSString;

@interface TVTopShelfSectionedContent : NSObject <BSDescriptionProviding, NSSecureCoding, TVTopShelfContentPrivate, TVTopShelfContent>
{
    NSArray *_sections;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a509
+ (struct CGSize)imageSizeForImageShape:(long long)arg1;	// IMP=0x00000000000297e6
+ (id)new;	// IMP=0x00000000000297ce
- (void).cxx_destruct;	// IMP=0x000000000002a6bb
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (unsigned long long)_itemsCount;	// IMP=0x000000000002a511
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a403
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a342
- (id)succinctDescriptionBuilder;	// IMP=0x000000000002a27d
- (id)succinctDescription;	// IMP=0x000000000002a22d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002a1db
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002a156
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a02e
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)_sanitizeAssetURLsWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000029c93
- (void)_updateItemsWithItemUpdates:(id)arg1;	// IMP=0x0000000000029b19
- (void)_removeItemsWithIdentifiers:(id)arg1;	// IMP=0x00000000000298b5
- (id)_deepCopy;	// IMP=0x000000000002983f
@property(readonly, nonatomic) _Bool _hasDisplayableContent;
- (id)init;	// IMP=0x00000000000297a3
- (id)initWithSections:(id)arg1;	// IMP=0x00000000000296f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

