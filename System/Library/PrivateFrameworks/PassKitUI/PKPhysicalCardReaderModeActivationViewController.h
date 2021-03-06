//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>
#import <PassKitUI/PKNFCTagReaderSessionDelegate-Protocol.h>

@class NSString, PKAccount, PKAccountService, PKAccountUser, PKBusinessChatController, PKNFCTagReaderSession, PKPaymentPass, PKPaymentSessionHandle, PKPhysicalCard, PKPhysicalCardActivationAnimationView;

@interface PKPhysicalCardReaderModeActivationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate>
{
    PKAccountService *_accountService;	// 8 = 0x8
    PKAccount *_account;	// 16 = 0x10
    PKAccountUser *_accountUser;	// 24 = 0x18
    PKPhysicalCard *_physicalCard;	// 32 = 0x20
    PKPaymentPass *_paymentPass;	// 40 = 0x28
    unsigned long long _feature;	// 48 = 0x30
    PKPhysicalCardActivationAnimationView *_animationView;	// 56 = 0x38
    _Bool _invalidated;	// 64 = 0x40
    _Bool _deviceSupportsReaderMode;	// 65 = 0x41
    PKPaymentSessionHandle *_sessionHandle;	// 72 = 0x48
    PKNFCTagReaderSession *_readerSession;	// 80 = 0x50
    PKBusinessChatController *_businessChatController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000020d45e
- (void)_invalidate;	// IMP=0x000000000020d42f
- (void)_presentActivationWithActivationCode:(id)arg1;	// IMP=0x000000000020d359
- (void)_stopTagReaderSession;	// IMP=0x000000000020d2ec
- (void)_startTagReaderSession;	// IMP=0x000000000020d09b
- (void)_dismiss;	// IMP=0x000000000020d047
- (void)explanationViewDidSelectSetupLater:(id)arg1;	// IMP=0x000000000020cf90
- (void)nfcTagReaderSessionDidTimeout:(id)arg1;	// IMP=0x000000000020ce87
- (void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1;	// IMP=0x000000000020cd7e
- (void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2;	// IMP=0x000000000020ca64
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000020ca23
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000020c9c5
- (void)viewDidLoad;	// IMP=0x000000000020c75c
- (void)dealloc;	// IMP=0x000000000020c71e
- (id)initWithAccountService:(id)arg1 account:(id)arg2 accountUser:(id)arg3 paymentPass:(id)arg4 physicalCard:(id)arg5;	// IMP=0x000000000020c58f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

