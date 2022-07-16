//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, NSString;

@interface WFCNContact
{
    _Bool _fromVCard;	// 8 = 0x8
    int _propertyID;	// 12 = 0xc
    NSString *_accountIdentifier;	// 16 = 0x10
    long long _multivalueIndex;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    CNContact *_contact;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000089576
+ (void)removeContactsChangeObserver:(id)arg1;	// IMP=0x00000000000894f1
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000008942e
+ (void)contactStoreDidChange:(id)arg1;	// IMP=0x00000000000893c5
+ (void)updateContactStoreObservation;	// IMP=0x000000000008929a
+ (id)changeObservers;	// IMP=0x000000000008925d
+ (id)contactWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;	// IMP=0x00000000000891fd
+ (id)contactWithCNContact:(id)arg1;	// IMP=0x00000000000891df
+ (id)contactWithIdentifier:(id)arg1;	// IMP=0x0000000000088f14
+ (id)firstContactWithPhoneNumber:(id)arg1;	// IMP=0x0000000000088d40
+ (id)firstContactWithEmailAddress:(id)arg1;	// IMP=0x0000000000088c33
+ (id)firstContactWithPredicate:(id)arg1 propertyID:(int)arg2 valueEqualityBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000088922
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;	// IMP=0x000000000008876e
+ (id)contactsWithVCardData:(id)arg1;	// IMP=0x00000000000886b3
+ (id)contactsWithName:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x0000000000088571
+ (id)contactsWithName:(id)arg1;	// IMP=0x00000000000884f4
+ (id)allContactsWithSortOrder:(long long)arg1;	// IMP=0x00000000000884db
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x0000000000088357
+ (id)requiredKeysToFetch;	// IMP=0x0000000000087d35
- (void).cxx_destruct;	// IMP=0x00000000000867e6
@property(readonly, nonatomic) _Bool fromVCard; // @synthesize fromVCard=_fromVCard;
@property(readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (long long)multivalueIndex;	// IMP=0x00000000000867b4
- (int)propertyID;	// IMP=0x00000000000867a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000086709
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000086657
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000865a5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086452
- (unsigned long long)hash;	// IMP=0x00000000000863e4
@property(readonly, copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)instantMessageAddresses;	// IMP=0x0000000000085c44
- (id)socialProfiles;	// IMP=0x00000000000857ec
- (id)URLs;	// IMP=0x0000000000085250
- (id)streetAddresses;	// IMP=0x0000000000084d59
- (id)emailAddresses;	// IMP=0x000000000008479c
- (id)phoneNumbers;	// IMP=0x0000000000084256
- (id)dates;	// IMP=0x00000000000841b0
- (id)birthday;	// IMP=0x0000000000083ee5
- (id)thumbnailImageData;	// IMP=0x0000000000083e6b
- (id)imageData;	// IMP=0x0000000000083e1b
- (_Bool)hasImageData;	// IMP=0x0000000000083dd7
- (_Bool)hasValueForPropertyID:(int)arg1;	// IMP=0x0000000000083d51
- (_Bool)isPropertyIDRepresented:(int)arg1;	// IMP=0x0000000000083cf1
- (id)organization;	// IMP=0x0000000000083ca1
- (id)nickname;	// IMP=0x0000000000083c51
- (id)nameSuffix;	// IMP=0x0000000000083c01
- (id)lastName;	// IMP=0x0000000000083bb1
- (id)middleName;	// IMP=0x0000000000083b61
- (id)firstName;	// IMP=0x0000000000083b11
- (id)namePrefix;	// IMP=0x0000000000083ac1
- (id)formattedName;	// IMP=0x000000000008354e
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)vCardRepresentationWithFullData:(_Bool)arg1;	// IMP=0x0000000000082f42
- (id)contactIdentifierForINPerson;	// IMP=0x0000000000082a72
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;	// IMP=0x00000000000829f4
- (id)valueForPropertyID:(int)arg1;	// IMP=0x0000000000082835
- (void)refetchContact;	// IMP=0x000000000008268a
- (id)initWithCNContact:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3 fromVCard:(_Bool)arg4;	// IMP=0x000000000008254b

@end
