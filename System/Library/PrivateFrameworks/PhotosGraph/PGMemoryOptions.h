//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSSet;

@interface PGMemoryOptions : NSObject
{
    unsigned long long _reason;	// 8 = 0x8
    NSDate *_universalDate;	// 16 = 0x10
    CLLocation *_location;	// 24 = 0x18
    NSArray *_peopleNames;	// 32 = 0x20
    NSArray *_existingMemories;	// 40 = 0x28
    NSArray *_blockedMemories;	// 48 = 0x30
    NSSet *_blockedFeatures;	// 56 = 0x38
    NSArray *_existingSuggestions;	// 64 = 0x40
    NSDate *_lastMemoryCreationUniversalDate;	// 72 = 0x48
    NSDate *_baseMemoryCreationUniversalDate;	// 80 = 0x50
    NSDictionary *_extraParameters;	// 88 = 0x58
    unsigned long long _randomSeed;	// 96 = 0x60
    double _forcedBeta;	// 104 = 0x68
}

+ (id)stringForReason:(unsigned long long)arg1;	// IMP=0x000000000017dd57
- (void).cxx_destruct;	// IMP=0x000000000017dcd7
@property(nonatomic) double forcedBeta; // @synthesize forcedBeta=_forcedBeta;
@property(nonatomic) unsigned long long randomSeed; // @synthesize randomSeed=_randomSeed;
@property(retain, nonatomic) NSDictionary *extraParameters; // @synthesize extraParameters=_extraParameters;
@property(retain, nonatomic) NSDate *baseMemoryCreationUniversalDate; // @synthesize baseMemoryCreationUniversalDate=_baseMemoryCreationUniversalDate;
@property(retain, nonatomic) NSDate *lastMemoryCreationUniversalDate; // @synthesize lastMemoryCreationUniversalDate=_lastMemoryCreationUniversalDate;
@property(retain, nonatomic) NSArray *existingSuggestions; // @synthesize existingSuggestions=_existingSuggestions;
@property(retain, nonatomic) NSSet *blockedFeatures; // @synthesize blockedFeatures=_blockedFeatures;
@property(retain, nonatomic) NSArray *blockedMemories; // @synthesize blockedMemories=_blockedMemories;
@property(retain, nonatomic) NSArray *existingMemories; // @synthesize existingMemories=_existingMemories;
@property(retain, nonatomic) NSArray *peopleNames; // @synthesize peopleNames=_peopleNames;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDate *universalDate; // @synthesize universalDate=_universalDate;
@property unsigned long long reason; // @synthesize reason=_reason;
- (id)description;	// IMP=0x000000000017d9c5
- (id)initWithReason:(unsigned long long)arg1 universalDate:(id)arg2 location:(id)arg3 peopleNames:(id)arg4;	// IMP=0x000000000017d85a

@end

