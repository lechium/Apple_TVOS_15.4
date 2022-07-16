//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDynamicSectionController-Protocol.h>

@class NSArray, NSString, UICollectionViewCellRegistration;

@interface PKPaymentSetupListSectionController : NSObject <PKDynamicSectionController>
{
    NSArray *_identifiers;	// 8 = 0x8
    UICollectionViewCellRegistration *_cellRegistration;	// 16 = 0x10
    NSArray *_items;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000022d45a
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // @synthesize cellRegistration=_cellRegistration;
@property(retain, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;	// IMP=0x000000000022d281
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000022d15b
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;	// IMP=0x000000000022d11d
- (id)headerAttributedStringForIdentifier:(id)arg1;	// IMP=0x000000000022d115
- (id)footerAttributedStringForIdentifier:(id)arg1;	// IMP=0x000000000022d10d
- (id)defaultListLayout;	// IMP=0x000000000022d097
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;	// IMP=0x000000000022cad1
- (id)init;	// IMP=0x000000000022ca06
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000022c83c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

