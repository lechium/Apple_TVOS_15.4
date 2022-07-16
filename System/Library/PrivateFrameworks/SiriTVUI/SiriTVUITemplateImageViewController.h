//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SiriTVUIImageViewTemplateItem, SiriTVUITemplateImageView, UITraitCollection;

@interface SiriTVUITemplateImageViewController
{
    NSURL *_currentImageURL;	// 8 = 0x8
    UITraitCollection *_previousTraitCollection;	// 16 = 0x10
    _Bool _hasAppeared;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001474d
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
- (void)_updateImageWithTraitCollection:(id)arg1;	// IMP=0x0000000000013cfc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000013c15
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000013bcf
- (void)loadView;	// IMP=0x0000000000013981

// Remaining properties
@property(retain, nonatomic) SiriTVUIImageViewTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateImageView *view; // @dynamic view;

@end

