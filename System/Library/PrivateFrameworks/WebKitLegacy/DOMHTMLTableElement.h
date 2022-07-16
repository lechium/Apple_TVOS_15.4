//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMHTMLCollection, DOMHTMLTableCaptionElement, DOMHTMLTableSectionElement, NSString;

@interface DOMHTMLTableElement
{
}

- (void)deleteRow:(int)arg1;	// IMP=0x000000000007dc60
- (id)insertRow:(int)arg1;	// IMP=0x000000000007da30
- (void)deleteCaption;	// IMP=0x000000000007d940
- (id)createCaption;	// IMP=0x000000000007d800
- (id)createTBody;	// IMP=0x000000000007d6c0
- (void)deleteTFoot;	// IMP=0x000000000007d5d0
- (id)createTFoot;	// IMP=0x000000000007d490
- (void)deleteTHead;	// IMP=0x000000000007d3a0
- (id)createTHead;	// IMP=0x000000000007d260
@property(copy) NSString *width;
@property(copy) NSString *summary;
@property(copy) NSString *rules;
@property(copy) NSString *frameBorders;
@property(copy) NSString *cellSpacing;
@property(copy) NSString *cellPadding;
@property(copy) NSString *border;
@property(copy) NSString *bgColor;
@property(copy) NSString *align;
@property(readonly) DOMHTMLCollection *tBodies;
@property(readonly) DOMHTMLCollection *rows;
@property(retain) DOMHTMLTableSectionElement *tFoot;
@property(retain) DOMHTMLTableSectionElement *tHead;
@property(retain) DOMHTMLTableCaptionElement *caption;
- (int)structuralComplexityContribution;	// IMP=0x0000000000099d70

@end
