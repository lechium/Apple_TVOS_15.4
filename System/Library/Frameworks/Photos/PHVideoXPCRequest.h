//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHVideoRequestBehaviorSpec;

@interface PHVideoXPCRequest
{
    PHVideoRequestBehaviorSpec *_behaviorSpec;	// 8 = 0x8
    struct CGSize _size;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ce88d
- (void).cxx_destruct;	// IMP=0x00000000000ce87a
@property(readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ce693
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ce5d3
- (id)initWithTaskIdentifier:(id)arg1 assetObjectID:(id)arg2 size:(struct CGSize)arg3 behavior:(id)arg4;	// IMP=0x00000000000ce52b

@end
