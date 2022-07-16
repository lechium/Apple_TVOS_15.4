//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, NSUUID;

@interface TITraceLogRecord : NSObject
{
    NSMutableArray *_parsedSections;	// 8 = 0x8
    NSUUID *_recordUUID;	// 16 = 0x10
    NSString *_typedString;	// 24 = 0x18
    NSString *_recordType;	// 32 = 0x20
    NSArray *_rawAutocorrectionCandidates;	// 40 = 0x28
    NSArray *_removedAutocorrectionCandidates;	// 48 = 0x30
    NSArray *_finalAutocorrectionCandidates;	// 56 = 0x38
    NSArray *_rawCompletionCandidates;	// 64 = 0x40
    NSArray *_removedCompletionCandidates;	// 72 = 0x48
    NSArray *_finalCompletionCandidates;	// 80 = 0x50
    NSArray *_rawPredictionCandidates;	// 88 = 0x58
    NSArray *_removedPredictionCandidates;	// 96 = 0x60
    NSArray *_finalPredictionCandidates;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000010082
@property(retain, nonatomic) NSArray *finalPredictionCandidates; // @synthesize finalPredictionCandidates=_finalPredictionCandidates;
@property(retain, nonatomic) NSArray *removedPredictionCandidates; // @synthesize removedPredictionCandidates=_removedPredictionCandidates;
@property(retain, nonatomic) NSArray *rawPredictionCandidates; // @synthesize rawPredictionCandidates=_rawPredictionCandidates;
@property(retain, nonatomic) NSArray *finalCompletionCandidates; // @synthesize finalCompletionCandidates=_finalCompletionCandidates;
@property(retain, nonatomic) NSArray *removedCompletionCandidates; // @synthesize removedCompletionCandidates=_removedCompletionCandidates;
@property(retain, nonatomic) NSArray *rawCompletionCandidates; // @synthesize rawCompletionCandidates=_rawCompletionCandidates;
@property(retain, nonatomic) NSArray *finalAutocorrectionCandidates; // @synthesize finalAutocorrectionCandidates=_finalAutocorrectionCandidates;
@property(retain, nonatomic) NSArray *removedAutocorrectionCandidates; // @synthesize removedAutocorrectionCandidates=_removedAutocorrectionCandidates;
@property(retain, nonatomic) NSArray *rawAutocorrectionCandidates; // @synthesize rawAutocorrectionCandidates=_rawAutocorrectionCandidates;
@property(retain, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
@property(readonly, retain, nonatomic) NSArray *parsedSections; // @synthesize parsedSections=_parsedSections;
@property(retain, nonatomic) NSString *typedString; // @synthesize typedString=_typedString;
@property(retain, nonatomic) NSUUID *recordUUID; // @synthesize recordUUID=_recordUUID;
- (void)addParsedSection:(id)arg1;	// IMP=0x000000000000ff1e
- (id)initWithRecordUUID:(id)arg1;	// IMP=0x000000000000fe8c

@end
