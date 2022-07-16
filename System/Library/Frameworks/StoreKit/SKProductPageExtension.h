//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <StoreKit/SKProductPageExtensionServiceInterface-Protocol.h>

@class NSString;

@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface>
{
    _Bool _showsStoreButton;	// 8 = 0x8
    _Bool _showsRightBarButton;	// 9 = 0x9
    _Bool _askToBuy;	// 10 = 0xa
    NSString *_cancelButtonTitle;	// 16 = 0x10
    NSString *_rightBarButtonTitle;	// 24 = 0x18
    NSString *_promptString;	// 32 = 0x20
}

+ (id)serviceInterface;	// IMP=0x000000000002b7b0
+ (id)clientInterface;	// IMP=0x000000000002b790
+ (id)_exportedInterface;	// IMP=0x000000000002b4f8
+ (id)_remoteViewControllerInterface;	// IMP=0x000000000002b4e6
- (void).cxx_destruct;	// IMP=0x000000000002bc1a
@property(nonatomic) _Bool askToBuy; // @synthesize askToBuy=_askToBuy;
@property(copy, nonatomic) NSString *promptString; // @synthesize promptString=_promptString;
@property(nonatomic) _Bool showsRightBarButton; // @synthesize showsRightBarButton=_showsRightBarButton;
@property(copy, nonatomic) NSString *rightBarButtonTitle; // @synthesize rightBarButtonTitle=_rightBarButtonTitle;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(nonatomic) _Bool showsStoreButton; // @synthesize showsStoreButton=_showsStoreButton;
- (id)_createNavigationItem;	// IMP=0x000000000002b8cd
- (void)rightBarButtonPressed:(id)arg1;	// IMP=0x000000000002b777
- (void)cancelButtonPressed:(id)arg1;	// IMP=0x000000000002b761
- (void)clientLookupItemDidLoad:(id)arg1 parameters:(id)arg2;	// IMP=0x000000000002b664
- (void)setUsageContext:(id)arg1;	// IMP=0x000000000002b65e
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;	// IMP=0x000000000002b658
- (void)setupWithClientBundleID:(id)arg1;	// IMP=0x000000000002b652
- (void)setPreview:(id)arg1;	// IMP=0x000000000002b64c
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x000000000002b646
- (void)storeButtonPressed:(id)arg1;	// IMP=0x000000000002b640
- (void)setupWithCustomNavigationItem:(id)arg1 promptString:(id)arg2 askToBuy:(_Bool)arg3;	// IMP=0x000000000002b63a
- (_Bool)lookupItemDidLoad:(id)arg1 parameters:(id)arg2;	// IMP=0x000000000002b632
- (void)loadDidFinish;	// IMP=0x000000000002b5f0
- (void)finishWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b50a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
