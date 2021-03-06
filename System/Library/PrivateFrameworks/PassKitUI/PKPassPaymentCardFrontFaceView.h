//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, PKBackdropView, PKBarcodeStickerView, UIButton, UIImageView, UILabel, UIView;

@interface PKPassPaymentCardFrontFaceView
{
    UILabel *_balanceLabel;	// 8 = 0x8
    UIView *_scrimView;	// 16 = 0x10
    PKBackdropView *_backdropView;	// 24 = 0x18
    PKBarcodeStickerView *_topBarcodeView;	// 32 = 0x20
    PKBarcodeStickerView *_bottomBarcodeView;	// 40 = 0x28
    NSMutableArray *_oldTopBarcodeViews;	// 48 = 0x30
    NSMutableArray *_oldBottomBarcodeViews;	// 56 = 0x38
    UIButton *_fullScreenButton;	// 64 = 0x40
    UIImageView *_compactBankLogoView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000163864
- (struct CGSize)_barcodeSize;	// IMP=0x0000000000163829
- (double)_barcodePadding;	// IMP=0x0000000000163809
- (void)setDynamicBarcodeData:(id)arg1;	// IMP=0x00000000001630b9
- (void)setViewExpanded:(_Bool)arg1;	// IMP=0x0000000000162f88
- (void)_handleAccountChanged:(id)arg1;	// IMP=0x0000000000162e77
- (void)_updateBalanceWithAmount:(id)arg1;	// IMP=0x0000000000162cac
- (void)_showFullScreenBarcodeForButton:(id)arg1;	// IMP=0x0000000000162c4f
- (void)layoutSubviews;	// IMP=0x0000000000162516
- (void)_updateBalanceLabelFontSize;	// IMP=0x00000000001623a4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001622a8
- (struct CGSize)contentSize;	// IMP=0x000000000016221f
- (void)setShowsLiveBalance:(_Bool)arg1;	// IMP=0x0000000000161ff9
- (void)_initializeBalanceLabelWithTextColor:(id)arg1;	// IMP=0x0000000000161f52
- (void)createBodyContentViews;	// IMP=0x0000000000161915
- (void)createHeaderContentViews;	// IMP=0x0000000000161881
- (_Bool)showsShare;	// IMP=0x0000000000161879
- (id)_filterAuxiliaryField:(id)arg1;	// IMP=0x0000000000161758
- (id)_filterSecondaryField:(id)arg1;	// IMP=0x000000000016167c
- (id)templateForLayoutMode:(long long)arg1;	// IMP=0x0000000000160afc
- (id)templateForHeaderBucket;	// IMP=0x00000000001605df
- (void)dealloc;	// IMP=0x000000000016052c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000160498

@end

