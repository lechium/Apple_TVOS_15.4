//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter;
@protocol TVLReadWriteFeedResource;

@interface TVLEvaluator : NSObject
{
    NSDateFormatter *_zuluDateFormatter;	// 8 = 0x8
    NSNumberFormatter *_numberFormatter;	// 16 = 0x10
    NSMutableDictionary *_dateFormatterCache;	// 24 = 0x18
    id <TVLReadWriteFeedResource> _feedResource;	// 32 = 0x20
}

+ (id)evaluatePlist:(id)arg1 withFeedResource:(id)arg2;	// IMP=0x0000000000018114
- (void).cxx_destruct;	// IMP=0x000000000001a045
- (id)_removePreferences:(id)arg1;	// IMP=0x0000000000019d81
- (id)_setPreference:(id)arg1;	// IMP=0x0000000000019b59
- (id)_localtime:(id)arg1;	// IMP=0x00000000000197b7
- (id)_lookup:(id)arg1;	// IMP=0x00000000000196ae
- (id)_ifElse:(id)arg1;	// IMP=0x00000000000194d6
- (id)_evaluateArguments:(id)arg1 commandForErrorLogging:(id)arg2;	// IMP=0x000000000001901c
- (id)_evaluateStoreCoverArts:(id)arg1;	// IMP=0x0000000000018d0d
- (id)_evaluateFunctionString:(id)arg1;	// IMP=0x0000000000018978
- (id)_evaluateObject:(id)arg1 withRecursionLevel:(int)arg2;	// IMP=0x00000000000181b1
- (id)initWithFeedResource:(id)arg1;	// IMP=0x000000000001808f

@end

