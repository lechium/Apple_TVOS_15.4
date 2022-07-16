//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GEOAnalyticsPipelineDailyCountsQueueElem
{
    int _countType;	// 16 = 0x10
    NSString *_usageString;	// 24 = 0x18
    NSNumber *_usageBool;	// 32 = 0x20
    NSString *_appId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000291e2
@property(readonly, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSNumber *usageBool; // @synthesize usageBool=_usageBool;
@property(readonly, nonatomic) NSString *usageString; // @synthesize usageString=_usageString;
@property(readonly, nonatomic) int countType; // @synthesize countType=_countType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000028d2d
- (unsigned long long)hash;	// IMP=0x0010000000028cb2
- (id)copy;	// IMP=0x0010000000028c53
- (id)initWithType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 createTime:(id)arg5;	// IMP=0x0010000000028b50

@end

