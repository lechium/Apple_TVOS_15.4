//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerGuardianRestrictedDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x0000000000007321
- (id)CNValueForContainer:(id)arg1;	// IMP=0x00000000000072e9
- (_Bool)isWritable;	// IMP=0x00000000000072e1
- (Class)valueClass;	// IMP=0x00000000000072d0
- (id)key;	// IMP=0x00000000000072bc
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000003a5b5
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000003a57d
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000003a4d3
- (int)abPropertyID;	// IMP=0x000000000003a4c4

@end

