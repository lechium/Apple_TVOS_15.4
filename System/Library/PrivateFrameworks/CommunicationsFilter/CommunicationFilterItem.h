//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CommunicationFilterItem : NSObject
{
    struct __CFPhoneNumber *_phoneNumber;	// 8 = 0x8
    NSString *_emailAddress;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) struct __CFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (id)dictionaryRepresentation;	// IMP=0x0000000000002ed8
- (id)_dictionaryRepresentationWithRedaction;	// IMP=0x0000000000002e56
- (_Bool)matchesFilterItem:(id)arg1;	// IMP=0x0000000000002dc1
@property(readonly, nonatomic) NSString *unformattedID;
- (_Bool)isPhoneNumber;	// IMP=0x0000000000002d8a
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000002b7e
- (id)description;	// IMP=0x0000000000002b53
- (_Bool)_acceptVersion:(id)arg1;	// IMP=0x0000000000002b37
- (_Bool)_acceptItemType:(id)arg1;	// IMP=0x0000000000002b13
- (void)dealloc;	// IMP=0x0000000000002ac2
- (id)initWithEmailAddress:(id)arg1;	// IMP=0x0000000000002a6b
- (id)initWithPhoneNumber:(struct __CFPhoneNumber *)arg1;	// IMP=0x0000000000002a17

@end

