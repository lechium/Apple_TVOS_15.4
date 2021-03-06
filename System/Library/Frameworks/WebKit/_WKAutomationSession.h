//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, _WKAutomationSessionConfiguration;
@protocol _WKAutomationSessionDelegate;

@interface _WKAutomationSession : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebAutomationSession> _session;	// 8 = 0x8
    struct RetainPtr<_WKAutomationSessionConfiguration> _configuration;	// 336 = 0x150
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> _delegate;	// 344 = 0x158
}

- (id).cxx_construct;	// IMP=0x0000000000279344
- (void).cxx_destruct;	// IMP=0x000000000027930a
@property(readonly) struct Object *_apiObject;
- (void)terminate;	// IMP=0x00000000002792f2
@property(readonly, nonatomic, getter=isSimulatingUserInteraction) _Bool simulatingUserInteraction;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, copy, nonatomic) _WKAutomationSessionConfiguration *configuration;
@property(copy, nonatomic) NSString *sessionIdentifier;
@property(nonatomic) __weak id <_WKAutomationSessionDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000002790c1
- (id)initWithConfiguration:(id)arg1;	// IMP=0x000000000027902e
- (id)init;	// IMP=0x0000000000278fd2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

