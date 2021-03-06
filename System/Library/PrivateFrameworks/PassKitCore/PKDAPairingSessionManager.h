//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKAppletSubcredentialPairingSessionDelegate-Protocol.h>

@class NSMutableArray, NSString;

@interface PKDAPairingSessionManager <PKAppletSubcredentialPairingSessionDelegate>
{
    _Bool _probingTerminalPairingStatus;	// 48 = 0x30
    NSMutableArray *_probingCompletionBlocks;	// 56 = 0x38
    CDUnknownBlockType _prewarmCompletion;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000fd7e4
@property(copy, nonatomic) CDUnknownBlockType prewarmCompletion; // @synthesize prewarmCompletion=_prewarmCompletion;
@property(readonly, nonatomic) NSMutableArray *probingCompletionBlocks; // @synthesize probingCompletionBlocks=_probingCompletionBlocks;
@property(nonatomic, getter=isProbingTerminalPairingStatus) _Bool probingTerminalPairingStatus; // @synthesize probingTerminalPairingStatus=_probingTerminalPairingStatus;
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(_Bool)arg2;	// IMP=0x00000000000fd560
- (void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2;	// IMP=0x00000000000fd3e7
- (void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000fd338
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2;	// IMP=0x00000000000fd289
- (void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3;	// IMP=0x00000000000fd1da
- (void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1;	// IMP=0x00000000000fd179
- (id)initWithQueue:(id)arg1 sessionCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fd11c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

