//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary;

@protocol BKIOHIDServiceMatcherDataProviding <NSObject>
- (void)registerIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
- (void)unregisterIOHIDServicesCallback:(CDUnknownFunctionPointerType)arg1 matchingDictionary:(NSDictionary *)arg2 target:(void *)arg3 refCon:(void *)arg4;
- (NSArray *)IOHIDServicesMatching:(NSDictionary *)arg1;
@end

