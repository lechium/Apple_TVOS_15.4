//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSCopying-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface AKTrustedContactsSyncResult : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_orphanedCustodianUUIDs;	// 8 = 0x8
    NSString *_custodianListVersion;	// 16 = 0x10
    NSArray *_orphanedBeneficiaryUUIDs;	// 24 = 0x18
    NSString *_beneficiaryListVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004d7cd
- (void).cxx_destruct;	// IMP=0x000000000004d8c2
@property(copy, nonatomic) NSString *beneficiaryListVersion; // @synthesize beneficiaryListVersion=_beneficiaryListVersion;
@property(copy, nonatomic) NSArray *orphanedBeneficiaryUUIDs; // @synthesize orphanedBeneficiaryUUIDs=_orphanedBeneficiaryUUIDs;
@property(copy, nonatomic) NSString *custodianListVersion; // @synthesize custodianListVersion=_custodianListVersion;
@property(copy, nonatomic) NSArray *orphanedCustodianUUIDs; // @synthesize orphanedCustodianUUIDs=_orphanedCustodianUUIDs;
- (id)debugDescription;	// IMP=0x000000000004d7d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004d719
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004d684
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004d517

@end

