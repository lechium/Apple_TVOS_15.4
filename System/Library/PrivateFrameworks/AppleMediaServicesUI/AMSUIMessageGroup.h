//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <InAppMessages/IAMMessageGroup.h>

#import <AppleMediaServicesUI/AMSUIDynamicViewControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebDelegate-Protocol.h>

@class NSDictionary, NSString;
@protocol AMSBagProtocol, AMSUIMessageGroupDelegate;

@interface AMSUIMessageGroup : IAMMessageGroup <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate>
{
    NSDictionary *_clientData;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    NSString *_clientVersion;	// 24 = 0x18
    id <AMSUIMessageGroupDelegate> _delegate;	// 32 = 0x20
    NSDictionary *_clientMetricsOverlay;	// 40 = 0x28
    id <AMSBagProtocol> _bag;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001f2fc
@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(retain, nonatomic) NSDictionary *clientMetricsOverlay; // @synthesize clientMetricsOverlay=_clientMetricsOverlay;
@property(nonatomic) __weak id <AMSUIMessageGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) NSDictionary *clientData; // @synthesize clientData=_clientData;
- (id)_viewControllerForURL:(id)arg1 account:(id)arg2 sidepack:(id)arg3 metrics:(id)arg4;	// IMP=0x000000000001eb89
- (id)_viewControllerForServiceType:(id)arg1 placement:(id)arg2 clientIdentifier:(id)arg3 clientVersion:(id)arg4 params:(id)arg5 account:(id)arg6 sidepack:(id)arg7 metrics:(id)arg8;	// IMP=0x000000000001e6d1
- (id)_dictionaryForParamObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001e4ef
- (void)dynamicViewController:(id)arg1 didFinishCarrierLinkingWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000001e25f
- (void)dynamicViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000001dfcf
- (void)webViewController:(id)arg1 didFinishPurchaseWithResult:(id)arg2 error:(id)arg3;	// IMP=0x000000000001dd3f
- (void)viewControllerForModalMessagePresentation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ce88
- (id)initWithBag:(id)arg1;	// IMP=0x000000000001cddd
- (id)init;	// IMP=0x000000000001cc47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

