//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface SagaSetItemPropertyOperation
{
    unsigned int _sagaID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000005e595
- (void).cxx_destruct;	// IMP=0x002000000005e3ad
- (void)main;	// IMP=0x001000000005e096
- (_Bool)isPersistent;	// IMP=0x001000000005e08e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005dfee
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005dec9
- (id)initWithConfiguration:(id)arg1 clientIdentity:(id)arg2 sagaID:(unsigned int)arg3 properties:(id)arg4;	// IMP=0x001000000005de29
- (id)initWithSagaID:(unsigned int)arg1 properties:(id)arg2;	// IMP=0x001000000005dd9d

@end

