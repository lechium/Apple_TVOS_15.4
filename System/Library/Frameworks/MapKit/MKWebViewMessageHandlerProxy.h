//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/WKScriptMessageHandler-Protocol.h>

@class NSString;
@protocol WKScriptMessageHandler;

__attribute__((visibility("hidden")))
@interface MKWebViewMessageHandlerProxy : NSObject <WKScriptMessageHandler>
{
    id <WKScriptMessageHandler> _target;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006a35e
@property(nonatomic) __weak id <WKScriptMessageHandler> target; // @synthesize target=_target;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;	// IMP=0x000000000006a2b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

