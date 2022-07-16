//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSSet, UIViewController;

@interface TRProxyAuthOperation
{
    _Bool _shouldUseAIDA;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    NSSet *_targetedServices;	// 24 = 0x18
    UIViewController *_presentingViewController;	// 32 = 0x20
}

+ (id)_logStringForAppleIDServiceType:(long long)arg1;	// IMP=0x000000000000ba1b
+ (long long)_appleIDServiceTypeForTRAccountServices:(id)arg1;	// IMP=0x000000000000b98f
- (void).cxx_destruct;	// IMP=0x000000000000bae4
@property(nonatomic) _Bool shouldUseAIDA; // @synthesize shouldUseAIDA=_shouldUseAIDA;
@property(retain, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) NSSet *targetedServices; // @synthesize targetedServices=_targetedServices;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)_handleProxyAuthenticationResponse:(id)arg1;	// IMP=0x000000000000b7be
- (void)_performProxyAuthenticationWithProxiedDevice:(id)arg1;	// IMP=0x000000000000afce
- (void)_handleProxyDeviceResponse:(id)arg1;	// IMP=0x000000000000ae4c
- (void)_sendProxyDeviceRequest;	// IMP=0x000000000000abf1
- (void)execute;	// IMP=0x000000000000ab6f

@end
