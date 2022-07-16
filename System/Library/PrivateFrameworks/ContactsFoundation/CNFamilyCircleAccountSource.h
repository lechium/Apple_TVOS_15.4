//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNDelegateAccountSource-Protocol.h>

@class FAFamilyCircle, NSString;

@interface CNFamilyCircleAccountSource : NSObject <CNDelegateAccountSource>
{
    FAFamilyCircle *_familyCircle;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004f7f4
@property(readonly, nonatomic) FAFamilyCircle *familyCircle; // @synthesize familyCircle=_familyCircle;
- (id)delegateAccounts;	// IMP=0x000000000004f70d
- (id)primaryAccount;	// IMP=0x000000000004f6b1
- (id)myFamilyMemberRecord;	// IMP=0x000000000004f641
@property(readonly, copy) NSString *description;
- (id)initWithFamilyCircle:(id)arg1;	// IMP=0x000000000004f53d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

