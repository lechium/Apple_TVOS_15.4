//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface _TVSMBulletinLegacyContentView
{
}

- (struct _textSizeResult)_textSizeForSubtitle;	// IMP=0x00000000000080e1
- (struct _textSizeResult)_textSizeForTitle;	// IMP=0x0000000000007f1a
- (struct _textSizeResult)_textSizeForLabel:(id)arg1 lines:(long long)arg2 minWidth:(double)arg3 step:(double)arg4 maxWidth:(double)arg5;	// IMP=0x0000000000007ce0
- (void)layoutSubviews;	// IMP=0x00000000000077c1
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000007691
- (void)setImageURL:(id)arg1;	// IMP=0x0000000000007650
- (void)setImage:(id)arg1;	// IMP=0x000000000000760f
- (void)setSubtitleText:(id)arg1;	// IMP=0x00000000000075ce
- (void)setTitleText:(id)arg1;	// IMP=0x000000000000758d
- (id)_initWithFrame:(struct CGRect)arg1 layout:(unsigned long long)arg2;	// IMP=0x000000000000722f

@end

