//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMAbstractView, DOMDocument, NSString, WebFrame;

@interface DOMHTMLIFrameElement
{
}

@property(readonly) DOMAbstractView *contentWindow;
@property(readonly) DOMDocument *contentDocument;
@property(copy) NSString *width;
- (void)setSrcdoc:(id)arg1;	// IMP=0x0000000000058bc0
- (id)srcdoc;	// IMP=0x0000000000058ab0
@property(copy) NSString *src;
@property(copy) NSString *scrolling;
- (void)setSandbox:(id)arg1;	// IMP=0x0000000000058450
- (id)sandbox;	// IMP=0x0000000000058340
@property(copy) NSString *name;
@property(copy) NSString *marginWidth;
@property(copy) NSString *marginHeight;
@property(copy) NSString *longDesc;
@property(copy) NSString *height;
@property(copy) NSString *frameBorder;
@property(copy) NSString *align;
- (int)structuralComplexityContribution;	// IMP=0x0000000000099d90
@property(readonly, nonatomic) WebFrame *contentFrame;

@end

