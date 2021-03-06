//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>
#import <ContentKit/WFNaming-Protocol.h>
#import <ContentKit/WFSerializableContent-Protocol.h>

@class NSArray, NSData, NSDate, NSString, WFContactLabeledValue, WFFileRepresentation;

@interface WFContact : NSObject <WFNaming, NSCopying, NSSecureCoding, WFSerializableContent>
{
    _Bool _hasImageData;	// 8 = 0x8
    int _propertyID;	// 12 = 0xc
    WFFileRepresentation *_vCardRepresentation;	// 16 = 0x10
    WFFileRepresentation *_fullDataVCardRepresentation;	// 24 = 0x18
    long long _multivalueIndex;	// 32 = 0x20
    NSString *_nickname;	// 40 = 0x28
    NSArray *_socialProfiles;	// 48 = 0x30
}

+ (id)objectWithWFSerializedRepresentation:(id)arg1;	// IMP=0x00000000000315a9
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000315a1
+ (void)removeContactsChangeObserver:(id)arg1;	// IMP=0x000000000003154f
+ (id)addContactsChangeObserver:(CDUnknownBlockType)arg1;	// IMP=0x00000000000314ea
+ (long long)predictedTypeForHandleValue:(id)arg1 allowsCustomHandles:(_Bool)arg2;	// IMP=0x000000000003143e
+ (long long)predictedTypeForHandleValue:(id)arg1;	// IMP=0x000000000003142a
+ (id)firstContactWithPhoneNumber:(id)arg1;	// IMP=0x00000000000313c5
+ (id)firstContactWithEmailAddress:(id)arg1;	// IMP=0x0000000000031360
+ (id)contactWithVCardData:(id)arg1 propertyID:(int)arg2 multivalueIndex:(long long)arg3;	// IMP=0x00000000000312e9
+ (id)contactsWithVCardData:(id)arg1;	// IMP=0x0000000000031284
+ (id)contactsWithName:(id)arg1;	// IMP=0x000000000003121f
+ (id)allContactsWithSortOrder:(long long)arg1;	// IMP=0x00000000000311ee
+ (id)allContactsWithSortOrder:(long long)arg1 passingTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000003117a
+ (Class)preferredConcreteSubclass;	// IMP=0x0000000000031169
+ (id)cnContactWithINPerson:(id)arg1;	// IMP=0x000000000008bbfe
+ (id)labelFromINPersonHandleLabel:(id)arg1;	// IMP=0x000000000008ba37
- (void).cxx_destruct;	// IMP=0x000000000003112b
@property(readonly, nonatomic) NSArray *socialProfiles; // @synthesize socialProfiles=_socialProfiles;
@property(readonly, nonatomic) _Bool hasImageData; // @synthesize hasImageData=_hasImageData;
@property(readonly, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, nonatomic) long long multivalueIndex; // @synthesize multivalueIndex=_multivalueIndex;
@property(readonly, nonatomic) int propertyID; // @synthesize propertyID=_propertyID;
- (id)wfSerializedRepresentation;	// IMP=0x0000000000030f43
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030e33
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030cd0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030c97
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *wfName;
@property(readonly, nonatomic) NSArray *instantMessageAddresses;
@property(readonly, nonatomic) NSArray *URLs;
@property(readonly, nonatomic) NSArray *streetAddresses;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) NSArray *dates;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) WFContactLabeledValue *birthday;
@property(readonly, nonatomic) NSData *thumbnailImageData;
@property(readonly, nonatomic) NSData *imageData;
@property(readonly, nonatomic) NSString *organization;
@property(readonly, nonatomic) NSString *nameSuffix;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *middleName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) NSString *namePrefix;
@property(readonly, nonatomic) NSString *formattedName;
- (id)vCardRepresentationWithFullData:(_Bool)arg1;	// IMP=0x0000000000030b20
@property(readonly, nonatomic) WFFileRepresentation *fullDataVCardRepresentation; // @synthesize fullDataVCardRepresentation=_fullDataVCardRepresentation;
@property(readonly, nonatomic) WFFileRepresentation *vCardRepresentation; // @synthesize vCardRepresentation=_vCardRepresentation;
- (id)contactWithPropertyID:(int)arg1 multivalueIndex:(long long)arg2;	// IMP=0x0000000000030a83
- (id)valueForPropertyID:(int)arg1;	// IMP=0x0000000000030a7b
- (_Bool)hasValueForPropertyID:(int)arg1;	// IMP=0x0000000000030a73
- (id)contactIdentifierForINPerson;	// IMP=0x000000000008aac2
- (id)INPersonRepresentation;	// IMP=0x000000000008a305

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

