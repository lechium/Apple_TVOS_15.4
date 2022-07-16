//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSMetricsEvent, NSDictionary, NSMutableArray, NSString;

@interface AMSCardAuthorizationTask
{
    _Bool _didBiometricsLockout;	// 8 = 0x8
    _Bool _didCancelHomeButton;	// 9 = 0x9
    long long _confirmationStyle;	// 16 = 0x10
    NSString *_countryCode;	// 24 = 0x18
    NSString *_currencyCode;	// 32 = 0x20
    AMSMetricsEvent *_metricsEvent;	// 40 = 0x28
    NSString *_passSerialNumber;	// 48 = 0x30
    NSString *_passTypeIdentifier;	// 56 = 0x38
    NSDictionary *_paymentSession;	// 64 = 0x40
    NSMutableArray *_userActions;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000cc77a
@property(retain, nonatomic) NSMutableArray *userActions; // @synthesize userActions=_userActions;
@property(nonatomic) _Bool didCancelHomeButton; // @synthesize didCancelHomeButton=_didCancelHomeButton;
@property(nonatomic) _Bool didBiometricsLockout; // @synthesize didBiometricsLockout=_didBiometricsLockout;
@property(readonly, nonatomic) NSDictionary *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(retain, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(retain, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(copy, nonatomic) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property(retain, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) long long confirmationStyle; // @synthesize confirmationStyle=_confirmationStyle;
- (id)_metricsUserActionDictionary;	// IMP=0x00000000000cc589
- (id)_metricsTimestamp;	// IMP=0x00000000000cc4d1
- (void)_metricsPost;	// IMP=0x00000000000cc397
- (id)performCardAuthorization;	// IMP=0x00000000000cc2f6
- (id)initWithPaymentSession:(id)arg1;	// IMP=0x00000000000cc251

@end
