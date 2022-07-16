//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNContactHeaderView, NSDictionary, UIColor, UIView;
@protocol ABContactViewDataSource, ABContactViewDelegate;

@interface CNContactView
{
    _Bool _cellsLayoutCachingEnabled;	// 8 = 0x8
    _Bool _shouldUseExpandedContentStyle;	// 9 = 0x9
    _Bool _shouldUseMapTiles;	// 10 = 0xa
    _Bool _needsUpdateVisibleCells;	// 11 = 0xb
    UIView *_customHeaderView;	// 16 = 0x10
    CNContact *_contact;	// 24 = 0x18
    UIColor *_sectionBackgroundColor;	// 32 = 0x20
    UIColor *_selectedCellBackgroundColor;	// 40 = 0x28
    NSDictionary *_labelTextAttributes;	// 48 = 0x30
    NSDictionary *_valueTextAttributes;	// 56 = 0x38
    NSDictionary *_actionTextAttributes;	// 64 = 0x40
    struct CGSize _oldSize;	// 72 = 0x48
    struct UIEdgeInsets _contentMargins;	// 88 = 0x58
}

+ (_Bool)isFixedValueProperty:(id)arg1;	// IMP=0x000000000002a78d
+ (_Bool)isMultiValueProperty:(id)arg1;	// IMP=0x000000000002a631
+ (id)optionalCardProperties;	// IMP=0x000000000002a544
+ (id)defaultCardProperties;	// IMP=0x000000000002a473
+ (id)allCardProperties;	// IMP=0x000000000002a332
+ (id)requiredNameProperties;	// IMP=0x000000000002a12c
+ (id)namePropertiesForContact:(id)arg1;	// IMP=0x0000000000029dcc
+ (id)nameProperties;	// IMP=0x0000000000029db1
+ (Class)classForCellIdentifier:(id)arg1;	// IMP=0x0000000000029077
+ (id)cellIdentifierForClass:(Class)arg1;	// IMP=0x0000000000029044
+ (id)cellIdentifierForEditingProperty:(id)arg1;	// IMP=0x0000000000028e50
+ (id)cellIdentifierForProperty:(id)arg1;	// IMP=0x0000000000028cba
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;	// IMP=0x0000000000028c8c
+ (id)cellIdentifierForLinkedCardsEditingGroup;	// IMP=0x0000000000028c5e
+ (id)cellIdentifierForLinkedCardsGroup;	// IMP=0x0000000000028c30
+ (id)cellIdentifierForFaceTimeGroup;	// IMP=0x0000000000028c02
+ (id)cellIdentifierForPropertyPlaceholder;	// IMP=0x0000000000028bd4
+ (id)cellIdentifierForSplitActions;	// IMP=0x0000000000028ba6
+ (id)cellIdentifierForActions;	// IMP=0x0000000000028b78
- (void).cxx_destruct;	// IMP=0x000000000002aab0
@property(nonatomic) _Bool needsUpdateVisibleCells; // @synthesize needsUpdateVisibleCells=_needsUpdateVisibleCells;
@property(nonatomic) struct CGSize oldSize; // @synthesize oldSize=_oldSize;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(copy, nonatomic) NSDictionary *actionTextAttributes; // @synthesize actionTextAttributes=_actionTextAttributes;
@property(copy, nonatomic) NSDictionary *valueTextAttributes; // @synthesize valueTextAttributes=_valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(retain, nonatomic) UIColor *selectedCellBackgroundColor; // @synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor;
@property(retain, nonatomic) UIColor *sectionBackgroundColor; // @synthesize sectionBackgroundColor=_sectionBackgroundColor;
@property(nonatomic) _Bool shouldUseMapTiles; // @synthesize shouldUseMapTiles=_shouldUseMapTiles;
@property(nonatomic) _Bool shouldUseExpandedContentStyle; // @synthesize shouldUseExpandedContentStyle=_shouldUseExpandedContentStyle;
@property(nonatomic, getter=isCellsLayoutCachingEnabled) _Bool cellsLayoutCachingEnabled; // @synthesize cellsLayoutCachingEnabled=_cellsLayoutCachingEnabled;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
- (void)applyCellAppearance:(id)arg1;	// IMP=0x0000000000029b67
- (void)updateFontSizes;	// IMP=0x000000000002995d
- (void)updateVisibleCellsIfNeeded;	// IMP=0x00000000000297a5
- (void)setNeedsUpdateVisibleCells;	// IMP=0x00000000000296f8
- (void)updateFontColors;	// IMP=0x00000000000295b7
- (void)layoutMarginsDidChange;	// IMP=0x00000000000294f6
- (void)layoutSubviews;	// IMP=0x000000000002942a
- (void)tintColorDidChange;	// IMP=0x00000000000293d4
@property(retain, nonatomic) UIColor *backgroundColor; // @dynamic backgroundColor;
- (void)setAttributesFromContactView:(id)arg1;	// IMP=0x00000000000290e0
- (void)registerContactCellClass:(Class)arg1;	// IMP=0x0000000000029084
@property(readonly, nonatomic) CNContactHeaderView *defaultHeaderView;
- (void)_cnui_applyContactStyle;	// IMP=0x00000000000289dd
- (id)initWithFrame:(struct CGRect)arg1 contact:(id)arg2;	// IMP=0x00000000000289c6
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 contact:(id)arg3;	// IMP=0x00000000000284a5

// Remaining properties
@property(nonatomic) __weak id <ABContactViewDataSource> dataSource; // @dynamic dataSource;
@property(nonatomic) __weak id <ABContactViewDelegate> delegate; // @dynamic delegate;
@property(retain, nonatomic) UIColor *separatorColor; // @dynamic separatorColor;

@end
