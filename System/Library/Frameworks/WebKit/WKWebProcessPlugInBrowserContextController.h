//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKBrowsingContextHandle, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, _WKRemoteObjectRegistry;
@protocol WKWebProcessPlugInEditingDelegate, WKWebProcessPlugInFormDelegatePrivate, WKWebProcessPlugInLoadDelegate;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebPage> _page;	// 8 = 0x8
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate>> _loadDelegate;	// 2048 = 0x800
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate>> _formDelegate;	// 2056 = 0x808
    struct WeakObjCPtr<id<WKWebProcessPlugInEditingDelegate>> _editingDelegate;	// 2064 = 0x810
    struct RetainPtr<_WKRemoteObjectRegistry> _remoteObjectRegistry;	// 2072 = 0x818
}

+ (id)lookUpBrowsingContextFromHandle:(id)arg1;	// IMP=0x00000000003989f0
- (id).cxx_construct;	// IMP=0x000000000039898d
- (void).cxx_destruct;	// IMP=0x000000000039893b
@property(readonly) struct Object *_apiObject;
@property(readonly) WKWebProcessPlugInFrame *mainFrame;
@property(readonly) WKDOMRange *selectedRange;
@property(readonly) WKDOMDocument *mainFrameDocument;
- (void)dealloc;	// IMP=0x0000000000398749
@property __weak id <WKWebProcessPlugInLoadDelegate> loadDelegate;
@property(readonly, nonatomic) NSString *_groupIdentifier;
@property(readonly, nonatomic) _Bool _usesNonPersistentWebsiteDataStore;
@property(nonatomic, setter=_setDefersLoading:) _Bool _defersLoading;
@property(setter=_setEditingDelegate:) __weak id <WKWebProcessPlugInEditingDelegate> _editingDelegate;
@property(setter=_setFormDelegate:) __weak id <WKWebProcessPlugInFormDelegatePrivate> _formDelegate;
@property(readonly, nonatomic) _WKRemoteObjectRegistry *_remoteObjectRegistry;
@property(readonly, nonatomic) WKBrowsingContextHandle *handle;
@property(readonly, nonatomic) struct OpaqueWKBundlePage *_bundlePageRef;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
