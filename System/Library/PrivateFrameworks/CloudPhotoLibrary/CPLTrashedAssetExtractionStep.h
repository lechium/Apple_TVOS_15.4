//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLTrashedAssetExtractionStep
{
    unsigned long long _maximumCount;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (id)shortDescription;	// IMP=0x00000000000d5609
- (_Bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;	// IMP=0x00000000000d55b7
- (_Bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000d4eca
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x00000000000d4d4b

@end

