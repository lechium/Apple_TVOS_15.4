//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchControlGroupIdentifiersResultObject : CATTaskResultObject
{
    NSArray *_groupIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002048d
- (void).cxx_destruct;	// IMP=0x0000000000020633
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020587
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020495
- (id)initWithGroupIdentifiers:(id)arg1;	// IMP=0x0000000000020413

@end

