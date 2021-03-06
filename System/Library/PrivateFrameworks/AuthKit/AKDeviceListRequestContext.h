//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>
{
    _Bool _includeUntrustedDevices;	// 8 = 0x8
    _Bool _includeFamilyDevices;	// 9 = 0x9
    NSString *_altDSID;	// 16 = 0x10
    NSArray *_services;	// 24 = 0x18
    NSArray *_operatingSystems;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000255a4
- (void).cxx_destruct;	// IMP=0x0000000000025671
@property(copy, nonatomic) NSArray *operatingSystems; // @synthesize operatingSystems=_operatingSystems;
@property(copy, nonatomic) NSArray *services; // @synthesize services=_services;
@property(nonatomic) _Bool includeFamilyDevices; // @synthesize includeFamilyDevices=_includeFamilyDevices;
@property(nonatomic) _Bool includeUntrustedDevices; // @synthesize includeUntrustedDevices=_includeUntrustedDevices;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;	// IMP=0x00000000000255ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000254f2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025321

@end

