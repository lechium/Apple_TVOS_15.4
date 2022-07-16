//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RemoteUI/RUIAlertViewDelegate-Protocol.h>
#import <RemoteUI/RUIPageDelegate-Protocol.h>
#import <RemoteUI/RUIPasscodeViewDelegate-Protocol.h>
#import <RemoteUI/RUITableViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, NSURL, RUIAlertView, RUIElement, RUIPage, RUIStyle;
@protocol RUIObjectModelDelegate;

@interface RUIObjectModel : NSObject <RUITableViewDelegate, RUIPasscodeViewDelegate, RUIPageDelegate, RUIAlertViewDelegate>
{
    NSString *_name;	// 8 = 0x8
    NSURL *_sourceURL;	// 16 = 0x10
    NSURL *_scriptURL;	// 24 = 0x18
    NSString *_inlineScript;	// 32 = 0x20
    NSString *_validationFunction;	// 40 = 0x28
    NSMutableArray *_defaultPages;	// 48 = 0x30
    NSMutableDictionary *_namedPages;	// 56 = 0x38
    NSMutableArray *_displayedPages;	// 64 = 0x40
    int _currentPage;	// 72 = 0x48
    struct OpaqueJSContext *_ctx;	// 80 = 0x50
    NSDictionary *_clientInfo;	// 88 = 0x58
    NSDictionary *_serverInfo;	// 96 = 0x60
    NSDictionary *_updateInfo;	// 104 = 0x68
    int _refreshDelay;	// 112 = 0x70
    NSString *_refreshURL;	// 120 = 0x78
    NSTimer *_refreshTimer;	// 128 = 0x80
    long long _nextButtonStyle;	// 136 = 0x88
    RUIAlertView *_primaryAlert;	// 144 = 0x90
    NSMutableDictionary *_namedAlerts;	// 152 = 0x98
    NSMutableDictionary *_httpHeaders;	// 160 = 0xa0
    NSString *_authPasswordEquivalent;	// 168 = 0xa8
    NSString *_authPasswordFieldID;	// 176 = 0xb0
    _Bool _parseFinished;	// 184 = 0xb8
    CDUnknownBlockType _webViewDismissHandler;	// 192 = 0xc0
    id <RUIObjectModelDelegate> _delegate;	// 200 = 0xc8
    RUIElement *_activeElement;	// 208 = 0xd0
    NSString *_identifier;	// 216 = 0xd8
    RUIStyle *_style;	// 224 = 0xe0
    NSString *_identifierMarkingStackRemovalAfterPush;	// 232 = 0xe8
    NSDictionary *_alert;	// 240 = 0xf0
}

