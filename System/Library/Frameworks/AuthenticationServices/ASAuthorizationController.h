//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding;

@interface ASAuthorizationController : NSObject
{
    NSArray *_authorizationRequests;	// 8 = 0x8
    id <ASAuthorizationControllerDelegate> _delegate;	// 16 = 0x10
    id <ASAuthorizationControllerPresentationContextProviding> _presentationContextProvider;	// 24 = 0x18
    NSArray *_customAuthorizationMethods;	// 32 = 0x20
}

+ (id)new;	// IMP=0x0000000000004cff
- (void).cxx_destruct;	// IMP=0x0000000000005887
@property(copy, nonatomic) NSArray *customAuthorizationMethods; // @synthesize customAuthorizationMethods=_customAuthorizationMethods;
@property(nonatomic) __weak id <ASAuthorizationControllerPresentationContextProviding> presentationContextProvider; // @synthesize presentationContextProvider=_presentationContextProvider;
@property(nonatomic) __weak id <ASAuthorizationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *authorizationRequests; // @synthesize authorizationRequests=_authorizationRequests;
- (id)_authorizationFromAuthKitResult:(id)arg1;	// IMP=0x000000000000564c
- (id)_authKitRequestFromAppleIDRequest:(id)arg1;	// IMP=0x0000000000005426
- (id)_authKitRequests;	// IMP=0x0000000000005262
- (void)_performAuthKitRequests:(id)arg1;	// IMP=0x0000000000004e99
- (void)performRequests;	// IMP=0x0000000000004e38
- (id)initWithAuthorizationRequests:(id)arg1;	// IMP=0x0000000000004d42
- (id)init;	// IMP=0x0000000000004d17

@end

