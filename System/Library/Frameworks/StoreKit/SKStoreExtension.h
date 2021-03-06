//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKStoreExtensionServiceInterface-Protocol.h>

@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>
{
}

+ (id)serviceInterface;	// IMP=0x0000000000006f24
+ (id)clientInterface;	// IMP=0x0000000000006f04
+ (id)_exportedInterface;	// IMP=0x0000000000006d23
+ (id)_remoteViewControllerInterface;	// IMP=0x0000000000006d11
- (void)presentRequestedViewControllerWithIdentifier:(id)arg1;	// IMP=0x0000000000006e99
- (void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;	// IMP=0x0000000000006e39
- (void)setRequestedIdentifier:(id)arg1;	// IMP=0x0000000000006e33
- (void)setTabIdentifier:(id)arg1;	// IMP=0x0000000000006e2d
- (void)setupWithParameters:(id)arg1;	// IMP=0x0000000000006e27
- (_Bool)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;	// IMP=0x0000000000006e1f
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006d35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

