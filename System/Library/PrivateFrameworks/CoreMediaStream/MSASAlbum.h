//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCopying-Protocol.h>
#import <CoreMediaStream/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _ownerIsWhitelisted;	// 8 = 0x8
    _Bool _isFamilySharedAlbum;	// 9 = 0x9
    int _relationshipState;	// 12 = 0xc
    NSString *_ownerEmail;	// 16 = 0x10
    NSString *_ownerPersonID;	// 24 = 0x18
    NSString *_ownerFullName;	// 32 = 0x20
    NSString *_ownerFirstName;	// 40 = 0x28
    NSString *_ownerLastName;	// 48 = 0x30
    NSDate *_subscriptionDate;	// 56 = 0x38
    NSString *_GUID;	// 64 = 0x40
    NSString *_ctag;	// 72 = 0x48
    NSString *_foreignCtag;	// 80 = 0x50
    NSString *_URLString;	// 88 = 0x58
    NSString *_publicURLString;	// 96 = 0x60
    NSDictionary *_metadata;	// 104 = 0x68
    id _context;	// 112 = 0x70
}

+ (id)albumWithAlbum:(id)arg1;	// IMP=0x000000000003f7e5
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003f7dd
+ (id)album;	// IMP=0x000000000003f7c4
- (void).cxx_destruct;	// IMP=0x000000000003f723
@property(nonatomic) _Bool isFamilySharedAlbum; // @synthesize isFamilySharedAlbum=_isFamilySharedAlbum;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *publicURLString; // @synthesize publicURLString=_publicURLString;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(retain, nonatomic) NSString *foreignCtag; // @synthesize foreignCtag=_foreignCtag;
@property(nonatomic) int relationshipState; // @synthesize relationshipState=_relationshipState;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSDate *subscriptionDate; // @synthesize subscriptionDate=_subscriptionDate;
@property(nonatomic) _Bool ownerIsWhitelisted; // @synthesize ownerIsWhitelisted=_ownerIsWhitelisted;
@property(retain, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(retain, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(retain, nonatomic) NSString *ownerFullName; // @synthesize ownerFullName=_ownerFullName;
@property(retain, nonatomic) NSString *ownerPersonID; // @synthesize ownerPersonID=_ownerPersonID;
@property(retain, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
- (id)description;	// IMP=0x000000000003f391
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003effd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003eba3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003eb7e
- (id)metadataValueForKey:(id)arg1;	// IMP=0x000000000003eafb
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003e9d0
@property(readonly, nonatomic) _Bool useForeignCtag;
- (unsigned long long)hash;	// IMP=0x000000000003e9a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003e8d9

@end

