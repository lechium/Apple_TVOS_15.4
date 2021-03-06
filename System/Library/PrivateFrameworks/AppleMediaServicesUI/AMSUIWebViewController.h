//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebActionRunnerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebPageViewControllerDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSUIWebProtocolDelegate-Protocol.h>
#import <AppleMediaServicesUI/AMSURLProtocolDelegate-Protocol.h>
#import <AppleMediaServicesUI/NSURLSessionDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSUIWebAppearance, AMSUIWebClientContext, AMSUIWebContainerViewController, AMSUIWebPageViewController, NSDictionary, NSString, NSURL, UILabel, UIViewController;
@protocol AMSBagProtocol, AMSUIWebDelegate;

@interface AMSUIWebViewController <NSURLSessionDelegate, AMSURLProtocolDelegate, AMSUIWebActionRunnerDelegate, AMSUIWebPageViewControllerDelegate, AMSUIWebProtocolDelegate, AMSBagConsumer>
{
    _Bool _hasAppeared;	// 8 = 0x8
    _Bool _hasStarted;	// 9 = 0x9
    id <AMSUIWebDelegate> _delegate;	// 16 = 0x10
    UILabel *_automationView;	// 24 = 0x18
    AMSUIWebClientContext *_context;	// 32 = 0x20
    UIViewController *_childViewController;	// 40 = 0x28
    long long _currentLoadState;	// 48 = 0x30
    NSURL *_lastLoadedURL;	// 56 = 0x38
    AMSUIWebContainerViewController *_rootContainer;	// 64 = 0x40
    AMSUIWebPageViewController *_webPage;	// 72 = 0x48
}

+ (id)createBagForSubProfile;	// IMP=0x00000000000822d9
+ (id)bagSubProfileVersion;	// IMP=0x00000000000822cc
+ (id)bagSubProfile;	// IMP=0x00000000000822bf
+ (id)bagKeySet;	// IMP=0x000000000008221b
- (void).cxx_destruct;	// IMP=0x00000000000896d2
@property(readonly, nonatomic) AMSUIWebPageViewController *webPage; // @synthesize webPage=_webPage;
@property(readonly, nonatomic) AMSUIWebContainerViewController *rootContainer; // @synthesize rootContainer=_rootContainer;
@property(retain, nonatomic) NSURL *lastLoadedURL; // @synthesize lastLoadedURL=_lastLoadedURL;
@property(nonatomic) _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) long long currentLoadState; // @synthesize currentLoadState=_currentLoadState;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(readonly, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UILabel *automationView; // @synthesize automationView=_automationView;
@property(nonatomic) __weak id <AMSUIWebDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_stringForLoadState:(long long)arg1;	// IMP=0x000000000008956d
- (void)_showErrorViewWithError:(id)arg1 request:(id)arg2 bagValue:(id)arg3;	// IMP=0x0000000000089030
- (id)_rootNavigationController;	// IMP=0x0000000000088fe0
- (id)_loadRequest:(id)arg1 bagValue:(id)arg2;	// IMP=0x0000000000088340
- (id)_loadMescalSessionForRequestWithURL:(id)arg1;	// IMP=0x0000000000087f88
- (id)_parseWebPropertiesFromRequest:(id)arg1;	// IMP=0x000000000008774a
- (id)_lazyPromiseForPageLoad;	// IMP=0x000000000008729d
- (id)_lazyPromiseForLoadingSession;	// IMP=0x0000000000086d6e
- (id)_lazyPromiseForBagSnapshot;	// IMP=0x0000000000086aae
- (id)_lazyPromiseForLoadingRequest:(id)arg1 bagValue:(id)arg2;	// IMP=0x0000000000085ebe
- (void)_handleDidEncodeNetworkRequest:(id)arg1;	// IMP=0x0000000000085d05
- (id)_handleEngagementRequest:(id)arg1 pauseTimeouts:(_Bool)arg2;	// IMP=0x00000000000853f5
- (id)_handleDialogRequest:(id)arg1 pauseTimeouts:(_Bool)arg2;	// IMP=0x0000000000084a71
- (id)_handleAuthenticateCloudRequest:(id)arg1 pauseTimeouts:(_Bool)arg2;	// IMP=0x000000000008437e
- (id)_handleAuthenticateRequest:(id)arg1 pauseTimeouts:(_Bool)arg2;	// IMP=0x000000000008377f
- (void)_dismiss;	// IMP=0x0000000000083766
- (id)_buildRequestWithRequest:(id)arg1 bagValue:(id)arg2;	// IMP=0x0000000000083489
- (id)_applyMappingsToURL:(id)arg1;	// IMP=0x0000000000082c1e
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000082ba1
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000082b24
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000082aa7
- (void)webPageViewController:(id)arg1 didEncodeNetworkRequest:(id)arg2;	// IMP=0x0000000000082a92
- (void)protocolHandler:(id)arg1 didEncodeNetworkRequest:(id)arg2;	// IMP=0x0000000000082a7d
- (void)actionDidFinishPurchaseWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000000828a1
- (void)action:(id)arg1 didEncodeNetworkRequest:(id)arg2;	// IMP=0x000000000008288c
- (id)action:(id)arg1 pauseTimeouts:(_Bool)arg2 handleDialogRequest:(id)arg3;	// IMP=0x0000000000082877
- (id)action:(id)arg1 pauseTimeouts:(_Bool)arg2 handleAuthenticateCloudRequest:(id)arg3;	// IMP=0x0000000000082862
- (id)action:(id)arg1 pauseTimeouts:(_Bool)arg2 handleAuthenticateRequest:(id)arg3;	// IMP=0x000000000008284d
- (id)action:(id)arg1 didResolveWithResult:(id)arg2 error:(id)arg3;	// IMP=0x0000000000082617
- (id)action:(id)arg1 handleActionObject:(id)arg2;	// IMP=0x000000000008241a
- (id)runJSRequest:(id)arg1;	// IMP=0x000000000008217a
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x0000000000082172
- (id)loadURL:(id)arg1;	// IMP=0x000000000008210a
- (id)loadRequest:(id)arg1;	// IMP=0x00000000000820f6
- (id)loadBagValue:(id)arg1;	// IMP=0x00000000000820df
@property(retain, nonatomic) NSDictionary *metricsOverlay;
@property(nonatomic) _Bool loadUsingWebKit;
@property(retain, nonatomic) NSDictionary *clientOptions;
@property(retain, nonatomic) AMSProcessInfo *clientInfo;
@property(retain, nonatomic) NSDictionary *clientData;
@property(retain, nonatomic) id <AMSBagProtocol> bag;
@property(retain, nonatomic) AMSUIWebAppearance *appearance;
@property(retain, nonatomic) ACAccount *account;
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000815c8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000008130d
- (void)loadView;	// IMP=0x0000000000081088
- (id)initWithBag:(id)arg1 account:(id)arg2 clientInfo:(id)arg3;	// IMP=0x0000000000080c08
- (id)initWithBag:(id)arg1;	// IMP=0x0000000000080b85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

