//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface SPOwnerSessionState : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_serviceState;	// 8 = 0x8
    NSSet *_disabledReasons;	// 16 = 0x10
    NSString *_ownerDataState;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011399
- (void).cxx_destruct;	// IMP=0x00000000000115ed
@property(retain, nonatomic) NSString *ownerDataState; // @synthesize ownerDataState=_ownerDataState;
@property(retain, nonatomic) NSSet *disabledReasons; // @synthesize disabledReasons=_disabledReasons;
@property(retain, nonatomic) NSString *serviceState; // @synthesize serviceState=_serviceState;
- (id)description;	// IMP=0x0000000000011484
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000113a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011328
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000111a0
- (id)initWithServiceState:(id)arg1 disabledReasons:(id)arg2 ownerDataState:(id)arg3;	// IMP=0x00000000000110d9

@end

