//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DDScannerServiceConfiguration, NSArray;

@interface CHDataDetectorQuery
{
    DDScannerServiceConfiguration *_dataDetectorConfiguration;	// 8 = 0x8
    NSArray *_foundItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e4b60
- (id)debugName;	// IMP=0x00000000000e4b30
@property(copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems; // @synthesize foundItems=_foundItems;
- (void)_enumerateDetectedRangesForContextualTextResults:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e3b80
- (id)_dataDetectorResultsForSessionResult:(id)arg1;	// IMP=0x00000000000e21a0
- (void)q_updateQueryResult;	// IMP=0x00000000000e20e0
- (void)stop;	// IMP=0x00000000000e20c0
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x00000000000e1f30

@end
