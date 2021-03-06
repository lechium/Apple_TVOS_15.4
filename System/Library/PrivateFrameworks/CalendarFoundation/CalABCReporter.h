//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface CalABCReporter : NSObject
{
    _Bool _ignoreRateLimiting;	// 8 = 0x8
    NSArray *_events;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
    NSString *_subtype;	// 32 = 0x20
    NSString *_subtypeContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000019ee0
@property(retain, nonatomic) NSString *subtypeContext; // @synthesize subtypeContext=_subtypeContext;
@property(retain, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool ignoreRateLimiting; // @synthesize ignoreRateLimiting=_ignoreRateLimiting;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
- (_Bool)rateLimitingAllowsABCReport;	// IMP=0x0000000000019de0
- (void)report;	// IMP=0x0000000000019b5a
@property(readonly, nonatomic) NSString *domain;
- (id)initWithType:(id)arg1 subtype:(id)arg2 context:(id)arg3;	// IMP=0x0000000000019a86

@end

