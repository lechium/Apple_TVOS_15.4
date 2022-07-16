//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DOMCSSStyleDeclaration, NSString;

@interface DOMElement
{
}

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;	// IMP=0x000000000009d4b0
- (id)querySelectorAll:(id)arg1;	// IMP=0x000000000003ffb0
- (id)querySelector:(id)arg1;	// IMP=0x000000000003fda0
- (void)remove;	// IMP=0x000000000003fc40
- (_Bool)webkitMatchesSelector:(id)arg1;	// IMP=0x000000000003fa80
- (id)closest:(id)arg1;	// IMP=0x000000000003f870
- (_Bool)matches:(id)arg1;	// IMP=0x000000000003f6b0
- (id)getElementsByClassName:(id)arg1;	// IMP=0x000000000003f500
- (void)scrollByPages:(int)arg1;	// IMP=0x000000000003f410
- (void)scrollByLines:(int)arg1;	// IMP=0x000000000003f320
- (void)scrollIntoViewIfNeeded:(_Bool)arg1;	// IMP=0x000000000003f230
- (void)scrollIntoView:(_Bool)arg1;	// IMP=0x000000000003f140
- (void)blur;	// IMP=0x000000000003f050
- (void)focus;	// IMP=0x000000000003ef50
- (_Bool)hasAttributeNS:(id)arg1 localName:(id)arg2;	// IMP=0x000000000003ed80
- (_Bool)hasAttribute:(id)arg1;	// IMP=0x000000000003ec30
- (id)setAttributeNodeNS:(id)arg1;	// IMP=0x000000000003e9f0
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;	// IMP=0x000000000003e7c0
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;	// IMP=0x000000000003e580
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;	// IMP=0x000000000003e3c0
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;	// IMP=0x000000000003e110
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;	// IMP=0x000000000003df20
- (id)getElementsByTagName:(id)arg1;	// IMP=0x000000000003dd60
- (id)removeAttributeNode:(id)arg1;	// IMP=0x000000000003db20
- (id)setAttributeNode:(id)arg1;	// IMP=0x000000000003d8e0
- (id)getAttributeNode:(id)arg1;	// IMP=0x000000000003d720
- (void)removeAttribute:(id)arg1;	// IMP=0x000000000003d5d0
- (void)setAttribute:(id)arg1 value:(id)arg2;	// IMP=0x000000000003d390
- (id)getAttribute:(id)arg1;	// IMP=0x000000000003d210
@property(readonly) struct CGRect boundsInRootViewSpace;
@property(readonly) unsigned int childElementCount;
@property(readonly) DOMElement *lastElementChild;
@property(readonly) DOMElement *firstElementChild;
- (id)children;	// IMP=0x000000000003ccc0
@property(readonly) DOMElement *nextElementSibling;
@property(readonly) DOMElement *previousElementSibling;
- (void)setUiactions:(id)arg1;	// IMP=0x000000000003c990
- (id)uiactions;	// IMP=0x000000000003c880
@property(readonly, copy) NSString *innerText;
- (id)classList;	// IMP=0x000000000003c640
@property(copy) NSString *className;
@property(copy) NSString *outerHTML;
@property(copy) NSString *innerHTML;
@property(readonly) DOMElement *offsetParent;
@property(readonly) int scrollHeight;
@property(readonly) int scrollWidth;
@property int scrollTop;
@property int scrollLeft;
@property(readonly) int clientHeight;
@property(readonly) int clientWidth;
@property(readonly) int clientTop;
@property(readonly) int clientLeft;
@property(readonly) int offsetHeight;
@property(readonly) int offsetWidth;
@property(readonly) int offsetTop;
@property(readonly) int offsetLeft;
@property(readonly) DOMCSSStyleDeclaration *style;
@property(readonly, copy) NSString *tagName;
- (_Bool)isFocused;	// IMP=0x000000000001f080
- (id)_getURLAttribute:(id)arg1;	// IMP=0x000000000001ef00
- (struct __CTFont *)_font;	// IMP=0x000000000001edf0
- (_Bool)hasAttributeNS:(id)arg1:(id)arg2;	// IMP=0x0000000000040330
- (id)getAttributeNodeNS:(id)arg1:(id)arg2;	// IMP=0x0000000000040310
- (id)getElementsByTagNameNS:(id)arg1:(id)arg2;	// IMP=0x00000000000402f0
- (void)removeAttributeNS:(id)arg1:(id)arg2;	// IMP=0x00000000000402d0
- (void)setAttributeNS:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x00000000000402b0
- (id)getAttributeNS:(id)arg1:(id)arg2;	// IMP=0x0000000000040290
- (void)setAttribute:(id)arg1:(id)arg2;	// IMP=0x0000000000040270
- (int)structuralComplexityContribution;	// IMP=0x0000000000099bc0

@end

