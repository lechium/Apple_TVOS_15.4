//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDOMDocument-Protocol.h>
#import <ITMLKit/IKJSDOMXPathEvaluator-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDOMDocumentProxy-Protocol.h>

@class IKDOMElement, IKDOMImplementation, IKJSNavigationDocument, NSString;
@protocol IKJSDOMDocumentAppBridge, IKNetworkRequestLoader;

@interface IKDOMDocument <NSObject, IKJSDOMDocument, _IKJSDOMDocumentProxy, IKJSDOMXPathEvaluator>
{
    struct {
        _Bool hasSetNeedsUpdate;
        _Bool hasSnapshotImpressions;
        _Bool hasRecordedImpressions;
        _Bool hasRecordedImpressionsCallback;
        _Bool hasRecordedImpressionsMatchingCallback;
        _Bool hasImpressionsMatchingTag;
        _Bool hasScrollToTop;
        _Bool hasRunTest;
    } _appBridgeFlags;	// 8 = 0x8
    _Bool _embeddedScriptExecuted;	// 16 = 0x10
    id <IKNetworkRequestLoader> __requestLoader;	// 24 = 0x18
    id <IKJSDOMDocumentAppBridge> _appBridge;	// 32 = 0x20
    unsigned long long _itmlIDSequence;	// 40 = 0x28
    NSString *__documentURI;	// 48 = 0x30
}

+ (struct _xmlDoc *)_documentWithXMLStr:(id)arg1 lsInput:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038484
+ (void)_resetUpdatesForNode:(id)arg1;	// IMP=0x0000000000037e93
- (void).cxx_destruct;	// IMP=0x00000000000391db
@property(retain, nonatomic, setter=_setDocumentURI:) NSString *_documentURI; // @synthesize _documentURI=__documentURI;
@property(nonatomic) unsigned long long itmlIDSequence; // @synthesize itmlIDSequence=_itmlIDSequence;
@property(nonatomic, getter=isEmbeddedScriptExecuted) _Bool embeddedScriptExecuted; // @synthesize embeddedScriptExecuted=_embeddedScriptExecuted;
@property(nonatomic) __weak id <IKJSDOMDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void)_executeEmbeddedScriptWithExtraInfo:(id)arg1;	// IMP=0x00000000000388ed
- (void)_updateITMLIDRecursivelyForNodePtr:(struct _xmlNode *)arg1;	// IMP=0x0000000000038851
- (void)swapITMLIDForNode:(id)arg1 withITMLIDForNode:(id)arg2;	// IMP=0x0000000000038375
- (void)setITMLIDForNode:(id)arg1;	// IMP=0x00000000000382a1
@property(readonly, nonatomic) id <IKNetworkRequestLoader> _requestLoader; // @synthesize _requestLoader=__requestLoader;
- (long long)nodeType;	// IMP=0x0000000000037e88
- (id)nodeName;	// IMP=0x0000000000037e7b
- (void)recordedImpressionsMatching:(id)arg1:(id)arg2:(id)arg3;	// IMP=0x0000000000037b4c
- (void)recordedImpressions:(id)arg1:(id)arg2;	// IMP=0x0000000000037837
- (id)matchingImpressions:(id)arg1:(id)arg2;	// IMP=0x0000000000037759
- (id)recordedImpressions:(id)arg1;	// IMP=0x0000000000037698
- (id)snapshotImpressions;	// IMP=0x0000000000037635
- (void)scrollToTop;	// IMP=0x0000000000037568
- (void)runTest:(id)arg1:(id)arg2;	// IMP=0x000000000003741c
@property(nonatomic) __weak IKJSNavigationDocument *navigationDocument;
- (void)replace:(id)arg1;	// IMP=0x00000000000372a0
- (void)setNeedsUpdate;	// IMP=0x000000000003723c
- (id)evaluate:(id)arg1:(id)arg2:(id)arg3:(long long)arg4:(id)arg5;	// IMP=0x00000000000370b1
- (id)createExpression:(id)arg1:(id)arg2;	// IMP=0x0000000000036ef3
- (id)adoptNode:(id)arg1;	// IMP=0x0000000000036d28
- (id)getElementById:(id)arg1;	// IMP=0x0000000000036c29
- (id)getElementsByTagName:(id)arg1;	// IMP=0x0000000000036b68
- (id)createCDATASection:(id)arg1;	// IMP=0x0000000000036a45
- (id)createComment:(id)arg1;	// IMP=0x000000000003693e
- (id)createTextNode:(id)arg1;	// IMP=0x0000000000036837
- (id)createDocumentFragment;	// IMP=0x00000000000367a2
- (id)createElement:(id)arg1;	// IMP=0x00000000000366a0
@property(retain, nonatomic) NSString *documentURI;
@property(nonatomic) _Bool strictErrorChecking;
@property(retain, nonatomic) NSString *xmlVersion;
@property(nonatomic) _Bool xmlStandalone;
@property(readonly, retain, nonatomic) NSString *xmlEncoding;
@property(readonly, retain, nonatomic) NSString *inputEncoding;
@property(readonly, retain, nonatomic) IKDOMElement *documentElement;
@property(readonly, nonatomic) __weak IKDOMImplementation *implementation;
- (_Bool)markUpdated;	// IMP=0x0000000000036254
- (void)prepareForPresentationWithExtraInfo:(id)arg1;	// IMP=0x000000000003620a
- (void)dealloc;	// IMP=0x0000000000036025
- (id)initWithAppContext:(id)arg1 qualifiedName:(id)arg2;	// IMP=0x0000000000035f12
- (id)initWithAppContext:(id)arg1 input:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000035e56
- (id)initWithAppContext:(id)arg1 xmlStr:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000035d9a
- (id)initWithAppContext:(id)arg1;	// IMP=0x0000000000035d4e
- (id)asPrivateIKJSDOMDocument;	// IMP=0x0000000000035d1b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

