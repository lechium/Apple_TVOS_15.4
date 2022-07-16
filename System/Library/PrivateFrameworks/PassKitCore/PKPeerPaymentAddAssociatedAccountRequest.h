//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPeerPaymentAddAssociatedAccountRequest
{
    NSString *_altDSID;	// 16 = 0x10
    NSString *_firstName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    unsigned long long _role;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003ed792
@property(nonatomic) unsigned long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x00000000003ed34b

@end

