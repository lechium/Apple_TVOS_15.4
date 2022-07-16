//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMEventTarget-Protocol.h>
#import <ITMLKit/IKJSDOMNode-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDOMNodeProxy-Protocol.h>

@class IKDOMDocument, IKDOMNodeData, IKDOMNodeList, JSManagedValue, JSValue, NSHashTable, NSMutableDictionary, NSString;

@interface IKDOMNode <NSObject, IKJSDOMNode, _IKJSDOMNodeProxy, IKJSDOMEventTarget>
{
    struct _xmlNode *_nodePtr;	// 8 = 0x8
    JSManagedValue *_managedDataItem;	// 16 = 0x10
    JSManagedValue *_managedOwnerDocument;	// 24 = 0x18
    JSManagedValue *_managedParent;	// 32 = 0x20
    JSManagedValue *_managedChildNodeList;	// 40 = 0x28
    NSMutableDictionary *_eventListenersMap;	// 48 = 0x30
    NSHashTable *_domObservers;	// 56 = 0x38
    long long _ITMLID;	// 64 = 0x40
    IKDOMNodeData *_jsNodeData;	// 72 = 0x48
    JSManagedValue *_managedSelf;	// 80 = 0x50
    NSString *_identifier;	// 88 = 0x58
}

+ (id)_eventListenerMapKeyForType:(id)arg1 useCapture:(_Bool)arg2;	// IMP=0x00000000000cb683
+ (void)handleNodeParentDidChange:(struct _xmlNode *)arg1;	// IMP=0x00000000000c9d2f
+ (long long)ITMLIDForITMLIDString:(id)arg1;	// IMP=0x00000000000c9c2b
+ (id)ITMLIDStringforITMLID:(unsigned long long)arg1;	// IMP=0x00000000000c9c06
+ (id)nodeForNodePtr:(struct _xmlNode *)arg1;	// IMP=0x00000000000c7d98
+ (id)nodeWithAppContext:(id)arg1 nodePtr:(struct _xmlNode *)arg2;	// IMP=0x00000000000c7c8f
+ (void)load;	// IMP=0x00000000000c7c5a
- (void).cxx_destruct;	// IMP=0x00000000000ccb01
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) JSManagedValue *managedSelf; // @synthesize managedSelf=_managedSelf;
@property(readonly, retain, nonatomic) IKDOMNodeData *jsNodeData; // @synthesize jsNodeData=_jsNodeData;
@property(nonatomic) long long ITMLID; // @synthesize ITMLID=_ITMLID;
@property(retain, nonatomic) NSHashTable *domObservers; // @synthesize domObservers=_domObservers;
@property(retain, nonatomic) NSMutableDictionary *eventListenersMap; // @synthesize eventListenersMap=_eventListenersMap;
@property(retain, nonatomic) JSManagedValue *managedChildNodeList; // @synthesize managedChildNodeList=_managedChildNodeList;
@property(retain, nonatomic) JSManagedValue *managedParent; // @synthesize managedParent=_managedParent;
@property(retain, nonatomic) JSManagedValue *managedOwnerDocument; // @synthesize managedOwnerDocument=_managedOwnerDocument;
- (_Bool)_enumerateNodesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc876
- (void)_markSubtreeUpdatesForAncestorsOfNode:(id)arg1;	// IMP=0x00000000000cc793
- (void)_childrenUpdatedWithUpdatedChildNodes:(id)arg1 withDocument:(id)arg2;	// IMP=0x00000000000cc548
- (void)_updatedAndMark:(_Bool)arg1 withDocument:(id)arg2;	// IMP=0x00000000000cc4b5
- (void)_notifyUpdatesToDOMObservers;	// IMP=0x00000000000cc37b
- (struct _xmlNode *)_appendNode:(struct _xmlNode *)arg1;	// IMP=0x00000000000cc31f
- (struct _xmlNode *)_insertNode:(struct _xmlNode *)arg1 refNode:(struct _xmlNode *)arg2 operation:(unsigned long long)arg3;	// IMP=0x00000000000cc26e
- (_Bool)_validateDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;	// IMP=0x00000000000cbfc7
- (void)_linkManagedObjects;	// IMP=0x00000000000cbad6
- (void)_unlinkManagedObjects;	// IMP=0x00000000000cb8bb
- (_Bool)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(_Bool)arg3;	// IMP=0x00000000000cb6ac
- (unsigned long long)childElementCount;	// IMP=0x00000000000cb647
- (id)lastElementChild;	// IMP=0x00000000000cb5af
- (id)firstElementChild;	// IMP=0x00000000000cb517
- (id)children;	// IMP=0x00000000000cb4ac
- (id)toStringWithError:(id *)arg1;	// IMP=0x00000000000cb190
- (id)nodesForXPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000caea2
- (void)removeDOMObserver:(id)arg1;	// IMP=0x00000000000caddb
- (void)addDOMObserver:(id)arg1;	// IMP=0x00000000000cad08
- (id)performDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3;	// IMP=0x00000000000ca92d
- (_Bool)clearUpdates;	// IMP=0x00000000000ca777
- (void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000ca61d
- (void)updatedAndMark:(_Bool)arg1 notify:(_Bool)arg2;	// IMP=0x00000000000ca4f7
- (void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ca003
- (void)enumerateEventListenersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9d89
- (struct _xmlNode *)nodePtr;	// IMP=0x00000000000c9d78
- (_Bool)dispatchEvent:(id)arg1;	// IMP=0x00000000000c9b5b
- (void)removeEventListener:(id)arg1:(id)arg2:(_Bool)arg3;	// IMP=0x00000000000c9a30
- (void)addEventListener:(id)arg1:(id)arg2:(_Bool)arg3;	// IMP=0x00000000000c9819
@property(nonatomic) __weak JSValue *dataItem;
- (_Bool)contains:(id)arg1;	// IMP=0x00000000000c954c
- (void)adoptFeatureWithName:(id)arg1 fromDOMNode:(id)arg2;	// IMP=0x00000000000c934e
- (id)getFeature:(id)arg1:(id)arg2;	// IMP=0x00000000000c907c
- (_Bool)isEqualNode:(id)arg1;	// IMP=0x00000000000c906a
- (_Bool)isSameNode:(id)arg1;	// IMP=0x00000000000c8fda
- (id)cloneNode:(_Bool)arg1;	// IMP=0x00000000000c8f2f
- (_Bool)hasChildNodes;	// IMP=0x00000000000c8f0b
- (id)appendChild:(id)arg1;	// IMP=0x00000000000c8df2
- (id)removeChild:(id)arg1;	// IMP=0x00000000000c8d57
- (id)replaceChild:(id)arg1:(id)arg2;	// IMP=0x00000000000c8c25
- (id)insertBefore:(id)arg1:(id)arg2;	// IMP=0x00000000000c8ae9
@property(retain, nonatomic) NSString *textContent;
@property(readonly, nonatomic) __weak IKDOMDocument *ownerDocument;
@property(readonly, nonatomic) __weak IKDOMNode *nextSibling;
@property(readonly, nonatomic) __weak IKDOMNode *previousSibling;
@property(readonly, retain, nonatomic) IKDOMNode *lastChild;
@property(readonly, retain, nonatomic) IKDOMNode *firstChild;
@property(readonly, retain, nonatomic) IKDOMNodeList *childNodes;
@property(readonly, nonatomic) __weak IKDOMNode *parentNode;
@property(readonly, nonatomic) long long nodeType;
@property(retain, nonatomic) NSString *nodeValue;
@property(readonly, retain, nonatomic) NSString *nodeName;
- (id)childNodesAsArray;	// IMP=0x00000000000c8303
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000c808d
- (id)initWithAppContext:(id)arg1 xmlNode:(struct _xmlNode *)arg2;	// IMP=0x00000000000c7e52
- (id)asPrivateIKJSDOMNode;	// IMP=0x00000000000c7c27
- (id)ik_pathsForSearchQuery:(id)arg1 compareOptions:(unsigned long long)arg2 currentPath:(id)arg3;	// IMP=0x000000000008862b
- (id)ik_nodesWithIds:(id)arg1;	// IMP=0x000000000008848d
- (id)ik_nodeWithId:(long long)arg1;	// IMP=0x000000000008831e
- (id)ik_nodePath;	// IMP=0x0000000000087f9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

