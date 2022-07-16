//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BMDSL, NSString;
@protocol BMDSLStateValue;

@interface BMDSLState
{
    BMDSL *_upstream;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    id <BMDSLStateValue> _value;	// 24 = 0x18
    id <BMDSLStateValue> _combinedValue;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006725
- (void).cxx_destruct;	// IMP=0x0000000000006a6c
@property(retain, nonatomic) id <BMDSLStateValue> combinedValue; // @synthesize combinedValue=_combinedValue;
@property(readonly, nonatomic) id <BMDSLStateValue> value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, nonatomic) BMDSL *upstream; // @synthesize upstream=_upstream;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000685d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000672d
- (id)combinedState;	// IMP=0x0000000000006713
- (id)upstreams;	// IMP=0x0000000000006688
- (id)initWithUpstream:(id)arg1 key:(id)arg2 value:(id)arg3;	// IMP=0x0000000000006654
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 upstream:(id)arg3 key:(id)arg4 value:(id)arg5;	// IMP=0x00000000000064fc
- (id)bpsPublisher;	// IMP=0x00000000000053fd

@end

