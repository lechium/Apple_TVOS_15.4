//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DAContactsAccountProvider : NSObject
{
}

+ (id)providerWithAddressBook:(void *)arg1;	// IMP=0x000000000003e15f
+ (id)providerWithContactStore:(id)arg1;	// IMP=0x000000000003e112
- (id)accountForContainerWithIdentifier:(id)arg1;	// IMP=0x000000000003e273
- (id)allAccounts;	// IMP=0x000000000003e22f
- (id)accountByCreatingAccountWithExternalIdentifier:(id)arg1;	// IMP=0x000000000003e1e2
- (id)fetchedAccountWithExternalIdentifier:(id)arg1;	// IMP=0x000000000003e195

@end

