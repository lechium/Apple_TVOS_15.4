//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVImageProxy, TVLSMDocumentProxy, TVStackedMediaView;

@interface TVFeaturedRibbonCell
{
    TVStackedMediaView *_stackedMediaView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001668d3
@property(readonly, nonatomic) TVStackedMediaView *stackedMediaView; // @synthesize stackedMediaView=_stackedMediaView;
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000016686f
@property(readonly, nonatomic) TVImageProxy *fallbackImageProxy;
@property(readonly, nonatomic) TVLSMDocumentProxy *lsmDocumentProxy;
- (void)setBaseURL:(id)arg1 previewURL:(id)arg2 fallbackURL:(id)arg3 expectedContentSize:(struct CGSize)arg4;	// IMP=0x0000000000166709
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001662f7

@end

