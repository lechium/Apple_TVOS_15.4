//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSString, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebFrame> _frame;	// 8 = 0x8
}

+ (id)lookUpFrameFromJSContext:(id)arg1;	// IMP=0x000000000038ebb1
+ (id)lookUpFrameFromHandle:(id)arg1;	// IMP=0x000000000038eb78
@property(readonly) struct Object *_apiObject;
- (id)_provisionalURL;	// IMP=0x000000000038f411
- (struct __SecTrust *)_serverTrust;	// IMP=0x000000000038f3cc
- (id)_certificateChain;	// IMP=0x000000000038f319
- (_Bool)_hasCustomContentProvider;	// IMP=0x000000000038f2af
- (id)_parentFrame;	// IMP=0x000000000038f293
@property(readonly, nonatomic) NSArray *faviconURLs;
@property(readonly, nonatomic) NSArray *appleTouchIconURLs;
- (id)_securityOrigin;	// IMP=0x000000000038f05d
@property(readonly, nonatomic) _WKFrameHandle *handle;
@property(readonly, nonatomic) _Bool isMainFrame;
@property(readonly, nonatomic) _Bool containsAnyFormElements;
@property(readonly, nonatomic) NSArray *childFrames;
@property(readonly, nonatomic) NSURL *URL;
- (id)_browserContextController;	// IMP=0x000000000038eece
- (id)jsRangeForRangeHandle:(id)arg1 inWorld:(id)arg2;	// IMP=0x000000000038ee47
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;	// IMP=0x000000000038edc0
- (id)hitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000038ed49
- (id)hitTest:(struct CGPoint)arg1;	// IMP=0x000000000038ece4
- (id)jsContextForServiceWorkerWorld:(id)arg1;	// IMP=0x000000000038ec91
- (id)jsContextForWorld:(id)arg1;	// IMP=0x000000000038ec32
- (void)dealloc;	// IMP=0x000000000038ebdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

