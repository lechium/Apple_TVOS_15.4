//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CHTitleQuery
{
    NSString *_transcribedTitle;	// 8 = 0x8
    NSSet *_titleStrokeIdentifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a1320
@property(readonly, copy, nonatomic) NSSet *titleStrokeIdentifiers; // @synthesize titleStrokeIdentifiers=_titleStrokeIdentifiers;
@property(readonly, copy, nonatomic) NSString *transcribedTitle; // @synthesize transcribedTitle=_transcribedTitle;
- (id)debugName;	// IMP=0x00000000000a12b0
- (void)_setTranscribedTitle:(id)arg1 strokeIdentifiers:(id)arg2;	// IMP=0x00000000000a11f0
- (void)q_updateQueryResult;	// IMP=0x00000000000a0ad0
- (id)initWithRecognitionSession:(id)arg1;	// IMP=0x00000000000a0a70

@end

