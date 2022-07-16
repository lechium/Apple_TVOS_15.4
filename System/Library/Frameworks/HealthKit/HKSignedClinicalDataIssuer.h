//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface HKSignedClinicalDataIssuer : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_subtitle;	// 24 = 0x18
    NSURL *_wellKnownURL;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001fa58a
- (void).cxx_destruct;	// IMP=0x00000000001fa7ca
@property(readonly, copy, nonatomic) NSURL *wellKnownURL; // @synthesize wellKnownURL=_wellKnownURL;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001fa627
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001fa592
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001fa110
- (unsigned long long)hash;	// IMP=0x00000000001fa0a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001fa09d
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 wellKnownURL:(id)arg4;	// IMP=0x00000000001f9f90
- (id)init;	// IMP=0x00000000001f9f16

@end

