//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INIntentResponse.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WFSplitTextIntentResponse : INIntentResponse
{
    long long _code;	// 8 = 0x8
}

@property(nonatomic) long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000037372b

// Remaining properties
@property(copy, nonatomic) NSArray *text; // @dynamic text;

@end

