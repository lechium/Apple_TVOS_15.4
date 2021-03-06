//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVStoreApplicationDelegate.h>

#import <TVContentPartnerKitUI/TVInterfaceCreating-Protocol.h>
#import <TVContentPartnerKitUI/_TVInterfaceCreatingPrivate-Protocol.h>

@class NSString;

@interface TVCKAppDelegate : TVStoreApplicationDelegate <_TVInterfaceCreatingPrivate, TVInterfaceCreating>
{
}

+ (void)setupUIFactoryWithBootURL:(id)arg1 defaultBootURL:(id)arg2;	// IMP=0x000000000006207d
+ (void)exposeDefaultObjectsInJSContext:(id)arg1;	// IMP=0x0000000000061fec
+ (void)exposeObjectsInJSContext:(id)arg1;	// IMP=0x0000000000061f04
+ (void)load;	// IMP=0x0000000000061e6b
- (void)_registerTemplateStyleSheets;	// IMP=0x00000000000626c4
- (id)_styleSheetURLForTemplate:(id)arg1;	// IMP=0x00000000000625ef
- (id)imageForResource:(id)arg1;	// IMP=0x00000000000624a8
- (id)URLForResource:(id)arg1;	// IMP=0x0000000000062289
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0000000000062226
- (void)setupWithBootURL:(id)arg1;	// IMP=0x00000000000621b3
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00000000000620c1
- (id)init;	// IMP=0x0000000000061e77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

