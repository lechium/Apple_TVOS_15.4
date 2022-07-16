//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PXImageTitleSubtitleSpec, PXTitleSubtitleUILabel;

@interface PXUIImageTitleSubtitleTile
{
    PXTitleSubtitleUILabel *_label;	// 8 = 0x8
    PXImageTitleSubtitleSpec *_spec;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008a91e1
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)prepareForReuse;	// IMP=0x00000000008a9140
- (void)becomeReusable;	// IMP=0x00000000008a90a3
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x00000000008a8f57
- (id)view;	// IMP=0x00000000008a8d16

@end

