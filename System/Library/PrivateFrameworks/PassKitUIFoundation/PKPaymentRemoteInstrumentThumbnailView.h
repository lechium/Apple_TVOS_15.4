//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView
{
    UIImageView *_placeholderImageView;	// 8 = 0x8
    UIImageView *_cardImageView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000078fe
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void)_updateCardImage:(struct CGImage *)arg1;	// IMP=0x0000000000007822
- (void)_prepareConstraints;	// IMP=0x00000000000075cb
- (id)initWithRemotePaymentInstrument:(id)arg1;	// IMP=0x000000000000708c

@end
