//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMFSetVolumeRequest
{
    float _volume;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003a5d3
@property(nonatomic) float volume; // @synthesize volume=_volume;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a696
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a5db

@end
