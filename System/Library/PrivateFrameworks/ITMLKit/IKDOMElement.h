//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJDOMParsingElement-Protocol.h>
#import <ITMLKit/IKJSDOMElement-Protocol.h>
#import <ITMLKit/IKJSDOMParentNode-Protocol.h>
#import <ITMLKit/IKStyleableElement-Protocol.h>
#import <ITMLKit/_IKJSDOMElementProxy-Protocol.h>

@class IKDOMHTMLCollection, IKDOMNamedNodeMap, IKViewElementStyleComposer, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol IKStyleableElement;

@interface IKDOMElement <IKJDOMParsingElement, IKStyleableElement, IKJSDOMElement, _IKJSDOMElementProxy, IKJSDOMParentNode>
{
    NSMutableDictionary *_metadataDict;	// 8 = 0x8
    NSArray *_cachedChildElements;	// 16 = 0x10
    NSDictionary *_cachedAttributes;	// 24 = 0x18
    IKViewElementStyleComposer *styleComposer;	// 32 = 0x20
    IKDOMElement *__aliasOf;	// 40 = 0x28
}

+ (id)_filteredAttributes;	// IMP=0x000000000003c8f1
- (void).cxx_destruct;	// IMP=0x000000000003c9f8
@property(nonatomic, setter=_setAliasOf:) __weak IKDOMElement *_aliasOf; // @synthesize _aliasOf=__aliasOf;
@property(retain, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000003c80e
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000003c7f1
@property(readonly, copy, nonatomic) NSString *elementName;
@property(readonly, nonatomic) __weak id <IKStyleableElement> parentStyleableElement;
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(_Bool)arg2;	// IMP=0x000000000003c649
- (void)setTextContent:(id)arg1;	// IMP=0x000000000003c378
- (id)textContent;	// IMP=0x000000000003c15f
- (long long)nodeType;	// IMP=0x000000000003c154
- (id)nodeName;	// IMP=0x000000000003c142
- (void)_markUpdatedForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;	// IMP=0x000000000003bffc
- (id)_attributes;	// IMP=0x000000000003be5a
@property(readonly, nonatomic) _Bool _isPartOfPrototypeElement;
@property(readonly, nonatomic) _Bool _isPrototypeElement;
@property(readonly, nonatomic) unsigned long long childElementCount;
@property(readonly, nonatomic) IKDOMElement *lastElementChild;
@property(readonly, nonatomic) IKDOMElement *firstElementChild;
@property(readonly, nonatomic) IKDOMHTMLCollection *children;
- (id)childElementsByTagName:(id)arg1;	// IMP=0x000000000003ba21
- (id)childElementByTagName:(id)arg1;	// IMP=0x000000000003b8d7
- (id)childElements;	// IMP=0x000000000003b752
@property(readonly, copy, nonatomic) IKDOMNamedNodeMap *attributes;
- (_Bool)hasAttributes;	// IMP=0x000000000003b3a3
- (_Bool)hasAttribute:(id)arg1;	// IMP=0x000000000003b323
- (id)getElementsByTagName:(id)arg1;	// IMP=0x000000000003b262
- (void)removeAttribute:(id)arg1;	// IMP=0x000000000003b13c
- (void)setAttribute:(id)arg1:(id)arg2;	// IMP=0x000000000003afd7
- (id)getAttribute:(id)arg1;	// IMP=0x000000000003aefe
@property(readonly, retain, nonatomic) NSString *tagName;
- (void)setAttributeValue:(id)arg1 withName:(id)arg2;	// IMP=0x000000000003ace5
- (id)asPrivateIKJSDOMElement;	// IMP=0x000000000003acb2
- (struct _NSRange)domib_visibleIndexRange;	// IMP=0x0000000000008239
- (void)domib_setVisibleIndexRange:(struct _NSRange)arg1;	// IMP=0x00000000000081ce
- (id)domib_itemsChangeSet;	// IMP=0x00000000000081bd
- (void)domib_setItemsChangeSet:(id)arg1;	// IMP=0x00000000000081a7
- (id)domib_appDataSet;	// IMP=0x0000000000008196
- (void)domib_setAppDataSet:(id)arg1;	// IMP=0x0000000000008180
- (id)domp_derivativeDOMElementsBySelector;	// IMP=0x0000000000075039
- (void)domp_setDerivativeDOMElementsBySelector:(id)arg1;	// IMP=0x0000000000075023
- (id)domp_prototype;	// IMP=0x0000000000075012
- (void)domp_setPrototype:(id)arg1;	// IMP=0x0000000000074ffc
- (void)insertAdjacentHTML:(id)arg1:(id)arg2;	// IMP=0x0000000000079c31
@property(retain, nonatomic) NSString *outerHTML;
@property(retain, nonatomic) NSString *innerHTML;
- (id)ik_templateElementCSSSelectorList;	// IMP=0x0000000000087e88
- (id)ik_templateName;	// IMP=0x0000000000087af3
- (id)domb_boundCSSRule;	// IMP=0x00000000000918c6
- (void)domb_setBoundCSSRule:(id)arg1;	// IMP=0x000000000009194c
- (id)domb_mutationRuleSet;	// IMP=0x000000000009193b
- (void)domb_setMutationRuleSet:(id)arg1;	// IMP=0x0000000000091925
- (id)domb_dataBinding;	// IMP=0x0000000000091914
- (void)domb_setDataBinding:(id)arg1;	// IMP=0x00000000000918fe
- (id)domb_domBindingController;	// IMP=0x00000000000918ed
- (void)domb_setDOMBindingController:(id)arg1;	// IMP=0x00000000000918d7
- (id)ikve_rulesID;	// IMP=0x00000000000a55ba
- (void)ikve_setRulesID:(id)arg1;	// IMP=0x00000000000a55a4
- (id)ikve_prototypesID;	// IMP=0x00000000000a5593
- (void)ikve_setPrototypesID:(id)arg1;	// IMP=0x00000000000a557d
- (id)dombs_items;	// IMP=0x00000000000be905
- (void)dombs_setItems:(id)arg1;	// IMP=0x00000000000be8ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

