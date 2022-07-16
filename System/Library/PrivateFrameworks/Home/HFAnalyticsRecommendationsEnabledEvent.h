//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HFAnalyticsRecommendationsEnabledEvent
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _success;	// 9 = 0x9
    int _rankInt;	// 12 = 0xc
    int _rankVersion;	// 16 = 0x10
    double _rank;	// 24 = 0x18
    NSString *_serviceType;	// 32 = 0x20
    NSString *_accessoryCategory;	// 40 = 0x28
    NSString *_source;	// 48 = 0x30
    NSString *_presentationContext;	// 56 = 0x38
    NSString *_configurationType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000005df64
@property(retain, nonatomic) NSString *configurationType; // @synthesize configurationType=_configurationType;
@property(retain, nonatomic) NSString *presentationContext; // @synthesize presentationContext=_presentationContext;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int rankVersion; // @synthesize rankVersion=_rankVersion;
@property(nonatomic) int rankInt; // @synthesize rankInt=_rankInt;
@property(nonatomic) double rank; // @synthesize rank=_rank;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)payload;	// IMP=0x000000000005da1e
- (id)initWithData:(id)arg1;	// IMP=0x000000000005d43c

@end
