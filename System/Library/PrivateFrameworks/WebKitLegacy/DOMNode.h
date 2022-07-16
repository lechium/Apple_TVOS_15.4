//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/DOMEventTarget-Protocol.h>

@class DOMDocument, DOMElement, DOMNamedNodeMap, DOMNodeList, NSString, WebArchive;

@interface DOMNode <DOMEventTarget>
{
}

+ (id)_nodeFromJSWrapper:(struct OpaqueJSValue *)arg1;	// IMP=0x000000000001e140
- (_Bool)dispatchEvent:(id)arg1;	// IMP=0x000000000008e3b0
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;	// IMP=0x000000000008e1c0
- (void)removeEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;	// IMP=0x000000000008dfd0
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;	// IMP=0x000000000008dda0
- (void)addEventListener:(id)arg1 listener:(id)arg2 useCapture:(_Bool)arg3;	// IMP=0x000000000008db70
- (void)inspect;	// IMP=0x000000000008da80
- (_Bool)contains:(id)arg1;	// IMP=0x000000000008d980
- (unsigned short)compareDocumentPosition:(id)arg1;	// IMP=0x000000000008d880
- (_Bool)isDefaultNamespace:(id)arg1;	// IMP=0x000000000008d730
- (id)lookupNamespaceURI:(id)arg1;	// IMP=0x000000000008d5b0
- (id)lookupPrefix:(id)arg1;	// IMP=0x000000000008d430
- (_Bool)isEqualNode:(id)arg1;	// IMP=0x000000000008d330
- (_Bool)isSameNode:(id)arg1;	// IMP=0x000000000008d240
- (_Bool)hasAttributes;	// IMP=0x000000000008d140
- (_Bool)isSupported:(id)arg1 version:(id)arg2;	// IMP=0x000000000008d050
- (void)normalize;	// IMP=0x000000000008cf60
- (id)cloneNode:(_Bool)arg1;	// IMP=0x000000000008cd30
- (_Bool)hasChildNodes;	// IMP=0x000000000008cc50
- (id)appendChild:(id)arg1;	// IMP=0x000000000008cae0
- (id)removeChild:(id)arg1;	// IMP=0x000000000008c970
- (id)replaceChild:(id)arg1 oldChild:(id)arg2;	// IMP=0x000000000008c7f0
- (id)insertBefore:(id)arg1 refChild:(id)arg2;	// IMP=0x000000000008c670
@property(readonly) _Bool isContentEditable;
@property(readonly) DOMElement *parentElement;
- (_Bool)isConnected;	// IMP=0x000000000008c3b0
@property(copy) NSString *textContent;
@property(readonly, copy) NSString *baseURI;
@property(readonly) DOMNamedNodeMap *attributes;
@property(readonly, copy) NSString *localName;
@property(copy) NSString *prefix;
@property(readonly, copy) NSString *namespaceURI;
@property(readonly) DOMDocument *ownerDocument;
@property(readonly) DOMNode *nextSibling;
@property(readonly) DOMNode *previousSibling;
@property(readonly) DOMNode *lastChild;
@property(readonly) DOMNode *firstChild;
@property(readonly) DOMNodeList *childNodes;
@property(readonly) DOMNode *parentNode;
@property(readonly) unsigned short nodeType;
@property(copy) NSString *nodeValue;
@property(readonly, copy) NSString *nodeName;
- (void)dealloc;	// IMP=0x000000000008ace0
- (struct RootObject *)_rootObject;	// IMP=0x000000000001bfe0
@property(readonly, copy) NSString *description;
- (id)previousFocusNode;	// IMP=0x000000000001de90
- (id)nextFocusNode;	// IMP=0x000000000001de30
- (float)computedFontSize;	// IMP=0x000000000001dde0
- (struct _WKQuad)innerFrameQuad;	// IMP=0x000000000001dbd0
- (struct CGRect)boundingFrame;	// IMP=0x000000000001db90
- (id)hrefTitle;	// IMP=0x000000000001da50
- (id)hrefLabel;	// IMP=0x000000000001d9a0
- (struct CGRect)hrefFrame;	// IMP=0x000000000001d920
- (id)hrefTarget;	// IMP=0x000000000001d8e0
- (id)hrefURL;	// IMP=0x000000000001d7c0
- (void *)_linkElement;	// IMP=0x000000000001d780
- (id)lineBoxQuads;	// IMP=0x000000000001d540
- (struct CGRect)boundingBoxUsingTransforms;	// IMP=0x000000000001d4c0
- (struct _WKQuad)absoluteQuadAndInsideFixedPosition:(_Bool *)arg1;	// IMP=0x000000000001d290
- (struct _WKQuad)absoluteQuad;	// IMP=0x000000000001d250
- (id)lineBoxRects;	// IMP=0x000000000001d230
- (struct CGRect)boundingBox;	// IMP=0x000000000001d1b0
- (id)textRects;	// IMP=0x000000000001def0
- (void)getPreviewSnapshotImage:(struct CGImage **)arg1 andRects:(id *)arg2;	// IMP=0x000000000001e1b0
- (_Bool)isSupported:(id)arg1:(id)arg2;	// IMP=0x000000000008e560
- (id)replaceChild:(id)arg1:(id)arg2;	// IMP=0x000000000008e540
- (id)insertBefore:(id)arg1:(id)arg2;	// IMP=0x000000000008e520
- (id)findExplodedTextNodeAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000099b20
- (double)textHeight;	// IMP=0x0000000000099ad0
- (id)rangeOfContainingParagraph;	// IMP=0x0000000000099680
- (_Bool)isSelectableBlock;	// IMP=0x0000000000099630
- (_Bool)containsOnlyInlineObjects;	// IMP=0x00000000000995c0
- (id)borderRadii;	// IMP=0x0000000000099360
- (id)absoluteQuads;	// IMP=0x0000000000099150
- (id)boundingBoxes;	// IMP=0x0000000000098fd0
- (void)showPlaceholderIfNecessary;	// IMP=0x000000000009d860
- (void)hidePlaceholder;	// IMP=0x000000000009d810
- (_Bool)isHorizontalWritingMode;	// IMP=0x000000000009d7c0
- (id)webArchiveByFilteringSubframes:(CDUnknownBlockType)arg1;	// IMP=0x000000000009d680
@property(readonly, nonatomic) WebArchive *webArchive;
- (struct CGRect)_renderRect:(_Bool *)arg1;	// IMP=0x000000000009e0d0
- (id)markupString;	// IMP=0x000000000009d8b0
- (id)endPosition;	// IMP=0x0000000000131d80
- (id)startPosition;	// IMP=0x0000000000131ba0
- (id)rangeOfContents;	// IMP=0x0000000000131b20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
