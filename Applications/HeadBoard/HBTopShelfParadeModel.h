//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HBTopShelfPromotionParadeItem, NSArray, NSString;
@protocol HBUITopShelfPromotionParadeItem;

@interface HBTopShelfParadeModel
{
    long long _style;	// 8 = 0x8
    NSArray *_hbItems;	// 16 = 0x10
    HBTopShelfPromotionParadeItem *_hbPromotionItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000033fdf
@property(retain, nonatomic) HBTopShelfPromotionParadeItem *hbPromotionItem; // @synthesize hbPromotionItem=_hbPromotionItem;
@property(copy, nonatomic) NSArray *hbItems; // @synthesize hbItems=_hbItems;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_enumerateAppStoreParadeItemsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000033e9a
- (id)_logSafeDescriptionBuilder;	// IMP=0x0010000000033db7
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000033ca9
@property(readonly, nonatomic) NSArray *contentItems;
@property(readonly, nonatomic) id <HBUITopShelfPromotionParadeItem> promotionItem;
- (void)_removedFromController;	// IMP=0x0010000000033c57
- (void)_addedToController;	// IMP=0x0010000000033c29
- (void)_applyItemUpdates:(id)arg1;	// IMP=0x0010000000033a4a
- (id)initWithApplicationIdentifier:(id)arg1 topShelfCarouselContent:(id)arg2;	// IMP=0x0010000000033638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

