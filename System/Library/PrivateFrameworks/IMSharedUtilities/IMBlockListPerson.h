//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

@interface IMBlockListPerson : NSObject
{
    CNContact *_cnPerson;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_cachedFullName;	// 24 = 0x18
    NSString *_cachedCompanyName;	// 32 = 0x20
}

+ (id)personWithCNContact:(id)arg1;	// IMP=0x000000000006528d
@property(retain, nonatomic) NSString *cachedCompanyName; // @synthesize cachedCompanyName=_cachedCompanyName;
@property(retain, nonatomic) NSString *cachedFullName; // @synthesize cachedFullName=_cachedFullName;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CNContact *cnPerson; // @synthesize cnPerson=_cnPerson;
- (_Bool)isInAddressBook;	// IMP=0x0000000000065694
- (id)sanitizeString:(id)arg1;	// IMP=0x0000000000065622
- (id)companyName;	// IMP=0x000000000006559a
@property(readonly, nonatomic) NSString *fullName;
- (_Bool)isEqualToPerson:(id)arg1;	// IMP=0x0000000000065478
- (id)initWithCNContact:(id)arg1;	// IMP=0x0000000000065314
- (id)init;	// IMP=0x00000000000652b4

@end

