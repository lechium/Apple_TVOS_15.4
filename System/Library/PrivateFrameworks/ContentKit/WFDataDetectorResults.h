//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, WFFileType;

@interface WFDataDetectorResults : NSObject
{
    NSArray *_textCheckingResults;	// 8 = 0x8
    NSNumber *_number;	// 16 = 0x10
    NSArray *_dictionaries;	// 24 = 0x18
    WFFileType *_dictionaryType;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d1019
@property(readonly, nonatomic) WFFileType *dictionaryType; // @synthesize dictionaryType=_dictionaryType;
@property(readonly, nonatomic) NSArray *dictionaries; // @synthesize dictionaries=_dictionaries;
@property(readonly, nonatomic) NSNumber *number; // @synthesize number=_number;
@property(readonly, nonatomic) NSArray *textCheckingResults; // @synthesize textCheckingResults=_textCheckingResults;
@property(readonly, nonatomic) NSArray *dateComponentsResults;
@property(readonly, nonatomic) NSArray *dates;
@property(readonly, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) NSArray *streetAddresses;
@property(readonly, nonatomic) NSArray *URLs;
- (id)init;	// IMP=0x00000000000d0e1d
- (id)initWithTextCheckingResults:(id)arg1 number:(id)arg2 dictionaries:(id)arg3 dictionaryType:(id)arg4;	// IMP=0x00000000000d0d0d

@end

