//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CertUITrustManager, NSString;

@interface CertUIConnectionDelegate : NSObject
{
    CertUITrustManager *_trustManager;	// 8 = 0x8
    id _forwardingDelegate;	// 16 = 0x10
    NSString *_connectionDisplayName;	// 24 = 0x18
    struct {
        unsigned int canAuthenticateAgainstProtectionSpace:1;
        unsigned int didReceiveAuthenticationChallenge:1;
    } _delegateRespondsTo;	// 32 = 0x20
}

+ (id)defaultServiceForProtocol:(id)arg1;	// IMP=0x0000000000002271
- (void).cxx_destruct;	// IMP=0x0000000000002d9c
@property(copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property(nonatomic) __weak id forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;	// IMP=0x000000000000281a
- (void)_continueConnectionWithResponse:(int)arg1 challenge:(id)arg2 service:(id)arg3;	// IMP=0x000000000000251e
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;	// IMP=0x00000000000023a2
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000000225b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x0000000000002208

@end
