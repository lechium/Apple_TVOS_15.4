//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TIDPNgramRecorder
{
    _Bool _shouldDonateNgramSampleRandomly;	// 8 = 0x8
}

+ (void)enumerateNgramsFromSession:(id)arg1 n:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000018fef1
@property(nonatomic) _Bool shouldDonateNgramSampleRandomly; // @synthesize shouldDonateNgramSampleRandomly=_shouldDonateNgramSampleRandomly;
- (id)_normalizedWordEntryStringForWordEntry:(id)arg1;	// IMP=0x000000000018fa3b
- (_Bool)report;	// IMP=0x000000000018f73e
- (id)randomRecordsLimitedByCount:(unsigned long long)arg1;	// IMP=0x000000000018f4d8
- (id)randomRecords;	// IMP=0x000000000018f4c1
- (id)records;	// IMP=0x000000000018f2e6
- (id)delegate;	// IMP=0x000000000018f2a8
- (id)recordingKey;	// IMP=0x000000000018f208
- (id)initWithTypingSession:(id)arg1 aligned:(id)arg2 n:(unsigned long long)arg3 shouldDonateNgramSampleRandomly:(_Bool)arg4;	// IMP=0x000000000018f1b1

@end
