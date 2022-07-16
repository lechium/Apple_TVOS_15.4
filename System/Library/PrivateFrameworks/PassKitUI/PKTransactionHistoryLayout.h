//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import <PassKitUI/PKDashboardLayout-Protocol.h>

@class NSIndexPath, NSString;

@interface PKTransactionHistoryLayout : UICollectionViewFlowLayout <PKDashboardLayout>
{
    NSIndexPath *_headerIndexPath;	// 8 = 0x8
    _Bool _needsCustomLocation;	// 16 = 0x10
    _Bool _useStickyHeader;	// 17 = 0x11
    _Bool _useCompactInsetForTitle;	// 18 = 0x12
}

- (void).cxx_destruct;	// IMP=0x00000000002f9ba0
@property(nonatomic) _Bool useCompactInsetForTitle; // @synthesize useCompactInsetForTitle=_useCompactInsetForTitle;
@property(nonatomic) _Bool useStickyHeader; // @synthesize useStickyHeader=_useStickyHeader;
- (_Bool)_indexPathIsHeaderIndexPath:(id)arg1;	// IMP=0x00000000002f9adb
- (id)_customAttributesForStickyHeader:(id)arg1;	// IMP=0x00000000002f9956
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000002f9654
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002f9569
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000002f948a
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00000000002f93da
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;	// IMP=0x00000000002f931e
- (id)init;	// IMP=0x00000000002f9286

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool fade;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

