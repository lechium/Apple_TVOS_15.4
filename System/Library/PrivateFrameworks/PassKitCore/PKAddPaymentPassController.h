//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAddPaymentPassRequestConfiguration;
@protocol PKAddPaymentPassControllerDelegate;

@interface PKAddPaymentPassController : NSObject
{
    id <PKAddPaymentPassControllerDelegate> _delegate;	// 8 = 0x8
    PKAddPaymentPassRequestConfiguration *_configuration;	// 16 = 0x10
}

+ (_Bool)canAddPaymentPass;	// IMP=0x000000000001ce7e
+ (Class)_desiredClass;	// IMP=0x000000000001ce74
- (void).cxx_destruct;	// IMP=0x000000000001cf73
@property(retain, nonatomic) PKAddPaymentPassRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <PKAddPaymentPassControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cf1f
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cf09
- (id)initWithRequestConfiguration:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000001cefb
- (id)init;	// IMP=0x000000000001ceed

@end
