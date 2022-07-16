//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject
{
    _Bool _matchInputSize;	// 8 = 0x8
    _Bool _includeMargin;	// 9 = 0x9
    UIPrintPageRenderer *_renderer;	// 16 = 0x10
    struct CGSize _inputSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008df0f
@property(nonatomic) _Bool includeMargin; // @synthesize includeMargin=_includeMargin;
@property(nonatomic) _Bool matchInputSize; // @synthesize matchInputSize=_matchInputSize;
@property(nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property(readonly, nonatomic) double margin;
- (void)updateRendererSize;	// IMP=0x000000000008dd29
@property(readonly, nonatomic) UIPrintPageRenderer *renderer; // @synthesize renderer=_renderer;
- (id)renderToImage;	// IMP=0x000000000008d86a
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(struct CGSize)arg7 shouldDrawPageAtIndexHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;	// IMP=0x000000000008d0e2
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000008cdf2
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000008cce6
- (struct CGSize)sizeForPageAtIndex:(long long)arg1;	// IMP=0x000000000008c8d7

@end

