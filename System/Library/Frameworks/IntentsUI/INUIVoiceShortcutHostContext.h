//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <IntentsUI/INUIVoiceShortcutRemoteHostingInterface-Protocol.h>

@class NSString;
@protocol INUIVoiceShortcutRemoteHostingInterface;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutHostContext : NSExtensionContext <INUIVoiceShortcutRemoteHostingInterface>
{
    id <INUIVoiceShortcutRemoteHostingInterface> _delegate;	// 8 = 0x8
}

+ (id)_allowedItemPayloadClasses;	// IMP=0x00000000000067fc
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x00000000000067e3
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x00000000000067ca
- (void).cxx_destruct;	// IMP=0x0000000000006b18
@property(nonatomic) __weak id <INUIVoiceShortcutRemoteHostingInterface> delegate; // @synthesize delegate=_delegate;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;	// IMP=0x0000000000006a4e
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;	// IMP=0x0000000000006988
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;	// IMP=0x00000000000068c2
- (void)remoteViewControllerDidCancel;	// IMP=0x0000000000006863

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

