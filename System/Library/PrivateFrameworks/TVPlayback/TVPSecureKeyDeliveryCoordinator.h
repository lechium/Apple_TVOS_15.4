//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPSecureKeyLoaderDelegate-Protocol.h>

@class NSData, NSMutableSet, NSString, TVPPlaybackReportingEventCollection, TVPSecureKeyLoader;
@protocol TVPSecureKeyDeliveryCoordinatorDelegate;

@interface TVPSecureKeyDeliveryCoordinator : NSObject <TVPSecureKeyLoaderDelegate>
{
    _Bool _certFetchInProgress;	// 8 = 0x8
    NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *_delegate;	// 16 = 0x10
    TVPPlaybackReportingEventCollection *_eventCollection;	// 24 = 0x18
    TVPSecureKeyLoader *_secureKeyLoader;	// 32 = 0x20
    NSData *_certificateData;	// 40 = 0x28
    NSMutableSet *_requestsAwaitingCertFetch;	// 48 = 0x30
}

+ (_Bool)isSecureKeyDeliveryRequest:(id)arg1;	// IMP=0x000000000006f9c1
+ (void)initialize;	// IMP=0x000000000006f971
- (void).cxx_destruct;	// IMP=0x0000000000071fee
@property(retain, nonatomic) NSMutableSet *requestsAwaitingCertFetch; // @synthesize requestsAwaitingCertFetch=_requestsAwaitingCertFetch;
@property(nonatomic) _Bool certFetchInProgress; // @synthesize certFetchInProgress=_certFetchInProgress;
@property(retain, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) TVPSecureKeyLoader *secureKeyLoader; // @synthesize secureKeyLoader=_secureKeyLoader;
@property(retain, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;
@property(nonatomic) __weak NSObject<TVPSecureKeyDeliveryCoordinatorDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)_finishLoadingWithError:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000071d14
- (void)_loadSecureKeyRequest:(id)arg1 sendStartReportingEvent:(_Bool)arg2;	// IMP=0x00000000000717c8
- (id)init;	// IMP=0x000000000007179d
- (void)secureKeyLoader:(id)arg1 didFailWithError:(id)arg2 forRequest:(id)arg3;	// IMP=0x00000000000710b2
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2 playbackStartDate:(id)arg3;	// IMP=0x0000000000070fe9
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalPlaybackStartDate:(id)arg2;	// IMP=0x0000000000070f3f
- (void)secureKeyLoader:(id)arg1 didReceiveUpdatedRentalExpirationDate:(id)arg2;	// IMP=0x0000000000070eca
- (void)secureKeyLoader:(id)arg1 didLoadKeyResponseData:(id)arg2 renewalDate:(id)arg3 forRequest:(id)arg4;	// IMP=0x00000000000708ec
- (void)secureKeyLoader:(id)arg1 didLoadContentIdentifierData:(id)arg2 forRequest:(id)arg3;	// IMP=0x00000000000701da
- (void)secureKeyLoader:(id)arg1 didLoadCertificateData:(id)arg2 forRequest:(id)arg3;	// IMP=0x000000000006fc80
- (void)sendStopRequest;	// IMP=0x000000000006fbce
- (void)loadSecureKeyRequest:(id)arg1;	// IMP=0x000000000006fb15
- (id)initWithSecureKeyLoader:(id)arg1;	// IMP=0x000000000006fa37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
