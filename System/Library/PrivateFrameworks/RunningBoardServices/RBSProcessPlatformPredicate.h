//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface RBSProcessPlatformPredicate
{
    int _platform;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00000000000239d7
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000023a09
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000239df
- (id)description;	// IMP=0x0000000000023953
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000238ea
- (unsigned long long)hash;	// IMP=0x00000000000238ab
- (id)processPredicate;	// IMP=0x000000000002388f
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x0000000000023862
- (id)initWithPlatform:(int)arg1;	// IMP=0x0000000000023800

@end

