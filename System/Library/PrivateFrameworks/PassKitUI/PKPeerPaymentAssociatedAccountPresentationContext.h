//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject
{
    PKFamilyMember *_member;	// 8 = 0x8
    PKPaymentTransaction *_transaction;	// 16 = 0x10
    long long _setupType;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000182e65
@property(nonatomic) long long setupType; // @synthesize setupType=_setupType;
@property(retain, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) PKFamilyMember *member; // @synthesize member=_member;
- (id)description;	// IMP=0x0000000000182d21
- (id)initWithPKFamilyMember:(id)arg1 setupType:(long long)arg2;	// IMP=0x0000000000182c4c
- (id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000182b6a
- (id)initWithPKFamilyMember:(id)arg1 options:(id)arg2;	// IMP=0x0000000000182a65

@end

