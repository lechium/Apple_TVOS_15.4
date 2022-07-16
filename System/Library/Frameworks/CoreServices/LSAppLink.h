//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class LSApplicationProxy, LSApplicationRecord, NSDictionary, NSURL;

@interface LSAppLink : NSObject <NSSecureCoding>
{
    NSURL *_URL;	// 8 = 0x8
    LSApplicationProxy *_targetApplicationProxy;	// 16 = 0x10
    LSApplicationRecord *_targetApplicationRecord;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000407e9
+ (_Bool)areEnabledByDefault;	// IMP=0x000000000004034d
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040179
+ (void)getAppLinksWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003ffdb
+ (void)getAppLinkWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003fd5d
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 includeLinksForCurrentApplication:(_Bool)arg3 error:(id *)arg4;	// IMP=0x000000000003fad4
+ (id)appLinksWithURL:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000003faac
+ (_Bool)auditTokenHasWriteAccess:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000040c15
+ (_Bool)currentProcessHasWriteAccess;	// IMP=0x0000000000040bc4
+ (_Bool)auditTokenHasReadAccess:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000040b7b
+ (_Bool)currentProcessHasReadAccess;	// IMP=0x0000000000040b2a
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000040c49
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x0000000000040c2f
+ (void)openWithURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040edf
+ (void)openWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040c7b
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0000000000041248
+ (void)_openAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042c08
+ (void)_openWithAppLink:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004258e
+ (id)_appLinkWithURL:(id)arg1 applicationRecord:(id)arg2 plugInClass:(Class)arg3;	// IMP=0x00000000000423b2
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000042038
+ (_Bool)_URLIsValidForAppLinks:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000041f9a
+ (id)_dispatchQueue;	// IMP=0x0000000000041f19
+ (id)_appLinksWithState:(id)arg1 context:(struct LSContext *)arg2 limit:(unsigned long long)arg3 URLComponents:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000043599
+ (_Bool)URLComponentsAreValidForAppLinks:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000432c5
- (void).cxx_destruct;	// IMP=0x0000000000040af7
@property(retain) LSApplicationRecord *targetApplicationRecord; // @synthesize targetApplicationRecord=_targetApplicationRecord;
@property(readonly) LSApplicationProxy *targetApplicationProxy; // @synthesize targetApplicationProxy=_targetApplicationProxy;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000408d3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000407f1
- (id)debugDescription;	// IMP=0x00000000000406de
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040526
- (unsigned long long)hash;	// IMP=0x0000000000040472
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000040423
@property(nonatomic, getter=isEnabled) _Bool enabled; // @dynamic enabled;
- (void)openWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040c93
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040c63
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x00000000000411f9
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000411aa
@property(retain, nonatomic) NSDictionary *browserSettings;
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000412db
- (void)openInWebBrowser:(_Bool)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000412b9
- (void)openInWebBrowser:(_Bool)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041296
@property long long openStrategy; // @dynamic openStrategy;
- (id)_userActivityWithState:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000043ace

@end