+ (id)objectModelForXMLNamed:(id)arg1;	// IMP=0x0000000000022918
+ (void)_enableTestMode;	// IMP=0x000000000002245f
- (void).cxx_destruct;	// IMP=0x000000000002c0da
@property(retain, nonatomic) NSDictionary *alert; // @synthesize alert=_alert;
@property(copy, nonatomic) NSString *identifierMarkingStackRemovalAfterPush; // @synthesize identifierMarkingStackRemovalAfterPush=_identifierMarkingStackRemovalAfterPush;
@property(retain, nonatomic) RUIStyle *style; // @synthesize style=_style;
@property(nonatomic) long long nextButtonStyle; // @synthesize nextButtonStyle=_nextButtonStyle;
@property(copy, nonatomic) NSString *refreshURL; // @synthesize refreshURL=_refreshURL;
@property(nonatomic) int refreshDelay; // @synthesize refreshDelay=_refreshDelay;
@property(copy, nonatomic) NSDictionary *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(copy, nonatomic) NSDictionary *serverInfo; // @synthesize serverInfo=_serverInfo;
@property(copy, nonatomic) NSDictionary *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy, nonatomic) NSString *validationFunction; // @synthesize validationFunction=_validationFunction;
@property(copy, nonatomic) NSString *inlineScript; // @synthesize inlineScript=_inlineScript;
@property(copy, nonatomic) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) RUIElement *activeElement; // @synthesize activeElement=_activeElement;
@property(readonly, nonatomic) NSDictionary *namedPages; // @synthesize namedPages=_namedPages;
@property(readonly, nonatomic) NSArray *defaultPages; // @synthesize defaultPages=_defaultPages;
@property(nonatomic) __weak id <RUIObjectModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)supportedInterfaceOrientationsForRUIPage:(id)arg1;	// IMP=0x000000000002be89
- (void)RUIPage:(id)arg1 toggledEditing:(_Bool)arg2;	// IMP=0x000000000002bdf0
- (void)RUIPage:(id)arg1 pressedNavBarButton:(id)arg2;	// IMP=0x000000000002ba75
- (void)navigateToNextPageAnimated:(_Bool)arg1;	// IMP=0x000000000002b966
- (void)_navigateToNextPageAnimated;	// IMP=0x000000000002b94a
- (void)passcodeViewOM:(id)arg1 activatedElement:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b932
- (void)tableViewOMSubmitForm:(id)arg1;	// IMP=0x000000000002b859
- (void)tableViewOM:(id)arg1 elementDidChange:(id)arg2 action:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002b720
- (void)tableViewOMDidChange:(id)arg1;	// IMP=0x000000000002ad6e
- (_Bool)tableViewOM:(id)arg1 deleteRowAtIndexPath:(id)arg2;	// IMP=0x000000000002a962
- (void)alertView:(id)arg1 pressedButton:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a57d
- (id)_pageContainingTableView:(id)arg1;	// IMP=0x000000000002a3dc
- (void)_handleElementChange:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002a050
- (void)_handleLinkPress:(id)arg1 attributes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000029779
- (_Bool)_shouldDisplayNamedElement:(id)arg1 page:(id)arg2;	// IMP=0x00000000000296a6
- (void)openLink:(id)arg1 HTTPMethod:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000295be
- (void)handleElementChange:(id)arg1 action:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000028fb5
- (void)activateElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028c00
- (id)subElementWithID:(id)arg1;	// IMP=0x0000000000028760
- (void)handleAppleIDAuthenticationIfNeededForAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027086
- (id)textInRowWithIdentifier:(id)arg1;	// IMP=0x0000000000026f0c
- (void)_presentSecondConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026b81
- (void)_presentConfirmationWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000267f6
- (void)presentConfirmationIfNeededForElement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002651f
- (_Bool)hasSecondConfirmationAttributes:(id)arg1;	// IMP=0x0000000000026480
- (_Bool)hasConfirmationAttributes:(id)arg1;	// IMP=0x00000000000263e1
- (id)stringForAttributeName:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000026244
- (_Bool)hasAttributeOrAttributeFunctionNamed:(id)arg1 withAttributes:(id)arg2;	// IMP=0x0000000000026156
- (void)stopActivityIndicator;	// IMP=0x0000000000025ff7
- (void)startActivityIndicator;	// IMP=0x0000000000025fb5
- (void)_stopNavigationBarSpinnerIfNeededForAttributes:(id)arg1;	// IMP=0x0000000000025f35
- (void)_startNavigationBarSpinnerIfNeededForAttributes:(id)arg1;	// IMP=0x0000000000025d6a
- (void)stopNavigationBarSpinner;	// IMP=0x0000000000025ce4
- (void)startNavigationBarSpinnerWithTitle:(id)arg1;	// IMP=0x0000000000025bcc
- (id)elementsWithName:(id)arg1;	// IMP=0x00000000000259ff
- (id)relativeURLWithString:(id)arg1;	// IMP=0x000000000002591f
- (id)absoluteURLWithString:(id)arg1;	// IMP=0x00000000000258d6
- (id)rowForFormField:(id)arg1;	// IMP=0x0000000000025315
- (id)tableFooterViewForAttributes:(id)arg1;	// IMP=0x0000000000025245
- (id)tableHeaderViewForAttributes:(id)arg1;	// IMP=0x0000000000025175
- (Class)customTableCellClassForTableViewRow:(id)arg1;	// IMP=0x00000000000250cd
- (Class)customFooterClassForSection:(id)arg1;	// IMP=0x0000000000025025
- (Class)customHeaderClassForSection:(id)arg1;	// IMP=0x0000000000024f7d
- (void)configureSection:(id)arg1;	// IMP=0x0000000000024ec2
- (void)configureRow:(id)arg1;	// IMP=0x0000000000024e07
- (void)configureTableView:(id)arg1;	// IMP=0x0000000000024d4c
@property(readonly, nonatomic) RUIAlertView *primaryAlert;
- (void)addAlertElement:(id)arg1;	// IMP=0x0000000000024c3c
- (id)alertController;	// IMP=0x0000000000024bec
- (void)_unsafe_setPages:(id)arg1;	// IMP=0x00000000000246b2
- (void)setPages:(id)arg1;	// IMP=0x00000000000245f4
@property(readonly, nonatomic) NSArray *allPages;
@property(readonly, nonatomic) NSArray *pages;
@property(readonly, nonatomic) RUIPage *visiblePage;
@property(readonly, nonatomic) NSArray *displayedPages;
- (void)refreshWithObjectModel:(id)arg1;	// IMP=0x0000000000023e63
- (void)_populateRequest:(id)arg1;	// IMP=0x0000000000023ca1
- (id)postbackDictionary;	// IMP=0x0000000000023c69
- (void)populatePostbackDictionary:(id)arg1;	// IMP=0x0000000000023ab3
- (id)postbackData;	// IMP=0x0000000000023a45
- (_Bool)goBack:(_Bool)arg1;	// IMP=0x0000000000023a12
- (_Bool)goBack;	// IMP=0x00000000000239fb
- (id)_viewControllerFromNavigatingBackWithinDisplayedPagesAnimated:(_Bool)arg1;	// IMP=0x00000000000238d4
- (void)back:(id)arg1;	// IMP=0x00000000000238bb
- (void)didNavigateBackFromViewController:(id)arg1;	// IMP=0x00000000000238a4
- (void)_navigateBackWithPop:(_Bool)arg1 fromViewController:(id)arg2;	// IMP=0x00000000000235fd
- (void)pageDidDisappear:(id)arg1;	// IMP=0x00000000000234ea
- (void)_displayNamedPage:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000023434
- (void)_displaySupplementalPage:(id)arg1;	// IMP=0x000000000002338a
- (id)_parentNavigationController;	// IMP=0x000000000002332a
- (id)_parentViewController;	// IMP=0x000000000002323f
- (id)newNavigationControllerForPresentation;	// IMP=0x000000000002312d
- (void)presentPage:(id)arg1 inViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023080
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002306b
- (void)presentInParentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000022fdb
- (void)presentWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022f18
- (id)_firstPageForPresentation;	// IMP=0x0000000000022e1d
- (void)refreshTimeout;	// IMP=0x0000000000022d7f
- (void)_populatePageNavItem:(id)arg1 withNextButton:(_Bool)arg2;	// IMP=0x0000000000022a75
- (void)parseDidFinish;	// IMP=0x0000000000022a22
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000022571
- (void)cleanupRefreshTimer;	// IMP=0x0000000000022536
- (id)init;	// IMP=0x000000000002246c
- (void)setJSGlobalContext:(struct OpaqueJSContext *)arg1;	// IMP=0x000000000002d819
- (void)runScript;	// IMP=0x000000000002d6f3
- (id)invokeScriptFunction:(id)arg1 withArguments:(id)arg2;	// IMP=0x000000000002d14a
- (id)objectForJSValue:(struct OpaqueJSValue *)arg1;	// IMP=0x000000000002ceba
- (_Bool)validateWithFunction:(id)arg1;	// IMP=0x000000000002cb51
- (_Bool)prepareScriptContext;	// IMP=0x000000000002caf8
- (void)_logException:(struct OpaqueJSValue *)arg1;	// IMP=0x000000000002cadd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
