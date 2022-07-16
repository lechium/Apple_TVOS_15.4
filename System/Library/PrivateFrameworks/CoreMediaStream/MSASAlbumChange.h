//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSASInvitation, NSString;

@interface MSASAlbumChange : NSObject
{
    _Bool _wasDeleted;	// 8 = 0x8
    NSString *_GUID;	// 16 = 0x10
    NSString *_ownerEmail;	// 24 = 0x18
    NSString *_ownerPersonID;	// 32 = 0x20
    NSString *_ownerFullName;	// 40 = 0x28
    NSString *_ownerFirstName;	// 48 = 0x30
    NSString *_ownerLastName;	// 56 = 0x38
    NSString *_URLString;	// 64 = 0x40
    MSASInvitation *_invitation;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004a769
@property(nonatomic) _Bool wasDeleted; // @synthesize wasDeleted=_wasDeleted;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) MSASInvitation *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
@property(copy, nonatomic) NSString *ownerLastName; // @synthesize ownerLastName=_ownerLastName;
@property(copy, nonatomic) NSString *ownerFirstName; // @synthesize ownerFirstName=_ownerFirstName;
@property(copy, nonatomic) NSString *ownerFullName; // @synthesize ownerFullName=_ownerFullName;
@property(copy, nonatomic) NSString *ownerPersonID; // @synthesize ownerPersonID=_ownerPersonID;
@property(copy, nonatomic) NSString *ownerEmail; // @synthesize ownerEmail=_ownerEmail;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (id)description;	// IMP=0x000000000004a476

@end
