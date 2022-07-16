//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface HKHealthRecordsIngestionPerAccountOutcome : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_accountIdentifier;	// 8 = 0x8
    unsigned long long _info;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e2d75
- (void).cxx_destruct;	// IMP=0x00000000000e2eac
@property(readonly, nonatomic) unsigned long long info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2e26
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e2d7d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e2c2d
- (unsigned long long)hash;	// IMP=0x00000000000e2c08
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2bfd
- (id)formattedInfoStringJoinedByString:(id)arg1;	// IMP=0x00000000000e2768
- (id)initWithAccountIdentifier:(id)arg1 info:(unsigned long long)arg2;	// IMP=0x00000000000e26ea

@end

