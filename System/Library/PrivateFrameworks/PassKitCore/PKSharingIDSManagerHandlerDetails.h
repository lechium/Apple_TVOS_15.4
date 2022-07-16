//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAccountUser, PKFamilyMember;

@interface PKSharingIDSManagerHandlerDetails : NSObject
{
    PKFamilyMember *_familyMember;	// 8 = 0x8
    PKAccountUser *_accountUser;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000da167
@property(readonly, nonatomic) PKAccountUser *accountUser; // @synthesize accountUser=_accountUser;
@property(readonly, nonatomic) PKFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
- (id)description;	// IMP=0x00000000000da092
- (id)aliases;	// IMP=0x00000000000d9fc8
- (id)primaryAppleID;	// IMP=0x00000000000d9f8d
- (id)allHandles;	// IMP=0x00000000000d9e7d
- (id)initWithFamilyMember:(id)arg1 accountUser:(id)arg2;	// IMP=0x00000000000d9de4
- (id)initWithFamilyMember:(id)arg1;	// IMP=0x00000000000d9d79

@end
