//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTSweetgumPlanGroup : NSObject <NSSecureCoding>
{
    long long _planCategory;	// 8 = 0x8
    NSArray *_plans;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016edc
- (void).cxx_destruct;	// IMP=0x0000000000016f13
@property(retain, nonatomic) NSArray *plans; // @synthesize plans=_plans;
@property(nonatomic) long long planCategory; // @synthesize planCategory=_planCategory;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016ddc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016d6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016c2c
- (id)description;	// IMP=0x0000000000016b59
- (id)init;	// IMP=0x0000000000016b09

@end

