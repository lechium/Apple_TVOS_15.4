//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AttentionAwareness/NSSecureCoding-Protocol.h>

@interface AWAttentionLostEvent <NSSecureCoding>
{
    double _attentionLostTimeout;	// 40 = 0x28
    id _associatedObject;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000013dc0
- (void).cxx_destruct;	// IMP=0x0000000000013dad
@property(readonly, nonatomic) id associatedObject; // @synthesize associatedObject=_associatedObject;
@property(readonly, nonatomic) double attentionLostTimeout; // @synthesize attentionLostTimeout=_attentionLostTimeout;
- (void)updateWithConfig:(id)arg1;	// IMP=0x0000000000013ca9
- (id)description;	// IMP=0x0000000000013ba9
- (id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 attentionLostTimeout:(double)arg3;	// IMP=0x0000000000013b5a
- (void)validateMask;	// IMP=0x0000000000013b22
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001391e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000013857

@end

