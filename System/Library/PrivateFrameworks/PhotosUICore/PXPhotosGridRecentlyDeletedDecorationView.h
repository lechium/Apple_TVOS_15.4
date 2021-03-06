//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGDecorationView-Protocol.h>

@class PXAssetReference, PXTextBannerView;

@interface PXPhotosGridRecentlyDeletedDecorationView : UIView <PXGDecorationView>
{
    unsigned long long _decorationOptions;	// 8 = 0x8
    PXAssetReference *_userData;	// 16 = 0x10
    PXTextBannerView *_textBannerView;	// 24 = 0x18
    struct CGRect _clippingRect;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001caed9
@property(retain, nonatomic) PXTextBannerView *textBannerView; // @synthesize textBannerView=_textBannerView;
@property(copy, nonatomic) PXAssetReference *userData; // @synthesize userData=_userData;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(nonatomic) unsigned long long decorationOptions; // @synthesize decorationOptions=_decorationOptions;
- (void)prepareForReuse;	// IMP=0x00000000001caddc
- (void)becomeReusable;	// IMP=0x00000000001cadd6
- (void)layoutSubviews;	// IMP=0x00000000001cad0e
- (void)updateTextBanner;	// IMP=0x00000000001cac0f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001cab4a

// Remaining properties
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;

@end

