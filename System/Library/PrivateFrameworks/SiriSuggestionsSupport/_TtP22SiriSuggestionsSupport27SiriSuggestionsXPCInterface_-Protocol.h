//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol _TtP22SiriSuggestionsSupport27SiriSuggestionsXPCInterface_
- (void)submitFor:(NSString *)arg1 propertyKey:(NSString *)arg2 propertyValue:(NSData *)arg3;
- (void)suggestNextWithRequestId:(NSString *)arg1 catGlobalProperties:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
@end
