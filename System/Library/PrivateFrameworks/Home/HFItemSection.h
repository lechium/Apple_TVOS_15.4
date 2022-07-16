//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFDiffableItemGroup-Protocol.h>
#import <Home/NAIdentifiable-Protocol.h>
#import <Home/NSCopying-Protocol.h>
#import <Home/NSMutableCopying-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable>
{
    _Bool _hideAccessoryButton;	// 8 = 0x8
    _Bool _hideHeaderText;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    NSString *_headerTitle;	// 24 = 0x18
    NSString *_headerSecondaryText;	// 32 = 0x20
    NSAttributedString *_attributedHeaderTitle;	// 40 = 0x28
    NSString *_headerAccessoryButtonTitle;	// 48 = 0x30
    id <HFItemSectionAccessoryButtonHeaderDelegate> _headerAccessoryButtonDelegate;	// 56 = 0x38
    NSString *_footerTitle;	// 64 = 0x40
    NSAttributedString *_attributedFooterTitle;	// 72 = 0x48
    NSDictionary *_userInfo;	// 80 = 0x50
    NSArray *_items;	// 88 = 0x58
}

+ (id)filterSections:(id)arg1 toDisplayedItems:(id)arg2;	// IMP=0x000000000009c691
+ (id)na_identity;	// IMP=0x000000000009c4d8
+ (CDUnknownBlockType)itemResultManualSortComparator;	// IMP=0x000000000009c3b4
+ (CDUnknownBlockType)defaultItemComparator;	// IMP=0x000000000009c290
- (void).cxx_destruct;	// IMP=0x000000000009c9f1
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSAttributedString *attributedFooterTitle; // @synthesize attributedFooterTitle=_attributedFooterTitle;
@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(nonatomic) _Bool hideHeaderText; // @synthesize hideHeaderText=_hideHeaderText;
@property(nonatomic) _Bool hideAccessoryButton; // @synthesize hideAccessoryButton=_hideAccessoryButton;
@property(nonatomic) __weak id <HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate; // @synthesize headerAccessoryButtonDelegate=_headerAccessoryButtonDelegate;
@property(copy, nonatomic) NSString *headerAccessoryButtonTitle; // @synthesize headerAccessoryButtonTitle=_headerAccessoryButtonTitle;
@property(copy, nonatomic) NSAttributedString *attributedHeaderTitle; // @synthesize attributedHeaderTitle=_attributedHeaderTitle;
@property(copy, nonatomic) NSString *headerSecondaryText; // @synthesize headerSecondaryText=_headerSecondaryText;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSArray *diffableItems;
@property(readonly, copy, nonatomic) NSString *groupIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009c59c
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009bf24
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009bf07
- (id)_createCopyMutable:(_Bool)arg1;	// IMP=0x000000000009bc8f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000009bb8f
- (id)init;	// IMP=0x000000000009bada

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
