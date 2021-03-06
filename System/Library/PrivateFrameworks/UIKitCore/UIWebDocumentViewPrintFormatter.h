//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebPaginationInfo, WebFrame;

@interface UIWebDocumentViewPrintFormatter
{
    UIWebPaginationInfo *_paginationInfo;	// 8 = 0x8
    WebFrame *_frameToPrint;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000ae9109
@property(retain, nonatomic) WebFrame *frameToPrint; // @synthesize frameToPrint=_frameToPrint;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;	// IMP=0x0000000000ae9014
- (struct CGRect)rectForPageAtIndex:(long long)arg1;	// IMP=0x0000000000ae8f74
- (long long)_recalcPageCount;	// IMP=0x0000000000ae8e2c
- (void)_resetPaginationInfo;	// IMP=0x0000000000ae8d80
- (void)removeFromPrintPageRenderer;	// IMP=0x0000000000ae8d42
- (id)_webDocumentView;	// IMP=0x0000000000ae8d30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae8cda

@end

