//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding>
{
    NSArray *_blocklistedDestinations;	// 8 = 0x8
    NSDate *_expiryDate;	// 16 = 0x10
    _Bool _destinationsMustBeInContacts;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001394f7
- (void).cxx_destruct;	// IMP=0x000000000013973d
@property(nonatomic) _Bool destinationsMustBeInContacts; // @synthesize destinationsMustBeInContacts=_destinationsMustBeInContacts;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSArray *blocklistedDestinations; // @synthesize blocklistedDestinations=_blocklistedDestinations;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000139621
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001394ff
- (id)description;	// IMP=0x000000000013941b
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000139241
- (id)initWithBlocklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(_Bool)arg3;	// IMP=0x000000000013919d
- (id)init;	// IMP=0x0000000000139184

@end

