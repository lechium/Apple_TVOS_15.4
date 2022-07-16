//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface WBSAutoFillAssociatedDomainsManager : NSObject
{
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;	// 8 = 0x8
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;	// 16 = 0x10
    NSArray *_domainsWithAssociatedCredentials;	// 24 = 0x18
    NSArray *_domainsToConsiderIdentical;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000422b6
@property(copy, nonatomic) NSArray *domainsToConsiderIdentical; // @synthesize domainsToConsiderIdentical=_domainsToConsiderIdentical;
@property(copy, nonatomic) NSArray *domainsWithAssociatedCredentials; // @synthesize domainsWithAssociatedCredentials=_domainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;	// IMP=0x0000000000041fb5
- (void)_updateDomainToDomainsWithAssociatedCredentials;	// IMP=0x0000000000041cc8
- (id)domainsToConsiderIdenticalToDomain:(id)arg1;	// IMP=0x0000000000041c64
- (id)domainsWithAssociatedCredentialsForDomain:(id)arg1;	// IMP=0x0000000000041b91
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1 domainsToConsiderIdentical:(id)arg2;	// IMP=0x0000000000041a66
- (id)initWithDomainsWithAssociatedCredentials:(id)arg1;	// IMP=0x0000000000041a52
- (id)init;	// IMP=0x0000000000041a44

@end
