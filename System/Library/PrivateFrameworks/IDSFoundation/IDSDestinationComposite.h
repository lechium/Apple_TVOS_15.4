//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface IDSDestinationComposite
{
    NSArray *_destinations;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010b6f
- (void).cxx_destruct;	// IMP=0x0000000000011002
@property(readonly, nonatomic) NSArray *destinations; // @synthesize destinations=_destinations;
- (id)description;	// IMP=0x0000000000010f69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010f5e
- (id)destinationLightweightStatus;	// IMP=0x0000000000010d7f
- (id)destinationURIs;	// IMP=0x0000000000010b77
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010af6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010a28
- (id)initWithDestinations:(id)arg1;	// IMP=0x00000000000109ba

@end

