//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class CLLocation;

@interface DMFFetchLocationResultObject : CATTaskResultObject
{
    CLLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002312c
- (void).cxx_destruct;	// IMP=0x0000000000023307
@property(readonly, copy, nonatomic) CLLocation *location; // @synthesize location=_location;
- (id)description;	// IMP=0x00000000000232a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002320b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023134
- (id)initWithLocation:(id)arg1;	// IMP=0x00000000000230b2

@end

