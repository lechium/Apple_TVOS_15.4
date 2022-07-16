//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCoding-Protocol.h>

@class NSString, TUPhoneNumber;

@interface TUPrivacyRule : NSObject <NSCoding>
{
    int _type;	// 8 = 0x8
    TUPhoneNumber *_phoneNumber;	// 16 = 0x10
    NSString *_email;	// 24 = 0x18
    NSString *_businessID;	// 32 = 0x20
}

+ (id)ruleForBusinessID:(id)arg1;	// IMP=0x00000000000a1928
+ (id)ruleForEmail:(id)arg1;	// IMP=0x00000000000a18db
+ (id)ruleForPhoneNumber:(id)arg1;	// IMP=0x00000000000a188e
- (void).cxx_destruct;	// IMP=0x00000000000a1c81
@property(readonly, nonatomic) NSString *businessID; // @synthesize businessID=_businessID;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) TUPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a1b30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a1aa6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a1975
- (id)initForBusinessID:(id)arg1;	// IMP=0x00000000000a180a
- (id)initForEmail:(id)arg1;	// IMP=0x00000000000a1786
- (id)initForPhoneNumber:(id)arg1;	// IMP=0x00000000000a1702

@end
