//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SFAuthenticateAccountResult : NSObject
{
    NSArray *_authenticatedAccounts;	// 8 = 0x8
    NSArray *_knownHomeUserIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003eea0
@property(readonly, nonatomic) NSArray *knownHomeUserIdentifiers; // @synthesize knownHomeUserIdentifiers=_knownHomeUserIdentifiers;
@property(readonly, nonatomic) NSArray *authenticatedAccounts; // @synthesize authenticatedAccounts=_authenticatedAccounts;
- (id)initWithAuthenticatedAccounts:(id)arg1 knownHomeUserIdentifiers:(id)arg2;	// IMP=0x000000000003edf3

@end

