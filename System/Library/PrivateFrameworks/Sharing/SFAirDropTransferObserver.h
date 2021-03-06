//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFAirDropTransferObserverProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver <SFAirDropTransferObserverProtocol>
{
    id <SFAirDropTransferObserverDelegate> _delegate;	// 8 = 0x8
    NSMutableDictionary *_transferIdentifierToTransfer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000085e2
@property(retain) NSMutableDictionary *transferIdentifierToTransfer; // @synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer;
@property(nonatomic) __weak id <SFAirDropTransferObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x0000000000008586
- (id)remoteObjectInterface;	// IMP=0x0000000000008566
- (id)exportedInterface;	// IMP=0x0000000000008546
- (id)machServiceName;	// IMP=0x0000000000008539
- (void)removedTransfer:(id)arg1;	// IMP=0x0000000000008370
- (void)updatedTransfer:(id)arg1;	// IMP=0x000000000000811c
- (void)updateActionHandlersOnTransfer:(id)arg1;	// IMP=0x0000000000007c7d
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000007b72
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1;	// IMP=0x0000000000007b50
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1;	// IMP=0x0000000000007b24
- (void)invalidate;	// IMP=0x0000000000007af5
- (void)activate;	// IMP=0x0000000000007ac6
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007ab4
- (id)init;	// IMP=0x0000000000007a57

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

