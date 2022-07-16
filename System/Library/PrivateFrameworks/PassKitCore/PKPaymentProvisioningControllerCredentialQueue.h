//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKPaymentProvisioningControllerCredentialQueue : NSObject
{
    NSMutableArray *_credentials;	// 8 = 0x8
    NSMutableArray *_completedCredentials;	// 16 = 0x10
    unsigned long long _currentIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000220134
- (id)completedCredentials;	// IMP=0x0000000000220116
- (id)credentials;	// IMP=0x00000000002200f8
- (unsigned long long)completedCount;	// IMP=0x00000000002200e2
- (unsigned long long)remaining;	// IMP=0x0000000000220098
- (unsigned long long)count;	// IMP=0x0000000000220082
- (void)setCurrentCredential:(id)arg1;	// IMP=0x000000000022004c
- (id)nextCredentialToProvision;	// IMP=0x000000000021ffd8
- (void)removeCredential:(id)arg1;	// IMP=0x000000000021ff36
- (void)setCredentialsToProvision:(id)arg1;	// IMP=0x000000000021fee8
- (id)init;	// IMP=0x000000000021fe84

@end
