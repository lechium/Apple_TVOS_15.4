//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CRMultiLocaleTextRecognizer
{
    NSMutableDictionary *_textRecognizers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001a67e
@property(retain) NSMutableDictionary *textRecognizers; // @synthesize textRecognizers=_textRecognizers;
- (void)cancel;	// IMP=0x000000000001a5d1
- (id)identifierForTextFeature:(id)arg1;	// IMP=0x000000000001a534
- (id)decodingStats;	// IMP=0x000000000001a347
- (id)inferenceStats;	// IMP=0x000000000001a135
- (id)recognizerForIdentifier:(id)arg1;	// IMP=0x0000000000019fb2
- (id)initWithImageReaderOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019e43

@end

