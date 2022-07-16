//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <GameCenterUI/GKExtensionHostProtocol-Protocol.h>
#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSExtension, NSString;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol>
{
    GKGame *_game;	// 8 = 0x8
    NSExtension *_extension;	// 16 = 0x10
    id _requestIdentifier;	// 24 = 0x18
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;	// IMP=0x0000000000090c06
+ (_Bool)shouldPropagateAppearanceCustomizations;	// IMP=0x0000000000090be0
+ (id)initialItemsForExtension;	// IMP=0x0000000000090707
+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008fd0d
+ (void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2;	// IMP=0x000000000008fa1d
- (void).cxx_destruct;	// IMP=0x00000000000915bb
@property(copy, nonatomic) id requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)messageFromExtension:(id)arg1;	// IMP=0x0000000000091308
- (void)tearDownExtensionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000091290
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;	// IMP=0x00000000000911f6
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000091170
- (void)messageFromClient:(id)arg1;	// IMP=0x00000000000910fe
- (id)extensionObjectProxy;	// IMP=0x0000000000090ee4
- (void)extensionIsFinishing;	// IMP=0x0000000000090df0
- (void)extensionIsCanceling;	// IMP=0x0000000000090cfc
- (void)sendMessageToExtension:(id)arg1;	// IMP=0x0000000000090c7e
- (void)cancelExtension;	// IMP=0x0000000000090c0e
- (long long)_desiredStatusBarStyle;	// IMP=0x0000000000090bfb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000090bf0
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000090be8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000090b5b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000090a66
- (void)viewDidLoad;	// IMP=0x00000000000909be
- (void)dealloc;	// IMP=0x000000000008f9ab
- (id)init;	// IMP=0x000000000008f82a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
