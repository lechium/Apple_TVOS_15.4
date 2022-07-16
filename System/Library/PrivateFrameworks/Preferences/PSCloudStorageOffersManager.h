//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Preferences/CommerceRemoteUIDelegateDelegate-Protocol.h>

@class CommerceRemoteUIDelegate, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>
{
    CommerceRemoteUIDelegate *_commerceDelegate;	// 8 = 0x8
    _Bool _shouldOfferFamilySharePlansOnly;	// 16 = 0x10
    _Bool _shouldOfferDeviceOffers;	// 17 = 0x11
    _Bool _skipRetryWithoutToken;	// 18 = 0x12
    _Bool _skipCompletionAlert;	// 19 = 0x13
    _Bool _supportsModernAlerts;	// 20 = 0x14
    id <PSCloudStorageOffersManagerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _requiredStorageThreshold;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000060d3b
@property(nonatomic) _Bool supportsModernAlerts; // @synthesize supportsModernAlerts=_supportsModernAlerts;
@property(nonatomic) _Bool skipCompletionAlert; // @synthesize skipCompletionAlert=_skipCompletionAlert;
@property(nonatomic) _Bool skipRetryWithoutToken; // @synthesize skipRetryWithoutToken=_skipRetryWithoutToken;
@property(nonatomic) _Bool shouldOfferDeviceOffers; // @synthesize shouldOfferDeviceOffers=_shouldOfferDeviceOffers;
@property(nonatomic) _Bool shouldOfferFamilySharePlansOnly; // @synthesize shouldOfferFamilySharePlansOnly=_shouldOfferFamilySharePlansOnly;
@property(nonatomic) unsigned long long requiredStorageThreshold; // @synthesize requiredStorageThreshold=_requiredStorageThreshold;
@property(nonatomic) __weak id <PSCloudStorageOffersManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x0000000000060b18
- (void)commerceDelegateDidCancel:(id)arg1;	// IMP=0x0000000000060a22
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;	// IMP=0x0000000000060983
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;	// IMP=0x0000000000060361
- (void)dealloc;	// IMP=0x000000000006031f
- (void)cancelLoad;	// IMP=0x00000000000602ed
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(_Bool)arg5;	// IMP=0x000000000006024d
- (void)beginFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;	// IMP=0x0000000000060169
- (void)_setupFlowWithNavigationController:(id)arg1 modally:(_Bool)arg2;	// IMP=0x000000000005ffaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
