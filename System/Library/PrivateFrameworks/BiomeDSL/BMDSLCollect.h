//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMDSL;

@interface BMDSLCollect
{
    BMDSL *_upstream;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000036e6
- (void).cxx_destruct;	// IMP=0x00000000000038c0
@property(readonly, nonatomic) BMDSL *upstream; // @synthesize upstream=_upstream;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000378c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000036ee
- (id)upstreams;	// IMP=0x000000000000365b
- (id)initWithUpstream:(id)arg1;	// IMP=0x000000000000363c
- (id)initWithUpstream:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;	// IMP=0x0000000000003556
- (id)bpsPublisher;	// IMP=0x00000000000056a2

@end
