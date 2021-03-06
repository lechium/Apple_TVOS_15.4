//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsitePolicies> _websitePolicies;	// 8 = 0x8
    struct unique_ptr<WebKit::WebPagePreferencesCaptivePortalModeObserver, std::default_delete<WebKit::WebPagePreferencesCaptivePortalModeObserver>> _captivePortalModeObserver;	// 168 = 0xa8
}

+ (id)defaultPreferences;	// IMP=0x00000000002658e5
- (id).cxx_construct;	// IMP=0x0000000000266a7b
- (void).cxx_destruct;	// IMP=0x0000000000266a68
- (void)_didChangeCaptivePortalMode;	// IMP=0x0000000000266a62
- (void)_willChangeCaptivePortalMode;	// IMP=0x0000000000266a5c
- (unsigned long long)_modalContainerObservationPolicy;	// IMP=0x0000000000266a4f
- (void)_setModalContainerObservationPolicy:(unsigned long long)arg1;	// IMP=0x0000000000266a3e
- (unsigned long long)_mouseEventPolicy;	// IMP=0x0000000000266a2c
- (void)_setMouseEventPolicy:(unsigned long long)arg1;	// IMP=0x0000000000266a1b
@property(nonatomic) long long preferredContentMode;
- (void)_setColorSchemePreference:(unsigned long long)arg1;	// IMP=0x00000000002669ca
- (unsigned long long)_colorSchemePreference;	// IMP=0x00000000002669ac
- (_Bool)_captivePortalModeEnabled;	// IMP=0x000000000026699e
- (void)_setCaptivePortalModeEnabled:(_Bool)arg1;	// IMP=0x0000000000266942
@property(nonatomic) _Bool allowsContentJavaScript;
@property(readonly) struct Object *_apiObject;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1;	// IMP=0x000000000026689b
- (id)_applicationNameForUserAgentWithModernCompatibility;	// IMP=0x0000000000266838
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(_Bool)arg1;	// IMP=0x000000000026682c
- (_Bool)_allowSiteSpecificQuirksToOverrideCompatibilityMode;	// IMP=0x0000000000266820
- (id)_customNavigatorPlatform;	// IMP=0x0000000000266801
- (void)_setCustomNavigatorPlatform:(id)arg1;	// IMP=0x000000000026677f
- (id)_customUserAgentAsSiteSpecificQuirks;	// IMP=0x0000000000266763
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1;	// IMP=0x00000000002666e1
- (id)_customUserAgent;	// IMP=0x00000000002666c5
- (void)_setCustomUserAgent:(id)arg1;	// IMP=0x0000000000266643
- (void)_setUserContentController:(id)arg1;	// IMP=0x0000000000266608
- (id)_userContentController;	// IMP=0x00000000002665f1
- (void)_setWebsiteDataStore:(id)arg1;	// IMP=0x00000000002665b8
- (id)_websiteDataStore;	// IMP=0x00000000002665a1
- (void)_setCustomHeaderFields:(id)arg1;	// IMP=0x000000000026633c
- (id)_customHeaderFields;	// IMP=0x0000000000266215
- (unsigned long long)_popUpPolicy;	// IMP=0x00000000002661f8
- (void)_setPopUpPolicy:(unsigned long long)arg1;	// IMP=0x00000000002661e9
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;	// IMP=0x00000000002661cb
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1;	// IMP=0x00000000002661ae
- (long long)_autoplayPolicy;	// IMP=0x0000000000266196
- (void)_setAutoplayPolicy:(long long)arg1;	// IMP=0x0000000000266187
- (unsigned long long)_allowedAutoplayQuirks;	// IMP=0x000000000026617a
- (void)_setAllowedAutoplayQuirks:(unsigned long long)arg1;	// IMP=0x000000000026616e
- (id)_activeContentRuleListActionPatterns;	// IMP=0x0000000000266020
- (void)_setActiveContentRuleListActionPatterns:(id)arg1;	// IMP=0x0000000000265aaa
- (_Bool)_contentBlockersEnabled;	// IMP=0x0000000000265aa1
- (void)_setContentBlockersEnabled:(_Bool)arg1;	// IMP=0x0000000000265a98
- (id)init;	// IMP=0x0000000000265954
- (void)dealloc;	// IMP=0x00000000002658ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

