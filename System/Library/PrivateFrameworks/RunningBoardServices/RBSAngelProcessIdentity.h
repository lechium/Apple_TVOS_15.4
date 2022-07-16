//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSAngelProcessIdentity
{
    NSString *_angelJobLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000018457
- (id)angelJobLabel;	// IMP=0x0000000000018446
- (_Bool)isAnonymous;	// IMP=0x000000000001843e
- (_Bool)isAngel;	// IMP=0x0000000000018436
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000001839a
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000018370
- (id)debugDescription;	// IMP=0x000000000001833c
- (_Bool)_matchesIdentity:(id)arg1;	// IMP=0x00000000000182c8
- (id)copyWithAuid:(unsigned int)arg1;	// IMP=0x00000000000182bd
- (id)_initAngelWithJobLabel:(id)arg1;	// IMP=0x0000000000018186

@end

