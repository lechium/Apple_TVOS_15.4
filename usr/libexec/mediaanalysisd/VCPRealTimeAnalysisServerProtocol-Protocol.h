//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IOSurface, NSDictionary;

@protocol VCPRealTimeAnalysisServerProtocol
- (void)requestAnalysis:(unsigned long long)arg1 ofIOSurface:(IOSurface *)arg2 withProperties:(NSDictionary *)arg3 withReply:(void (^)(NSDictionary *, NSError *))arg4;
@end

