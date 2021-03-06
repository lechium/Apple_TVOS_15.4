//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding>
{
    NSArray *_planIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000059a2e
- (void).cxx_destruct;	// IMP=0x0000000000059b5c
@property(retain, nonatomic) NSArray *planIdentifiers; // @synthesize planIdentifiers=_planIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059b1e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059a36
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000059918
- (id)description;	// IMP=0x0000000000059892
- (id)initWithPlanIdentifiers:(id)arg1;	// IMP=0x0000000000059827
- (id)init;	// IMP=0x00000000000597d9

@end

