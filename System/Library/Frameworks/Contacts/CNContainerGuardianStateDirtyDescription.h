//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CNContainerGuardianStateDirtyDescription
{
}

- (void)setCNValue:(id)arg1 onContainer:(id)arg2;	// IMP=0x00000000000073d8
- (id)CNValueForContainer:(id)arg1;	// IMP=0x00000000000073a0
- (_Bool)isWritable;	// IMP=0x0000000000007398
- (Class)valueClass;	// IMP=0x0000000000007387
- (id)key;	// IMP=0x0000000000007373
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000003a6d0
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000003a698
- (_Bool)setABValue:(void *)arg1 onABSource:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000003a5ee
- (int)abPropertyID;	// IMP=0x000000000003a5df

@end

