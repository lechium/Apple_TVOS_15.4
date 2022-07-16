//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RemoteUI/RUIHeaderDelegate-Protocol.h>
#import <RemoteUI/RUITableFooterDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSNumber, RUIDetailHeaderElement, RUIElement, RUIMultiChoiceElement, RUISubHeaderElement, RUITableView, RUITableViewHeaderFooterView, RUITableViewRow, UIView;
@protocol RUIHeader, RemoteUITableFooter;

@interface RUITableViewSection <RUIHeaderDelegate, RUITableFooterDelegate>
{
    NSMutableArray *_rows;	// 8 = 0x8
    long long _disclosureLimit;	// 16 = 0x10
    RUITableViewHeaderFooterView *_containerizedHeaderView;	// 24 = 0x18
    RUITableViewHeaderFooterView *_containerizedFooterView;	// 32 = 0x20
    NSNumber *_drawsTopSeparator;	// 40 = 0x28
    _Bool _configured;	// 48 = 0x30
    UIView<RUIHeader> *_headerView;	// 56 = 0x38
    UIView<RemoteUITableFooter> *_footerView;	// 64 = 0x40
    double _headerHeight;	// 72 = 0x48
    double _footerHeight;	// 80 = 0x50
    RUITableViewRow *_showAllRow;	// 88 = 0x58
    RUIElement *_header;	// 96 = 0x60
    RUISubHeaderElement *_subHeader;	// 104 = 0x68
    RUIDetailHeaderElement *_detailHeader;	// 112 = 0x70
    RUIElement *_footer;	// 120 = 0x78
    RUIMultiChoiceElement *_multiChoiceElement;	// 128 = 0x80
    RUITableView *_tableElement;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0000000000050507
@property(nonatomic) _Bool configured; // @synthesize configured=_configured;
@property(nonatomic) __weak RUITableView *tableElement; // @synthesize tableElement=_tableElement;
@property(retain, nonatomic) RUIMultiChoiceElement *multiChoiceElement; // @synthesize multiChoiceElement=_multiChoiceElement;
@property(retain, nonatomic) RUIElement *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) RUIDetailHeaderElement *detailHeader; // @synthesize detailHeader=_detailHeader;
@property(retain, nonatomic) RUISubHeaderElement *subHeader; // @synthesize subHeader=_subHeader;
@property(retain, nonatomic) RUIElement *header; // @synthesize header=_header;
@property(retain, nonatomic) RUITableViewRow *showAllRow; // @synthesize showAllRow=_showAllRow;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) RUITableViewHeaderFooterView *containerizedFooterView; // @synthesize containerizedFooterView=_containerizedFooterView;
@property(retain, nonatomic) UIView<RemoteUITableFooter> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) RUITableViewHeaderFooterView *containerizedHeaderView; // @synthesize containerizedHeaderView=_containerizedHeaderView;
@property(retain, nonatomic) UIView<RUIHeader> *headerView; // @synthesize headerView=_headerView;
- (id)subElementsWithName:(id)arg1;	// IMP=0x00000000000500e5
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000004fe02
- (id)subElementWithID:(id)arg1;	// IMP=0x000000000004fa2c
- (void)populatePostbackDictionary:(id)arg1;	// IMP=0x000000000004f8e2
- (_Bool)hasCustomFooter;	// IMP=0x000000000004f8b9
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;	// IMP=0x000000000004f799
- (Class)_customFooterClass;	// IMP=0x000000000004f2af
- (_Bool)hasCustomHeader;	// IMP=0x000000000004f286
- (void)setImageAlignment:(int)arg1;	// IMP=0x000000000004f201
- (void)setImageSize:(struct CGSize)arg1;	// IMP=0x000000000004f168
- (void)setImage:(id)arg1;	// IMP=0x000000000004f0da
- (void)headerViewDidChange:(id)arg1;	// IMP=0x000000000004eed8
- (void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2;	// IMP=0x000000000004edb8
- (Class)_customHeaderClass;	// IMP=0x000000000004e860
- (id)colorFromAttributeString:(id)arg1;	// IMP=0x000000000004e82b
- (void)setAttributes:(id)arg1;	// IMP=0x000000000004e740
- (void)tappedShowAllRowWithTable:(id)arg1;	// IMP=0x000000000004e50d
@property(readonly, nonatomic) NSArray *rows;
- (void)removeRowAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004e152
- (void)addRow:(id)arg1;	// IMP=0x000000000004e135
- (void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000004e118
- (_Bool)hasValueForDrawsTopSeparator;	// IMP=0x000000000004e103
@property(nonatomic) _Bool drawTopSeparator;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;	// IMP=0x000000000004df9a
- (id)staticFunctions;	// IMP=0x0000000000013190
- (id)staticValues;	// IMP=0x0000000000012e13

@end

